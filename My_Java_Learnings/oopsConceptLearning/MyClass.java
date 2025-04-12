package oopsConceptLearning;

public class MyClass {
    public static void main(String args[]) {
      Missile m1 = new Missile();
      Missile m2 = new Missile();
      m1.name="Bhramos";
      m1.range=1000;
      m2.name="Agni";
      m2.range=5000;
      
      m1.show();
      m2.show();
      m1.show("supersonic");
      
    }
}

class Missile{
    String name;
    int range;
    
    void show(){
        System.out.println("Missile name is "+name+" and range is "+range+".");
    }
    void show(String category){
        System.out.println("Missile name is "+name+" and range is "+range+" with category of "+category);
    }
}