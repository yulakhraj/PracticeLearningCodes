package multiThreadingLearning;

class C implements Runnable
{
    public void run()
    {
        for(int i=0;i<5;i++)
        {
        System.out.println("hi");
        try {
			Thread.sleep(50);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
        }
    }
}
class D implements Runnable
{
    public void run()
    {
        for(int i=0;i<10;i++)
        {
        System.out.println("hello");
        }
    }
    
}
public class example2 {
    public static void main(String args[]) {
        Runnable obj1 = new C();
        Runnable obj2 = new D();
        
        Thread t1 = new Thread(obj1);
        Thread t2 = new Thread(obj2);
       
        
        t1.start();
        t2.start();
      
    }
}

