package linkedListLearning;
import java.util.Iterator;
import java.util.LinkedList;
public class LinkedExample {
    public static void main(String[] args) {
        LinkedList<Integer> ll = new LinkedList<>();
        for(int i=10; i<=500; i=i*2){
            ll.add(i);
        }
        System.out.println("elements are: "+ll);
        System.out.println("size of elements is: "+ll.size());
        // printing linked list
        Iterator<Integer> itr = ll.iterator();
        while(itr.hasNext()){
            System.out.println(itr.next());
        }
    }
}
