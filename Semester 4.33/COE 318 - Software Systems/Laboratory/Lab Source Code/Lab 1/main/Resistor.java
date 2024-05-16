/**
 * A Resistor models an ideal resistor that obeys Ohm's Law.
 *
 * @author Sayeed Ahamad
 */
// package coe318.lab1;

public class Resistor {
        double resistance, current;
    public Resistor(double resistance) {
        this.resistance = resistance;
    }

    public double getResistance() {
        return this.resistance;
    }

    public double getVoltage() {
        return this.getCurrent() * this.getResistance();
    }

    public void setVoltage(double voltage) {
        if (voltage >= -50 && voltage <= 50) {
            this.resistance = voltage / this.getCurrent();
        } else {
            System.out.println("Voltage not greater than -50V or Volatge not less than +50V\n");
        }
    }

    public double getCurrent() {
        return this.current;
    }

    public void setCurrent(double current) {
        if (current >= -5 && current <= 5) {
            this.current = current;
        } else {
            System.out.println("Current not greater than -5A or Current not less than +5A\n");
        }
    }

    public double getPower() {
        return getVoltage() * getCurrent();
    }

    public static void main(String[] args) {
        Resistor r1, r2;
        System.out.println("Creating a 50 Ohm resistor (r1)");
        r1 = new Resistor(50.0);
        System.out.println("Its resistance is "
                + r1.getResistance() + " Ohms");
        System.out.println("Its current is "
                + r1.getCurrent() + " Amps");
        System.out.println("Its voltage is "
                + r1.getVoltage() + " Volts");
        System.out.println("Its power is "
                + r1.getPower() + " Watts");
        System.out.println("Creating a 100 Ohm resistor (r2)");
        r2 = new Resistor(100.0);
        System.out.println("Its resistance is "
                + r2.getResistance() + " Ohms");
        System.out.println("Setting r1's current to 10 Amps");
        r1.setCurrent(10.0);
        System.out.println("Setting r1's current to 2 Amps");
        r1.setCurrent(2.0);
        System.out.println("Its current is "
                + r1.getCurrent() + " Amps");
        System.out.println("Its voltage is "
                + r1.getVoltage() + " Volts");
        System.out.println("Its power is "
                + r1.getPower() + " Watts");
        System.out.println("Setting r1's voltage to 90 Volts");
        r1.setVoltage(90.0);
        System.out.println("Setting r1's voltage to 50 Volts");
        r1.setVoltage(50.0);
        System.out.println("Its current is "
                + r1.getCurrent() + " Amps");
        System.out.println("Setting r2's current to 3 Amps");
        r2.setCurrent(3.0);
        System.out.println("Its voltage is "
                + r2.getVoltage() + " Volts");
    }
}
