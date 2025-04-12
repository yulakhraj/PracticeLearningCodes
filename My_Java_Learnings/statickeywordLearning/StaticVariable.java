package statickeywordLearning;

class Studentt{
    int rollno;//instance variable
    String name;
    static String college ="NIT";  //static variable
    Studentt(int r, String n){
        rollno = r;
        name = n;
    }
    void display (){System.out.println(rollno+" "+name+" "+college);}
}
public class StaticVariable {
    public static void main(String args[]){
        Studentt s1 = new Studentt(111,"Karan");
        Studentt s2 = new Studentt(222,"Aryan");
        s1.display();
        s2.display();
    }
}
