package exceptionalHandelling;

public class ExceptionExampleOne {

    public static void main(String[] args) {
        try
        {
            @SuppressWarnings("unused")
			int data=50/0; //may throw exception
        }
        //handling the exception
        catch(ArithmeticException e)
        {
            System.out.println(e);
        }
        System.out.println("rest of the code");
    }

}
