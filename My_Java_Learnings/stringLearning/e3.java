package stringLearning;
public class e3 {
	/*
	 * public static String reverse(String input){ if(input.isEmpty()){ return ""; }
	 * return reverse(input.substring(1)) + input.charAt(0);
	 * 
	 * }
	 */
    public static void main(String args[]) {
    String input = "We work in hcl technologies limited";
    //System.out.println(reverse(input));
    
    String output = "";
    for(int i=input.length()-1;i>=0;i--){
        output = output+input.charAt(i);
        
    }
    
    System.out.println(output);
     
     
    
    }
}
		//output-  detimil seigolonhcet lch ni krow eW
