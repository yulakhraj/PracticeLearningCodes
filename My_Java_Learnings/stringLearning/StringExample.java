package stringLearning;

public class StringExample {
    public static void main(String[] args) {
        System.out.println("String learning");
        String name = "yulakhraj77@gmail.com";
        System.out.println(name);

        System.out.println(name.toUpperCase());
        System.out.println(name.length());

        System.out.println(name.substring(2,5));
        System.out.println(name.charAt(2));
        //System.out.println(name.indent(2));
        System.out.println(name.indexOf('a'));
        System.out.println(name.indexOf('r'));
        System.out.println(name.indexOf('y'));
    }
}
