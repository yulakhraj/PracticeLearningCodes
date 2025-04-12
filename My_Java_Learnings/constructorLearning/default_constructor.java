package constructorLearning;
class people{
    String name;
    int age;
    void sun(){
        System.out.println(name+" "+age);
    }
}
public class default_constructor{
    public static void main(String[] args) {
        people p1 = new people();
        people p2 = new people();
        p1.sun();
        p2.sun();
        
    }
}