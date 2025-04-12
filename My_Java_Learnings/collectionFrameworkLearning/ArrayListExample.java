package collectionFrameworkLearning;

import java.util.ArrayList;
public class ArrayListExample {
    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<>();
         int n = 10;
        for(int i=1; i<=n ; i++){
            arr.add(i);
        }
        arr.add(25);
        arr.add(35);
        System.out.println("Elements are: "+arr);
        arr.remove(10);
        System.out.println("Elements are: "+arr);
        System.out.println("size of arraylist: "+arr.size());
        // Printing elements one by one
        for (int i = 0; i < arr.size(); i++)
            System.out.println(arr.get(i) + " ");

    }

}
