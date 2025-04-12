package abc;

import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

class ArrayOperations {
	private int[] arr;
	private int cnt;
	private int size;

	public ArrayOperations() {
	}

	public ArrayOperations(int tsize) {
		arr = new int[tsize];
		cnt = -1;
	}

	public void insertfirst(Scanner scn) {
		if (cnt >= (arr.length - 1)) {
			System.out.println("\n Array is Full element cannot be inserted ....");
			return;
		} else if (cnt == -1) {
			++cnt;
			System.out.println("\n Enter Element at " + cnt + " Position : ");
			arr[0] = scn.nextInt();
		} else {
			// shift every element from last to one position right
			for (int i = cnt; i >= 0; --i)
				arr[i + 1] = arr[i];
			++cnt;
			// once the value of i reaches to 0th position insert at 0th position
			System.out.println("\n Enter Element at " + cnt + " Position : ");
			arr[0] = scn.nextInt();
		}
	}

	public void insertlast(Scanner scn) {
		if (cnt >= (arr.length - 1)) {
			System.out.println("\n Array is Full element cannot be inserted ....");
			return;
		} else if (cnt == -1) {
			++cnt;
			System.out.println("\n Enter Element at " + cnt + " Position : ");
			arr[cnt] = scn.nextInt();
		} else {
			// just increase the cnt by 1 , it will be the last index of the new element
			++cnt;
			// once the value of i reaches to 0th position insert at 0th position
			System.out.println("\n Enter Element at " + cnt + " Position : ");
			arr[cnt] = scn.nextInt();
		}
	}

	public void insertpos(Scanner scn) {
		if (cnt >= (arr.length - 1)) {
			System.out.println("\n Array is Full element cannot be inserted ....");
			return;
		} else {
			int pos;
			do {
				System.out.println("\n Enter position to insert to (1 to " + (cnt + 1) + "):");
				pos = scn.nextInt();

				if ((pos < 1) || (pos > (cnt + 1))) {
					System.out.println("\n Invalid position ... try again");
					continue;
				} else
					break;
			} while (true);

			if (pos == 1)
				insertfirst(scn);
			else if (pos == (cnt + 1))
				insertlast(scn);
			else {
				// move all element from cnt to pos one place right
				for (int i = cnt; i > pos - 2; --i)
					arr[i + 1] = arr[i];
				System.out.println("\n Enter element at desired position : ");
				arr[pos - 1] = scn.nextInt();

				++cnt;
			}
		}
	}

	public void traverse() {
		if (cnt == -1) {
			System.out.println("\n Array is Empty ... try again");
			return;
		} else {
			System.out.println("\n Contents of array \n");
			for (int i = 0; i <= cnt; ++i)
				System.out.printf("%5d", arr[i]);
		}
	}

	public void updateArray(Scanner scn) {
		System.out.println("Enter the position you want to update :");
		int ind = scn.nextInt();
		System.out.println("Enter the Element :");
		int data = scn.nextInt();
		arr[ind-1]=data;
		
	}
	
	public void deletefirst() {
		// check if Array is empty
		if (cnt == -1) {
			System.out.println("\n Array is Full element cannot be inserted ....");
			return;
		} else
		// shift all elements to one position right
		{
			for (int i = 0; i <= cnt; ++i)
				arr[i] = arr[i + 1];
			--cnt;
		}
	}

	public void deletelast() {
		// check if Array is empty
		if (cnt == -1) {
			System.out.println("\n Array is Full element cannot be inserted ....");
			return;
		} else {
			--cnt;
		}
	}

	public void deletepos(Scanner scn) {
		// check if Array is empty
		if (cnt == -1) {
			System.out.println("\n Array is Full element cannot be inserted ....");
			return;
		} else {
			int pos;
			do {
				System.out.println("\n Enter position to insert to (1 to " + (cnt + 1) + "):");
				pos = scn.nextInt();

				if ((pos < 1) || (pos > (cnt + 1))) {
					System.out.println("\n Invalid position ... try again");
					continue;
				} else
					break;
			} while (true);

			if (pos == 1)
				deletefirst();
			else if (pos == (cnt + 1))
				deletelast();
			else {
				// move all element from cnt to pos one place left
				for (int i = (pos - 1); i < cnt; ++i)
					arr[i] = arr[i + 1];
				--cnt;
			}
		}
	}

	public void searchElement(Scanner scn) {
		if (cnt == -1) {
			System.out.println("\n Array is Empty ... can't able to search ");
			return;
		} else {
			System.out.println("\n Enter the Element You want to find : ");
			int key = scn.nextInt();
			for (int i = 0; i < arr.length; i++) {
				if (arr[i] == key) {
					System.out.println("Element at index : " + i);
				}
			}
		}
	}

	public void sortascending() {
		if (cnt == -1) {
			System.out.println("\n Array is Empty ... can't be SORT ");
			return;
		} else {
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
			System.out.print("Asending order of arrays are :");
			for (int i : arr) {
				System.out.println(i + " ");
			}
		}
	}

	public void sortdesending() {
		if (cnt == -1) {
			System.out.println("\n Array is Empty ... can't be SORT ");
			return;
		} else {
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
			System.out.print("Desending order of arrays are :");
			for (int i : arr) {
				System.out.println(i + " ");
			}
		}
	}

	public void sortchotasebada() {
		if (cnt == -1) {
			System.out.println("\n Array is Empty ... can't be SORT ");
			return;
		} else {
			Arrays.sort(arr);
			System.out.println("Arrays are : " + Arrays.toString(arr));
		}
	}

	public void sortbdasechota() {
		if (cnt == -1) {
			System.out.println("\n Array is Empty ... can't be SORT ");
			return;
		} else {
			Integer[] newarr = new Integer[arr.length];
			for (int i = 0; i < arr.length; i++) {
				newarr[i] = Integer.valueOf(arr[i]);
			}
			Arrays.sort(newarr, Collections.reverseOrder());
			System.out.println("Arrays are : " + Arrays.toString(newarr));
		}
	}
}

public class PracticeProblem {
	public static void mainmenu() {
		System.out.println("\n\t\t Array Operations");
		System.out.println("\n\t 1. Insert Operations");
		System.out.println("\n\t 2. Delete Operations");
		System.out.println("\n\t 3. Update Operation");
		System.out.println("\n\t 4. Search Operation");
		System.out.println("\n\t 5. Sort Operations");
		System.out.println("\n\t 6. Traverse");
		System.out.println("\n\t 7. Exit");
		System.out.println("\n\t Please enter your Choice (1-7): ");
	}

	public static void insertmenu() {
		System.out.println("\n\t\t Array Operations");
		System.out.println("\n\t 1. Insert First");
		System.out.println("\n\t 2. Insert Last");
		System.out.println("\n\t 3. Insert at Desired Position");
		System.out.println("\n\t 4. Go to previou option");
		System.out.println("\n\t Please enter your Choice (1-4): ");
	}

	public static void deletemenu() {
		System.out.println("\n\t\t Array Operations");
		System.out.println("\n\t 1. Delete First");
		System.out.println("\n\t 2. Delete Last");
		System.out.println("\n\t 3. Delete from Desired Position");
		System.out.println("\n\t 4. Go to previou option");
		System.out.println("\n\t Please enter your Choice (1-3): ");
	}

	public static void sortmenu() {
		System.out.println("\n\t\t Array Operations");
		System.out.println("\n\t 1. Sort Ascending");
		System.out.println("\n\t 2. Sort Descending");
		System.out.println("\n\t 3. Go to previou option");
		System.out.println("\n\t Please enter your Choice (1-3): ");
	}

	public static void main(String[] args) {
		int ch1, ch2;
		Scanner scn = new Scanner(System.in);
		System.out.println("\n Enter the size of the array to be created : ");
		int size = scn.nextInt();

		ArrayOperations ob = new ArrayOperations(size);

		do {
			do {
				mainmenu();
				ch1 = scn.nextInt();

				if ((ch1 < 1) || (ch1 > 7)) {
					System.out.println("\n Invalid Choice ... try again");
					continue;
				} else
					break;
			} while (true);

			switch (ch1) {

			case 1: {
				do {
					insertmenu();
					ch2 = scn.nextInt();

					if ((ch2 < 1) || (ch2 > 4)) {
						System.out.println("\n Invalid Choice ... try again");
						continue;
					} else
						break;
				} while (true);
				switch (ch2) {
				case 1:
					ob.insertfirst(scn);
					break;
				case 2:
					ob.insertlast(scn);
					break;
				case 3:
					ob.insertpos(scn);
					break;
				case 4:
					
				}
			}
				break;
			case 2: {
				do {
					deletemenu();
					ch2 = scn.nextInt();
					if ((ch2 < 1) || (ch2 > 4)) {
						System.out.println("\n Invalid Choice ... try again");
						continue;
					} else
						break;
				} while (true);
				switch (ch2) {
				case 1:
					ob.deletefirst();
					break;
				case 2:
					ob.deletelast();
					break;
				case 3:
					ob.deletepos(scn);
					break;
				case 4:
					
				}
			}
				break;
			case 3:
				ob.updateArray(scn);
				break;
			case 4:
				ob.searchElement(scn);
				break;
			case 5: {
				do {
					sortmenu();
					ch2 = scn.nextInt();
					if ((ch2 < 1) || (ch2 > 4)) {
						System.out.println("\n Invalid Choice ... try again");
						continue;
					} else
						break;
				} while (true);
				switch (ch2) {
				case 1:
					ob.sortascending();
					break;
				case 2:
					ob.sortdesending();
					break;
				case 4:
					
				}
			}
				break;
			case 6:
				ob.traverse();
				break;
			case 7:
				System.out.println("\n\t\tSuccessful Existed:");
				//System.exit(0);

			}
		} while (ch1 < 7);

	}
}

