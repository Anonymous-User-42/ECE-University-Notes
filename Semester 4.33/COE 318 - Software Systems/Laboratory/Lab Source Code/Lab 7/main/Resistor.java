/**
 *
 * @author Sayeed Ahamad
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
        if (resistance <= 0){
            throw new IllegalArgumentException("Resistance Cannot be equal to or less than Zero");
        }
        else if (node1 < 0){
            throw new IllegalArgumentException("Node Cannot be equal to or less than Zero");
        }
        else if (node2 < 0){
            throw new IllegalArgumentException("Node Cannot be equal to or less than Zero");
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
        return "R" + this.identity + " " + Math.min(this.a, this.b) + " " + Math.max(this.a, this.b) + " " + this.value; 
    }
}