package stringLearning;
public class e2 {

	public static void main(String[] args) {
		
		String str = "We work in hcl technologies limited";
		String[] arr = str.split(" ");
		
		for(int i=arr.length-1;i>=0;i--){
		    System.out.print(arr[i]+" ");
		}
		
	
	}
}

//output- limited technologies hcl in work We