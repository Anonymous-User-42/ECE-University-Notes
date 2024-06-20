/**
 *
 * @author Sayeed Ahamad
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
        if (voltage <= 0) {
            throw new IllegalArgumentException("Voltage Cannot be equal to or less than Zero");
        }
        else if (node1 <= 0) {
            throw new IllegalArgumentException("Node Cannot be equal to or less than Zero");
        }
        else if (node2 <= 0) {
            throw new IllegalArgumentException("Node Cannot be equal to or less than Zero");
        }
        else {
            this.a = node1;
            this.b = node2;
            this.value = voltage;
            this.identity = numVol;
            numVol++;
        }
    }
    
     /**
     * Prints the string representation of the voltage source.
     */
    @Override
   public String toString() {
    return "V" + this.identity + " " + Math.min(this.a, this.b) + " " + Math.max(this.a, this.b) + " DC " + Math.abs(this.value);
}
}