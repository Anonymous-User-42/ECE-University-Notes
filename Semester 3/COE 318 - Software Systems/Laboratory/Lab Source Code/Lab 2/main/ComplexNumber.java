package coe318.lab2;

/**
 * ComplexNumber models a complex number expressed in rectangular form (real and
 * imaginary parts). It is an <em>immutable</em> object.
 *
 * @author Sayeed Ahamad
 */
public class ComplexNumber {
    double real, imaginary;

    public ComplexNumber(double re, double im) {
        real = re;
        imaginary = im;
    }

    public double getReal() {
        return real;	//A stub: to be fixed
    }

    public double getImaginary() {
        return imaginary;	//A stub: to be fixed
    }

    public ComplexNumber negate() {
        return new ComplexNumber(-this.getReal(), -this.getImaginary()); //A stub: to be fixed
    }

    public ComplexNumber add(ComplexNumber z) {
        double r = this.getReal() + z.getReal();
        double i = this.getImaginary() + z.getImaginary();
        return new ComplexNumber(r, i);	//A stub: to be fixed
    }

    public ComplexNumber subtract(ComplexNumber z) {
        double r = this.getReal() - z.getReal();
        double i = this.getImaginary() - z.getImaginary();
        return new ComplexNumber(r, i);	//A stub: to be fixed
    }

    public ComplexNumber multiply(ComplexNumber z) {
        double r = this.getReal() * z.getReal() - this.getImaginary() * z.getImaginary();
        double i = this.getReal() * z.getImaginary() + this.getImaginary() * z.getReal();
        return new ComplexNumber(r, i);	//A stub: to be fixed
    }

    public ComplexNumber reciprocal() {
        double r = this.getReal() / (Math.pow(getReal(), 2) + Math.pow(getImaginary(), 2));
        double i = -this.getImaginary() / (Math.pow(getReal(), 2) + Math.pow(getImaginary(), 2));
        return new ComplexNumber(r, i);	//A stub: to be fixed
    }

    public ComplexNumber divide(ComplexNumber z) {
        double r = (this.getReal() * z.getReal() + this.getImaginary() * z.getImaginary()) / (Math.pow(z.getReal(), 2) + Math.pow(z.getImaginary(), 2));
        double i = (this.getReal() * -z.getImaginary() + z.getReal() * this.getImaginary()) / (Math.pow(z.getReal(), 2) + Math.pow(z.getImaginary(), 2));
        return new ComplexNumber(r, i);	//A stub: to be fixed
    }

    @Override
    public String toString() {
//DO NOT MODIFY THIS CODE!
        String str = "" + this.getReal();
        if (this.getImaginary() == 0.0) {
            return str;
        }
        if (this.getImaginary() > 0) {
            return str + " + i" + this.getImaginary();
        } else {
            return str + " - i" + -this.getImaginary();
        }
    }
}
