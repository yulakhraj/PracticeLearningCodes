package mapInterfaceLearning;
import java.util.*;
public class TreeMapExample {
    @SuppressWarnings("rawtypes")
	public static void main(String... args){
        TreeMap<Integer,String> map=new TreeMap<>();
        map.put(100,"Amit");
        map.put(102,"Ravi");
        map.put(101,"Vijay");
        map.put(103,"Rahul");

        for(Map.Entry m:map.entrySet()){
            System.out.println(m.getKey()+" "+m.getValue());
        }
    }
}