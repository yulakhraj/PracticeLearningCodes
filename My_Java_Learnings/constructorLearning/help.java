package constructorLearning;
class employee{
    String name;
    int age;
    int salary;

    employee(){System.out.println("Bike is created"); }

    public void work() {
        System.out.println("software engineer");
    }

}
public class help{
    public static void main(String[] args){
        employee hcl = new employee();
        hcl.name="manish";
        hcl.age=55;
        hcl.salary=50000;
        
        hcl.work();
        
    }
}