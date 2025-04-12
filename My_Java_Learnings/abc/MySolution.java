package abc;

import java.util.Arrays;
import java.util.Scanner;

public class MySolution {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.print("Enter the size of the array: ");
		int size = scanner.nextInt();
		Object[] array = new Object[size];

		int choice;
		do {
			System.out.println("\n-------- Menu --------");
			System.out.println("1. Insert element at First");
			System.out.println("2. Insert element at Last");
			System.out.println("3. Insert element at Desired Position");
			System.out.println("4. Delete element from First");
			System.out.println("5. Delete element from Last");
			System.out.println("6. Delete element from Desired Position");
			System.out.println("7. Search an element");
			System.out.println("8. Update an element");
			System.out.println("9. Sort the array in Ascending Order");
			System.out.println("10. Sort the array in Descending Order");
			System.out.println("0. Exit");
			System.out.print("Enter your choice: ");
			choice = scanner.nextInt();

			switch (choice) {
			case 1:
				System.out.print("Enter the element to insert at First: ");
				Object firstElement = readElement(scanner);
				insertAtFirst(array, firstElement);
				break;
			case 2:
				System.out.print("Enter the element to insert at Last: ");
				Object lastElement = readElement(scanner);
				insertAtLast(array, lastElement);
				break;
			case 3:
				System.out.print("Enter the element to insert: ");
				Object desiredElement = readElement(scanner);
				System.out.print("Enter the desired position (0 to " + (size - 1) + "): ");
				int position = scanner.nextInt();
				insertAtPosition(array, desiredElement, position);
				break;
			case 4:
				deleteFromFirst(array);
				break;
			case 5:
				deleteFromLast(array);
				break;
			case 6:
				System.out.print("Enter the position to delete (0 to " + (size - 1) + "): ");
				int deletePosition = scanner.nextInt();
				deleteFromPosition(array, deletePosition);
				break;
			case 7:
				System.out.print("Enter the element to search: ");
				Object searchElement = readElement(scanner);
				int foundIndex = searchElement(array, searchElement);
				if (foundIndex != -1)
					System.out.println("Element found at position " + foundIndex);
				else
					System.out.println("Element not found in the array.");
				break;
			case 8:
				System.out.print("Enter the position to update (0 to " + (size - 1) + "): ");
				int updatePosition = scanner.nextInt();
				System.out.print("Enter the new element: ");
				Object updatedElement = readElement(scanner);
				updateElement(array, updatePosition, updatedElement);
				break;
			case 9:
				sortAscending(array);
				break;
			case 10:
				sortDescending(array);
				break;
			case 0:
				System.out.println("Exiting the program...");
				break;
			default:
				System.out.println("Invalid choice! Please try again.");
				break;
			}
		} while (choice != 0);

		scanner.close();
	}

	private static Object readElement(Scanner scanner) {
		// Modify this method to read elements of any type
		return scanner.next();
	}

	private static void insertAtFirst(Object[] array, Object element) {
		Object[] newArray = new Object[array.length + 1];
		newArray[0] = element;
		System.arraycopy(array, 0, newArray, 1, array.length);
		System.out.println("Element inserted at the first position.");
		array = newArray;
		System.out.println("Updated Array: " + Arrays.toString(array));
	}

	private static void insertAtLast(Object[] array, Object element) {
		Object[] newArray = Arrays.copyOf(array, array.length + 1);
		newArray[newArray.length - 1] = element;
		System.out.println("Element inserted at the last position.");
		array = newArray;
		System.out.println("Updated Array: " + Arrays.toString(array));
	}

	private static void insertAtPosition(Object[] array, Object element, int position) {
		if (position < 0 || position > array.length) {
			System.out.println("Invalid position!");
			return;
		}
		Object[] newArray = new Object[array.length + 1];
		System.arraycopy(array, 0, newArray, 0, position);
		newArray[position] = element;
		System.arraycopy(array, position, newArray, position + 1, array.length - position);
		System.out.println("Element inserted at position " + position);
		array = newArray;
		System.out.println("Updated Array: " + Arrays.toString(array));
	}

	private static void deleteFromFirst(Object[] array) {
		if (array.length == 0) {
			System.out.println("Array is empty!");
			return;
		}
		Object[] newArray = new Object[array.length - 1];
		System.arraycopy(array, 1, newArray, 0, array.length - 1);
		System.out.println("Element deleted from the first position.");
		array = newArray;
		System.out.println("Updated Array: " + Arrays.toString(array));
	}

	private static void deleteFromLast(Object[] array) {
		if (array.length == 0) {
			System.out.println("Array is empty!");
			return;
		}
		Object[] newArray = Arrays.copyOf(array, array.length - 1);
		System.out.println("Element deleted from the last position.");
		array = newArray;
		System.out.println("Updated Array: " + Arrays.toString(array));
	}

	private static void deleteFromPosition(Object[] array, int position) {
		if (position < 0 || position >= array.length) {
			System.out.println("Invalid position!");
			return;
		}
		Object[] newArray = new Object[array.length - 1];
		System.arraycopy(array, 0, newArray, 0, position);
		System.arraycopy(array, position + 1, newArray, position, array.length - position - 1);
		System.out.println("Element deleted from position " + position);
		array = newArray;
		System.out.println("Updated Array: " + Arrays.toString(array));
	}

	private static int searchElement(Object[] array, Object element) {
		for (int i = 0; i < array.length; i++) {
			if (array[i].equals(element))
				return i;
		}
		return -1;
	}

	private static void updateElement(Object[] array, int position, Object element) {
		if (position < 0 || position >= array.length) {
			System.out.println("Invalid position!");
			return;
		}
		array[position] = element;
		System.out.println("Element updated at position " + position);
		System.out.println("Updated Array: " + Arrays.toString(array));
	}

	private static void sortAscending(Object[] array) {
		Arrays.sort(array);
		System.out.println("Array sorted in ascending order.");
		System.out.println("Sorted Array: " + Arrays.toString(array));
	}

	private static void sortDescending(Object[] array) {
		Arrays.sort(array);
		Object[] reversedArray = new Object[array.length];
		for (int i = 0; i < array.length; i++) {
			reversedArray[i] = array[array.length - 1 - i];
		}
		System.out.println("Array sorted in descending order.");
		System.out.println("Sorted Array: " + Arrays.toString(reversedArray));
	}
}
