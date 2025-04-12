package collectionFrameworkLearning;
import java.util.Iterator;
import java.util.LinkedList;
public class LinkedListExample {
    public static void main(String[] args) {
        LinkedList <Integer> ll = new LinkedList<>();
        for(int i=10; i<=50; i=i++){
            ll.add(i);
        }
        System.out.println("elements are: "+ll);
        System.out.println("size of elements is: "+ll.size());

        Iterator<Integer> itr = ll.iterator();
        while(itr.hasNext()){
            System.out.println(itr.next());
        }
    }
}
