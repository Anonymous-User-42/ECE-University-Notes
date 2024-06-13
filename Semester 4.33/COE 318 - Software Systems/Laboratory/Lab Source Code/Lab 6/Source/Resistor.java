/**
 * @author Sayeed Ahamad
 */
public class Resistor {
    private static int nextResistorId = 1; // static variable to track the next resistor id
    private int resistorId;
    private double resistance;
    private Node node1;
    private Node node2;

    public Resistor(double resistance, Node node1, Node node2) {
        if (resistance <= 0) {
            throw new IllegalArgumentException("Resistance must be greater than 0");
        }
        if (node1 == null || node2 == null) {
            throw new IllegalArgumentException("Nodes cannot be null");
        }
        
        this.resistorId = nextResistorId;
        nextResistorId++;
        this.resistance = resistance;
        this.node1 = node1;
        this.node2 = node2;
    }

    public Node[] getNodes() {
        Node[] nodes = {node1, node2};
        return nodes;
    }

    @Override
    public String toString() {
        return "R" + resistorId + " " + node1 + " " + node2 + " " + resistance;
    }
}
