  // Call libraries required for external breakout boards and communications.
#include <Wire.h>
#include <SPI.h>
#include <Adafruit_MCP4725.h> // DAC library
#include <Adafruit_INA219.h> // INA219 current sensor library

// Declare a current sensor object.
Adafruit_INA219 ina219; // Commands like ina219.getCurrent_mA() will read the current.

// Declare our voltage supply objects.
Adafruit_MCP4725 dac_vds;
Adafruit_MCP4725 dac_vgs;
#define DAC_RESOLUTION (9) // Set this value to 9, 8, 7, 6 or 5 to adjust the resolution.

// Declare some useful variables.
int stepFunction = 0; // Will allow us to increment VDS or VGS as desired.

void setup(void) {
    Serial.begin(9600); // Initiates serial communication, so we can send our data to
                        // our computer.
    // Initialize the INA219 sensor (current sensor).
    ina219.begin();
    // Initialize our DAC breakout boards.
    dac_vds.begin(0x62); // 0x62 sets the hex address of dac_vds
                         // so the arduino addresses the correct DAC.
    dac_vgs.begin(0x63);
}

void loop() {

// Set the Gate voltage, VGS.
// Since the DAC provides 12-bit resolution, the command
// dac_vgs.setVoltage(0, false) sets the output voltage to 0V and
// dac_vgs.setVoltage(4095, false) sets the output voltage to 5V.
// Set your desired voltage by selecting a linear range from 0 to 4095.
// Set the voltage to range from 5V to 0V in 0.5V steps.
float VGS = 3; // Fix VGS voltage at 5V. To adjust to 4.5V, change variable here and
               // re-upload program.
  dac_vgs.setVoltage((VGS/5.0)*4095, false);

// Print Gate voltage to serial port.
  Serial.print("GATE VOLTAGE VGS (V) = " );
  Serial.println(VGS);

// Print table headers to serial port.
  Serial.print("VDS");
  Serial.print("  ");
  Serial.println("ID");

// Sweep VDS from 0 to 5V (approximately... may be lower due to BJT stage).
// Question: If we increase DAC output by “i+=20” what is the corresponding
// change in voltage?

for (int i=0; i<4096;i+=20) {
    dac_vds.setVoltage(i, false);
    delay(5); // Delay for 5ms to stabilize circuit.

    // Read VDS and ID at/across transistor.
    Serial.print(ina219.getBusVoltage_V()); 
    Serial.print("  ");
    Serial.println(ina219.getCurrent_mA());
    
    // To prevent overheating from excessive current we shut down VDS for a few ms.
    // We are effectively pulsing the transistor to ensure we don’t exceed
    // Pmax rating.
    dac_vds.setVoltage(0, false); // Set VDS to 0V to allow cooling.
    delay(10); // Delay 10ms to allow MOSFET to cool.
}
delay(10000); // Delay 10s to allow BJT to cool between cycles
}