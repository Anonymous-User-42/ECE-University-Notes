
package coe318.lab7;

/**
 *
 * @author Harjeev
 */
/**
  * This class is where voltage sources are checked to have correct values
  * and where the instance variables are assigned.
  */
public class VoltageSource extends Components {
    private static int numVol = 1;
    private int identity;
 
     /**
      * This constructor assignees the instance variables of the voltage source
      * after checking if it is correct.
     * @param voltage
     * @param node1
     * @param node2
      */
    public VoltageSource(double voltage, int node1, int node2){
        if (voltage==0){
            throw new IllegalArgumentException("Voltage can't be zero");
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
            this.value = voltage;
            this.identity = numVol;
            numVol ++;
        }
    }
    
     /**
     * Prints the string representation of the voltage source.
     */
    @Override
   public String toString() {
    int smallerNode = Math.min(this.a, this.b);
    int largerNode = Math.max(this.a, this.b);
    // Ensure positive value for polarity
    double absValue = Math.abs(this.value);
    return "V" + this.identity + " " + smallerNode + " " + largerNode + " DC " + absValue;
}
}