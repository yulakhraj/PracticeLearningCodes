using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FTOPcSharpLearning
{
    internal class embeddedclass
    {
        private int a;
        private int b;

        public embeddedclass(int a, int b)
        {
            this.a = a;
            this.b = b;
        }

        public override string ToString()
        {
            return base.ToString();
        }

        public class inner
        {
            private String name;
            private int age;
            public inner(String name, int age)
            {
                this.age=age;
                this.name = name;
            }
            public override string ToString()
            {
                return base.ToString();
            }

        }
    }
}
