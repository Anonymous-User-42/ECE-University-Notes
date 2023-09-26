/**
 *
 * @author Your Name
 */
package coe318.lab2;
public class Counter {
    //Instance variables here
    public Counter(int modulus, Counter left) {
        
    }


    /**
     * @return the modulus
     */
    public int getModulus() {
        return 1;
    }

    /**
     * Returns the Counter to the left attached to this
     * Counter.  Returns null if there is no Counter
     * to the left.
     * @return the left
     */
    public Counter getLeft() {
        return null;
    }

    /**
     * @return the digit
     */
    public int getDigit() {
        return 1;
    }

    /**
     * @param digit the digit to set
     */
    public void setDigit(int digit) {
    }

    /**
     * Increment this counter.  If it rolls over,
     * its left Counter is also incremented if it
     * exists.
     */
    public void increment() {
    
    }

    /** Return the count of this Counter combined
     * with any Counter to its left.
     *
     * @return the count
     */
    public int getCount() {
        return 1;
    }

    /** Returns a String representation of the Counter's
     * total count (including its left neighbour).
     * @return the String representation
     */
    @Override
    public String toString() {
        //DO NOT MODIFY THIS CODE
        return "" + getCount();
    }

}
