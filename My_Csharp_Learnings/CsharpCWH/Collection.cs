/*using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace cSharpCollections
{
    *//*class student
    {
        public int id { get; set; }
        public string name { get; set; }

        public student() { }
        public void display()
        {
            Console.WriteLine("\nName= " + name + "\tId=" + id);
        }
        void addRecord(student s)
        {
            Console.WriteLine("enter employee Id : ");
            s.id = int.Parse(Console.ReadLine());
            Console.WriteLine("enter employee Name : ");
            s.name = Console.ReadLine();
            Console.WriteLine("enter employee Age : ");
            //List.Add(s);
        }
    }*//*
    class Student
    {
        public int Id { get; set; }
        public string Name { get; set; }

        public void display()
        {
            Console.WriteLine("Name= {0} and Id= {1}", Name, Id);
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {

            *//*while(true)
               {
                   int ch, id;
                   string name;
                   Console.WriteLine("List operations");
                   Console.WriteLine("1.Insert");
                   Console.WriteLine("2.Delete");
                   Console.WriteLine("3.Search");
                   Console.WriteLine("4.Display");

                   Console.WriteLine("Enter the choice");
                   ch=int.Parse(Console.ReadLine());
                   switch (ch)
                   {
                       case 1:
                           Console.WriteLine("Enter the name: ");
                           student.name= Console.ReadLine();
                           Console.WriteLine("Enter the Id: ");
                           id=int.Parse(Console.ReadLine());
                  }
               }*//*

            Console.WriteLine("List Operations");
            var names = new List<string>();                             // other declaration type
            var num1 = new List<int> { 11, 22, 23, 24, 25, 26, };         // other declaration type

            var num = new List<int>();
            for (int i = 1; i < 10; i++)
            {
                num.Add(i * 5);
            }

            foreach (var i in num)
            {
                Console.Write($"{i} ");
                //Console.WriteLine(i);
            }
            var students = new List<Student>()                             // other declation type
            {
                new Student(){ Id = 1, Name="Bill"},
                new Student(){ Id = 2, Name="Steve"},
                new Student(){ Id = 3, Name="Ram"},
                new Student(){ Id = 4, Name="Abdul"}
            };

        }
    }
}
*/