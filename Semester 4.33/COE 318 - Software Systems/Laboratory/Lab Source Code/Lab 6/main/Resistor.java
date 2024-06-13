/**
 * @author Sayeed Ahamad
 */
public class Resistor {
    private static int intResistorID = 1; // static variable to track the next resistor ID
    private int mainResistorID;
    private double resistance;
    private Node node_i;
    private Node node_j;

    public Resistor(double resistance, Node node_i, Node node_j) {
        if (resistance <= 0) {
            throw new IllegalArgumentException("Resistance must be greater than 0");
        }
        else if (node_i == null || node_j == null) {
            throw new IllegalArgumentException("Nodes cannot be null");
        }
        
        this.mainResistorID = intResistorID;
        intResistorID++;
        this.resistance = resistance;
        this.node_i = node_i;
        this.node_j = node_j;
    }

    public Node[] getNodes() {
        Node[] nodes = {node_i, node_j};
        return nodes;
    }

    @Override
    public String toString() {
        return "R" + mainResistorID + " " + node_i + " " + node_j + " " + resistance;
    }
}
