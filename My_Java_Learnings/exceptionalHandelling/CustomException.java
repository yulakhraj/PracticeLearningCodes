package exceptionalHandelling;

@SuppressWarnings("serial")
class MyCustomException extends Exception
{

}
// class that uses custom exception MyCustomException
public class CustomException
{
    public static void main(String... args)
    {
        try
        {
            // throw an object of user defined exception
            throw new MyCustomException();
        }
        catch (MyCustomException ex) {
            System.out.println("Caught the exception");
            System.out.println(ex.getMessage());
        }
        System.out.println("rest of the code...");
    }
}