package coe318.lab7;

/**
 *
 * @author Harjeev
 */
/**
  * This class is needed so that the VoltageSource and Resistor classes can use it as a parent.
  * This allows the Array List used in the UserMain file to be of type component.
  */
public abstract class Components {
    protected double value;
    protected int a, b;
    
     /**
     * @return the value of the first node as an integer.
     */
    public int getNode1(){
        return this.a;
    }
}