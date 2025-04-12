package regularExpressionLearning;

public class demo {
    public static void main(String[] args) {
        String phoneNumber = "9999999998";
        String regex = "(0/91)?[7-9][0-9]{9}";
        System.out.println("The phone number is: " + phoneNumber);
        System.out.println("Phone number is correct ? " + phoneNumber.matches(regex));

    }
}
