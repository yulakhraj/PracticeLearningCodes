package superkeywordLearning;
//     super can be used to invoke parent class method
class WildAnimal{
    void eat(){System.out.println("eating...");}
}
class Doggy extends WildAnimal{
    void eat(){System.out.println("drinking...");}
    void bark(){System.out.println("barking...");}
    void work(){
        super.eat();
        bark();
    }
}
public class ExampleTwo {
    public static void main(String[] args) {
        Doggy d = new Doggy();
        d.work();
    }
}
