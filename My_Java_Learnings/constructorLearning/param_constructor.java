package constructorLearning;
class student{
    int id;
    String name;
    student(String na, int i){
        id=i;
        name=na;
    }
    void fun(){
        System.out.println(id+" "+name);
    }
}
public class param_constructor {
    public static void main(String[] args) {
        student s1 = new student("manish", 20);
        student s2 = new student("nitin" , 19);
        s1.fun();
        s2.fun();

        
    }
    
}
