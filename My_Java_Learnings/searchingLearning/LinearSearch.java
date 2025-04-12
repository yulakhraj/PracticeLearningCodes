package searchingLearning;

public class LinearSearch {
	static int linearsearch(int arr[], int key) {
		int size = arr.length;
		for(int i=0; i<size; i++) {
			if(arr[i]==key) {
				return i;
			}
		}
		return -1;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] Arr = {18, 30, 15, 70, 12};
        System.out.print("Elements of the array are: ");
        
        for(int i = 0; i < Arr.length; i++) {
            System.out.print(Arr[i]+ " ");
        }
        System.out.println(" ");
        System.out.print("key present at the index of: ");
        System.out.println(linearsearch(Arr,15));

	}

}
