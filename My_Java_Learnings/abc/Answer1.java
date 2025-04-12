package abc;

import java.util.Scanner;

public class Answer1 {

	static int searchElement(int arr[], int key) {
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] == key) {
				return i;
			}
		}
		return -1;
	}

	static void printarray(int arr[]) {
		for (int i : arr) {
			System.out.print(i + " ");
		}
		System.out.println("");
	}

	static int[] desendingsort(int arr[]) {
		int temp = 0;
		for (int i = 0; i < arr.length; i++) {
			for (int j = i + 1; j < arr.length; j++) {
				if (arr[i] < arr[j]) {
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		return arr;
	}

	static int[] ascendingsort(int arr[]) {
		int temp = 0;
		for (int i = 0; i < arr.length; i++) {
			for (int j = i + 1; j < arr.length; j++) {
				if (arr[i] > arr[j]) {
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		return arr;

	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		 /* System.out.print("Enter the size of array :"); int n = sc.nextInt(); int[]
		 * arr = new int[n]; System.out.println("Enter the arrays element :"); for (int
		 * i=0; i<n; i++) { arr[i] = sc.nextInt(); }
		 */

		int[] arr = { 45, 35, 65, 25, 15, 95 };
		System.out.print("The Elements are : ");
		printarray(arr);

		System.out.println("enter the element you have to find: ");
		int find = sc.nextInt();
		System.out.println("the index of element is :" + searchElement(arr, find));

		System.out.println("Enter the position you want to update :");
		int position = sc.nextInt();
		System.out.println("Enter the value you want to update :");
		int value = sc.nextInt();
		arr[position] = value;
		System.out.print("The Updated Elements in array are : ");
		printarray(arr);

		System.out.print("The arrays in ascending order are :");
		ascendingsort(arr);
		printarray(arr);

		System.out.print("The arrays in desending order are :");
		desendingsort(arr);
		printarray(arr);

		System.out.print("Deleteing of first element from array : ");
		int[] newarr = new int[arr.length - 1];

		for (int i = 0; i < newarr.length; i++) {
			newarr[i] = arr[i - 1];
		}
		printarray(newarr);

	}

}
