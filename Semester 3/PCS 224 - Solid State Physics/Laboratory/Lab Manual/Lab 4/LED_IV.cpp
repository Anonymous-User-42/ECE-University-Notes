 // Call libraries required for external breakout boards and communications.
#include <Wire.h>
#include <SPI.h>
#include <Adafruit_MCP4725.h> // DAC library
#include <Adafruit_INA219.h> // INA219 current sensor library

// Declare a current sensor object.
Adafruit_INA219 ina219; // Commands like ina219.getCurrent_mA() will read the current.

// Declare our voltage supply objects.
Adafruit_MCP4725 dac_LEDsupply;
#define DAC_RESOLUTION (9) // Set this value to 9, 8, 7, 6 or 5 to adjust the resolution.

// Declare some useful variables.
float voltageAcrossLED;
float currentAcrossLED;

void setup(void) {
    Serial.begin(9600); // Initiates serial communication, so we can send our data to
                        // our computer. This is where the the baud rating is set. 
    // Initialize the INA219 sensor (current sensor).
    ina219.begin();
    // Initialize our DAC breakout board.
    dac_LEDsupply.begin(0x62); // 0x62 sets the hex address of dac
                         // so the arduino addresses the correct DAC.
}

void loop() {
    //for( int ? = ?; i <; i += ?){
        // Since the DAC provides 12-bit resolution, the command
        // dac_LEDsupply.setVoltage(0, false); sets the output voltage to 0V and
        // dac_LEDsupply.setVoltage(4095, false); sets the output voltage to 5V.
        // Use the dac_LEDsupply.setVoltage command to set your voltage based on where you are in the loop. 
        
        // Set your desired voltage by selecting a linear range from 0 to 4095.
        // Set the voltage to range from 5V to 0V in 0.025V steps.

        // Sweep VDS from 0 to 5V (approximately... may be lower due to BJT stage).
        // Question: If we increase DAC output by “i+=20” what is the corresponding
        // change in voltage?
        delay(10);
        voltageAcrossLED = ina219.getBusVoltage_V();  //Take a voltage reading
        Serial.print(voltageAcrossLED); //Print the voltage reading
        Serial.print(" ");  //Add a space between the voltage reading and the next reading taken 

        // Take and print a current reading using the same method as the three lines above 
        // The command to take a current reading from the INA is ina219.getCurrent_mA()

        //if(currentAcrossLED>){  //Make a break condition
          //  i = ??;
        //}


        dac_LEDsupply.setVoltage(0,false);// Turn off the LED voltage supply.
        delay(30); // Let the system cool
        Serial.println(""); // Start a new line for your next run through the loop. 
        

}
}
