package abstractionLearning;

abstract class bank{
    abstract int roi();
}
class sbi extends bank{
    int roi(){
        return 7;
    }
}
class hdfc extends bank{
    int roi(){
        return 9;
    }
}

public class AbstractClass {
    public static void main(String[] args) {
        bank b1 = new hdfc();
        bank b2 = new sbi();
        System.out.println(b1.roi());
        System.out.println(b2.roi());
        
    }
    
}