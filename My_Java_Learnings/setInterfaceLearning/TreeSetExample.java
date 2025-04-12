package setInterfaceLearning;
import java.util.*;
public class TreeSetExample {
    public static void main(String[] args) {
        TreeSet<String> ts = new TreeSet<>();
        ts.add("Geek");
        ts.add("For");
        ts.add("Geeks");
        ts.add("A");
        ts.add("B");
        ts.add("Z");
        // Print and display initial elements of TreeSet
        System.out.println("Initial TreeSet " + ts);
        ts.remove("B");    // Removing a specific existing element inserted
        // Printing the updated TreeSet
        System.out.println("After removing element " + ts);

        ts.pollFirst();     // Now removing the first element
        // Again printing the updated TreeSet
        System.out.println("After removing first " + ts);

        ts.pollLast();          // Removing the last element
        // Lastly printing the elements of TreeSet remaining
        System.out.println("After removing last " + ts);

        for (String value : ts) {
            System.out.print(value + ", ");
        }
    }

}
