package multiThreadingLearning;

class A extends Thread
{
    public void run()
    {
        for(int i=0;i<50;i++)
        {
        System.out.println("hi");
        try {
			Thread.sleep(100);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
        }
    }
}
class B extends Thread
{
    public void run()
    {
        for(int i=0;i<100;i++)
        {
        System.out.println("hello");
        }
    }
    
}
public class threading {
    public static void main(String args[]) {
        A obj1 = new A();
        B obj2 = new B();
        
        obj1.setPriority(Thread.MIN_PRIORITY);
        
        obj1.start();
        obj2.start();
      
    }
 }