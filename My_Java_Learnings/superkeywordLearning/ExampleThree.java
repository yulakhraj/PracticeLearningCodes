package superkeywordLearning;
//   super is used to invoke parent class constructor
class PetAnimal{
    PetAnimal(){System.out.println("animal is created");}
}
class BabyDog extends PetAnimal{
    BabyDog(){
        super();
        System.out.println("dog is created");
    }
}
public class ExampleThree {
    public static void main(String[] args) {
        @SuppressWarnings("unused")
		BabyDog d = new BabyDog();
    }
}
