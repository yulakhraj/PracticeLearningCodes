package listInterfaceLearning;
import java.util.*;
public class ArrayListExample {
    public static void main(String[] args) {
        List<Integer> l1 = new ArrayList<>();
        l1.add(0, 1);
        l1.add(1, 2);
        System.out.println(l1);

        List<Integer> l2 = new ArrayList<>();
        l2.add(1);
        l2.add(2);
        l2.add(3);

        l1.addAll(1, l2);   // Will add list l2 from 1 index

        System.out.println(l1);

        l1.remove(1);       // Removes element from index 1

        System.out.println(l1);     // Printing the updated List 1

        System.out.println(l1.get(3));      // Prints element at index 3 in list 1

        l1.set(0, 5);           // Replace 0th element with 5

        System.out.println(l1);

        //  // Printing all the elements
        for (Integer i : l1) {
            System.out.print(i + " ");
        }
    }
}
