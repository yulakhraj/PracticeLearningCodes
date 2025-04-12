package arraysLearning;

import java.util.Arrays;

public class ArrayExample1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] arr1 = {1,2,3,4,5,6,7,8};
		int[] arr2 = {1,2,3,4,5,6,7,8};
		int[] arr3 = {1,2,3,4,5};
		
		System.out.println("check arr1 equal to arr2 ? "+ Arrays.equals(arr1, arr2));
		System.out.println("check arr1 equal to arr3 ? "+ Arrays.equals(arr1, arr3));
		
		int[] arr4 = {23,32,54,11,8,33,89,22};
		Arrays.sort(arr4);
		System.out.print("Sorted arr4 are :");
		for(int i: arr4) {
			System.out.print(i +" ");
		}
		System.out.println("");
		System.out.println("Second array elements of arr4 : "+arr4[1]);
		int length = arr4.length;
		
		System.out.println("Second largest array elements of arr4 : "+arr4[length-2]);
		
	}

}
