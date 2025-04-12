package thiskeywordLearning;
//  this keyword can be used to return current class instance
class Abc{
    Abc getAbc(){
        return this;
    }
    void msg(){System.out.println("Hello java");}
}
public class TestThis8 {
    public static void main(String[] args) {
        new Abc().getAbc().msg();
    }
}
