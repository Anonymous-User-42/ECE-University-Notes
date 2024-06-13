/**
 * @author Sayeed Ahamad
 */
public class Node {
    private static int intNodeID = 0; // static variable to track the intitialized node ID
    private int mainNodeID;

    public Node() {
        this.mainNodeID = intNodeID; // Assign the current value of intNodeID as the node's id
        intNodeID++; // Incrementing intNodeID for the int Node
    }

    @Override
    public String toString() {
        return Integer.toString(mainNodeID);
    }
}

