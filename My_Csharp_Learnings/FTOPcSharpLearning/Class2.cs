using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FTOPcSharpLearning
{
    class mybase
    {
        private int a;
        private int b;

        public mybase(int a, int b)
        {
            Console.WriteLine("\n Base class constructor is called");
            this.a = a;
            this.b = b;
        }

        public int getA() { return a; }
        public int getB() { return b; }

        ~mybase()
        {
            Console.WriteLine("\n Destructor of base class is called");
        }

    }

    class myderived : mybase
    {
        private int x;
        private int y;

        public myderived(int a, int b, int c, int d) : base(a, b)
        {
            Console.WriteLine("\n Derived class constructor is called");
            this.x = c;
            this.y = d;
        }

        public int getX() { return x; }
        public int getY() { return y; }


        ~myderived()
        {
            Console.WriteLine("\n Destructor of derived class is called");
        }

    }
    internal class Class2
    {

    }
}


