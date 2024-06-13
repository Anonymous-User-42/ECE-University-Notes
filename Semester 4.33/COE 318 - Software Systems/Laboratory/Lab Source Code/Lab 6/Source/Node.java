/**
 * @author Sayeed Ahamad
 */
public class Node {
    private static int nextNodeId = 0; // static variable to track the next node id
    private int nodeId;

    public Node() {
        this.nodeId = nextNodeId; // Assign the current value of nextNodeId as the node's id
        nextNodeId++; // Increment nextNodeId for the next Node
    }

    @Override
    public String toString() {
        return Integer.toString(nodeId);
    }
}

