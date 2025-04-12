package stringLearning;

public class e1 {

	public static String reverse(String str) {
		String strResult = "";
		for (int i = str.length() - 1; i >= 0; i--) {
			strResult += str.charAt(i);
		}
		return strResult;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str = "We work in hcl technologies limited ";
		String[] arr = str.split(" ");
		for (int i = 0; i < arr.length; i++) {
			System.out.print(reverse(arr[i]) + " ");
		}
	}
}

//output- eW krow ni lch seigolonhcet detimil ytghu