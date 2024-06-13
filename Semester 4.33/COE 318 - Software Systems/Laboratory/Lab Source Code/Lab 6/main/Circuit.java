package main;
import java.util.ArrayList;
import java.util.List;

/**
 * @author Sayeed Ahamad
 */
public class Circuit {
    private static Circuit instance = null;
    private List<Resistor> resistors;

    private Circuit() {
        resistors = new ArrayList<>();
    }

    public static Circuit getInstance() {
        if (instance == null) {
            instance = new Circuit();
        }
        return instance;
    }

    /**
     *
     * @param r
     */
    public void add(Resistor r) {
        resistors.add(r);
    }

    @Override
    public String toString() {
        StringBuilder circuitString = new StringBuilder();
        for (Resistor resistor : resistors) {
            circuitString.append(resistor.toString()).append("\n");
        }
        return circuitString.toString();
    } 
}    
