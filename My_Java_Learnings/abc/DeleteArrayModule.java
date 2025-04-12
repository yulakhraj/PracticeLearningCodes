package abc;
import java.util.*;

public class DeleteArrayModule {
	public static int[] deleteFirstElement(int[] arr) {
		int[] newArr = new int[arr.length - 1];
		for (int i = 1; i < arr.length; i++) {
			newArr[i - 1] = arr[i];
		}
		return newArr;
	}

	public static int[] deleteLastElement(int[] arr) {
		int[] newArr = new int[arr.length - 1];
		for (int i = 0; i < arr.length - 1; i++) {
			newArr[i] = arr[i];
		}
		return newArr;
	}
	
	public static int[] deleteAnyElement(int[] arr,int index) {
		int[] newArr = new int[arr.length - 1];
	    for (int i = 0; i < arr.length; i++) {
	        if (i < index) {
	            newArr[i] = arr[i];
	        } else if (i > index) {
	            newArr[i - 1] = arr[i];
	        }
	    }
	    return newArr;
		
	}
	
	public static void main(String[] args) {
		int[] arr = { 1, 2, 3, 4, 5 };
		System.out.println("Arrays are : "+Arrays.toString(arr));

		int[] newArr = deleteFirstElement(arr);
		System.out.println("Arrays are after first element deleted : "+Arrays.toString(newArr));

		int[] newArr2 = deleteLastElement(arr);
		System.out.println("Arrays are after last element deleted : "+Arrays.toString(newArr2));
		
		int[] newArr3 = deleteAnyElement(arr,3);
		System.out.println("Arrays are after specific element deleted : "+Arrays.toString(newArr3));
		
		
	}

	

}