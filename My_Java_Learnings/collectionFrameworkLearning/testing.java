package collectionFrameworkLearning;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Scanner;

public class testing {
    public static void main(String[] args) {
/*      ArrayList<Integer> data = new ArrayList<>();
        ArrayList<String> abc = new ArrayList<>();
        data.add(1);
        data.add(2);
        data.add(3);
        abc.add("hello");
        abc.add("world");
        System.out.println(data);
        System.out.println(abc);
        Iterator itr = data.iterator();
        while(itr.hasNext()){
            System.out.println(itr.next());
        }
        Iterator itrr = abc.iterator();
        while(itrr.hasNext()){
            System.out.println(itrr.next());
        }*/
        ArrayList<Integer> data = new ArrayList<>();
        ArrayList<String> abc = new ArrayList<>();
        int k; String s;
        try (Scanner sc = new Scanner(System.in)) {
			for(int i=0;i<3;i++){
			    k=sc.nextInt();
			    data.add(k);
			}
			for(int i=0;i<2;i++){
			    s=sc.next();
			    abc.add(s);
			}
		}
        @SuppressWarnings("rawtypes")
		Iterator itr = data.iterator();
        while(itr.hasNext()){
            System.out.println(itr.next());
        }
        @SuppressWarnings("rawtypes")
		Iterator itrr = abc.iterator();
        while(itrr.hasNext()){
            System.out.println(itrr.next());
        }


    }
}
