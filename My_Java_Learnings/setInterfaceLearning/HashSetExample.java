package setInterfaceLearning;

import java.util.*;

public class HashSetExample {
    public static void main(String[] args)
    {
        HashSet<String> h = new HashSet<>();
        h.add("India");
        h.add("Australia");
        h.add("South Africa");
        h.add("India");   // adding duplicate value
        System.out.println(h);
        System.out.println("List contains India or not:" + h.contains("India"));  // checking value

        h.remove("Australia");   // removing value
        System.out.println("List after removing Australia:" + h);

        System.out.println("Iterating over list:");

        Iterator<String> i = h.iterator();
        while (i.hasNext())
            System.out.println(i.next());
    }
}