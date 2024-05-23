/**
 *
 * @author Sayeed Ahamad
 */
// package coe318.lab3;


public class Counter {
    private int modulus;
    private Counter leftDigit;
    private int digit;

    public Counter(int modulus, Counter leftDigit) {
        this.modulus = modulus;
        this.leftDigit = leftDigit;
        this.digit = 0;
    }

    public int getModulus() {
        return modulus;
    }

    public Counter getLeftDigit() {
        return leftDigit;
    }

    public int getDigit() {
        return digit;
    }

    public void setDigit(int digit) {
        this.digit = digit;
    }

    public void increment() {
        digit++;
        if (digit == modulus) {
            digit = 0;
            if (leftDigit != null) {
                leftDigit.increment();
            }
        }
    }

    public int getCount() {
        if (leftDigit == null) {
            return digit;
        } else {
            return leftDigit.getCount() * modulus + digit;
        }
    }

    @Override
    public String toString() {
        //DO NOT MODIFY THIS CODE
        return "" + getCount();
    }
}
