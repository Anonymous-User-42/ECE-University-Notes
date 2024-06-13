/**
 * @author Sayeed Ahamad
 */
public class MainCircuit {

    /**
     * @param args the command line arguments
     */
    public static void main (String[] args) {
        Node node1 = new Node();
        Node node2 = new Node();
        Node node3 = new Node();
        Resistor resistor1 = new Resistor(100.0, node1, node2);
        Resistor resistor2 = new Resistor(200.0, node2, node3);
        Circuit circuit = Circuit.getInstance();

        // Add resistors to the circuit
        circuit.add(resistor1);
        circuit.add(resistor2);

        // Print the circuit's contents
        System.out.println(circuit);
    }
}


    

