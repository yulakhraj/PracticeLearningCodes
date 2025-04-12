using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MySpace02
{
    internal class myclass
    {
        private string name;
        private int age;

        public myclass(string name, int age)
        {
            this.name = name;
            this.age = age;
        }

        public void display()
        {
            Console.WriteLine("\n Name : " + name + "\t Age : " + age);
        }
    }
}
