package wrapperClassLearning;

//Java program to convert primitive into objects

//	Autoboxing example of int to Integer

public class Autoboxing {
	public static void main(String[] args) {
		//Converting int into Integer
		int a = 208;
		//Integer i=Integer.valueOf(a);    //converting int into Integer explicitly
		Integer j = a; 						// autoboxing, now compiler will write Integer.valueOf(a) internally

		System.out.println("int is " + a);
		System.out.println("Integer is " + j);
	}
}