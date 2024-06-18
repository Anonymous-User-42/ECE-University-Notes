
package coe318.lab7;

/**
 *
 * @author Harjeev
 */
 /**
  * This class is where resistors are checked to have correct values
  * and where the instance variables are assigned.
  */
public class Resistor extends Components{
    private static int numRes = 1;
    private int identity;
    
     /**
      * This constructor assignees the instance variables of the resistor after checking if it is correct.
     * @param resistance
     * @param node1
     * @param node2
      */
    public Resistor(double resistance, int node1, int node2){
        if (resistance<0){
            throw new IllegalArgumentException("Resistance can't be negative");
        }
        else if (resistance==0){
            throw new IllegalArgumentException("Resistance can't be zero");
        }
        else if (node1<0){
            throw new IllegalArgumentException("The first node can't be negative");
        }
        else if (node2<0){
            throw new IllegalArgumentException("The second node can't be negative");
        }
        else{      
            this.a = node1;
            this.b = node2;
            this.value = resistance;
            this.identity = numRes;
            numRes ++;
        }
    }
    
     /**
     * Prints the string representation of the resistor.
     */
    @Override
    public String toString() {
     int smallerNode = Math.min(this.a, this.b);
     int largerNode = Math.max(this.a, this.b);
        return "R" + this.identity + " " + smallerNode + " " + largerNode + " " + this.value; 
    }
}