using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Security.Policy;
using System.Text;
using System.Threading.Tasks;
using FTOPcSharpLearning;

namespace MySpace1
{
    class myclass
    {
        private int a;
        private int b;

        private FTOPProject.childnamespace.myclass tob;
        public myclass(int a, int b)
        {
            this.a = a; this.b = b;
            tob = new FTOPProject.childnamespace.myclass(100.5f, 200.5f);
        }
        public void display()
        {
            tob.display();
            Console.WriteLine("\n a = " + a + "\t b =" + b);
        }
    }
}
namespace FTOPProject
{
    namespace childnamespace
    {
        class myclass
        {
            private float a;
            private float b;
            public myclass(float a, float b)
            {
                this.a = a;
                this.b = b;
            }
            public void display()
            {
                Console.WriteLine("\n a = " + a + "\t b =" + b);
            }

        }
    }
    class sample
    {
        private int a;
        private int b;
        public sample()
        {
            Console.WriteLine("\n Default Constructor called ");
        }

        public sample(int a, int b)
        {
            Console.WriteLine("\n Parameterized Constructor called ");
            this.a = a;
            this.b = b;
        }
        public sample(sample tob)
        {
            Console.WriteLine("\n Copy Constructor called ");
            this.a = tob.a;
            this.b = tob.b;
        }
        public void display()
        {
            Console.WriteLine("\n a : " + a + "\t b : " + b);
        }
        public void seta(int x)
        {
            a = a + x;
        }

        public void setb(int x)
        {
            b = b + x;
        }
    };
    internal class Program
    {
        static void f1(sample ob)
        {
            ob.seta(10);
            ob.setb(20);
        }
        static void Main(string[] args)
        {
            /*sample ob1 = new sample();
              sample ob2 = new sample(10, 20);
              sample ob3 = ob2;
              sample ob4 = new sample(ob2);


              ob1.display();
              ob2.display();
              ob3.display();
              ob4.display();

              f1(ob2);
              ob2.display();

              NewAssemblyProj.myclass obj1 = new NewAssemblyProj.myclass();

              MySpace1.myclass o1 = new MySpace1.myclass(10, 20);

              childnamespace.myclass o2 = new childnamespace.myclass(1.2f, 2.3f);

              MySpace02.myclass o3 = new MySpace02.myclass("ABCD", 22);*/


            myderived ob = new myderived(10, 20, 30, 40);
            Console.WriteLine("\n a = " + ob.getA());
            Console.WriteLine("\n b = " + ob.getB());
            Console.WriteLine("\n x = " + ob.getX());
            Console.WriteLine("\n y = " + ob.getY());

        }
    }
}

