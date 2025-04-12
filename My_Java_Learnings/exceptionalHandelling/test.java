package exceptionalHandelling;

public class test {
    public static void main(String[] args) {
        System.out.println("Exceptional Handelling ");

        try{
            @SuppressWarnings("unused")
			int data=100/0;

        }catch(Exception e){
            System.out.println(e);
        }
    }
}
