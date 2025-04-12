/*using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CsharpCWH
{
    *//*class Student
    {
        private string name;
        private int age;
        private int id;
        public string Name
        {
            get { return name; }
            set { name = value; }
        }
        public int Age
        {
            get { return age; }
            set { age = value; }
        }
        public int Id
        {
            get { return id; }
            set { id = value; }
        }
        public void display()
        {
            Console.WriteLine("Hello my Name is {0}. My age is {1} and My age is {2}.", name, id, age);
        }
    }*/

    /*class generics<T>
    {
        public generics(T msg) 
        {
            Console.WriteLine(msg);
        }
    }
    class genericsMethod
    {
        public void show<T>(T msg)
        {
            Console.WriteLine(msg);
        }
    }*/

    /*class employee
    {
        private string name;
        private int age;
        public string tname
        {
            get { return name; }
            set { name = value; }
        }
        public int tage
        {
            get { return age; }
            set { age = value; }
        }
        public void display()
        {
            Console.WriteLine("Emplayee name is {0} and his Age is {1}", name, age);
        }
    }*/

    /*class info
    {
        public int id { get; set; }   //property
        public string name { get; set; }
        public string description { get; set; }
    }

    abstract class shape
    {
        public abstract double area { get; }
        public abstract double perimeter { get; }

    }
    class circle: shape
    {
        private int rad;
        public int Rad
        {
            get { return rad; } set {  rad = value; }
        }

        public override double area
        {
            get { 
                return (Math.PI * rad * rad); 
            }
        }
        public override double perimeter
        {
            get
            {
                return (2 * Math.PI * rad);
            }
        }
    }*/

    /*interface Ipropdemo
    {
        string name { get; set; }
        int roll { get; set; }
    }
    class demo : Ipropdemo
    {
        private string _name;
        private int _roll;

        public string Name
        {
            get { return _name; }
            set { _name = value; }
        }
        public int roll
        {
            get { return _roll; }
            set { _roll = value; }
        }
    }*/

    /*public class Info
    {
        public int id { get; set; }
        public string name { get; set; }
        public string description { get; set; }
        
    }*//*

    internal class practice
    {
        *//*Params
        public static void show(params int[] items)
        {
            int sum = 0;
            for(int i=0;i<items.Length; i++)
            {
                sum += items[i];
                Console.WriteLine(items[i]);
            }
        }*/

        /*public static void increment(ref int a)
        {
            a++;
            Console.WriteLine(a);
        }*//*
        static void Main(string[] args)
        {
            Console.WriteLine("Namaskar Manish");

            *//*//show(1,6);
            //show(1, 2, 3);
            //show(10, 20, 30, 40);*/

            /*Student s1=new Student();
             s1.Name = "manish raj";
             s1.Age = 20;
             s1.Id = 1;
             s1.display();*/

            /*generics<string> g1 = new generics<string>("World");
            generics<int> g2 = new generics<int>(69);

            genericsMethod g3 = new genericsMethod();
            g3.show("hello");
            g3.show(20);*/

            /*Console.WriteLine();
            int b = 20;
            Console.WriteLine("Before : "+b);
            increment(ref b);
            Console.WriteLine("After : "+b);*/

            /*// Arrays
            int size;
            Console.WriteLine("Enter the size");
            size =int.Parse(Console.ReadLine());
            Console.WriteLine(size);
            int[] arr = new int[size];
            Console.WriteLine("Enter the elements");
            for(int i = 0; i < size; i++)
            {
                arr[i] = int.Parse(Console.ReadLine());
            }
            Console.WriteLine("Elements are: ");
            for (int i = 0; i < size; i++)
            {
                Console.WriteLine(arr[i]+" ");
            }*/

            /*// Jagged Arrays
            int[][] jagarr = new int[3][];
            jagarr[0] = new int[] { 1, 2, 3 };
            jagarr[1] = new int[] { 4, 7 };
            jagarr[2] = new int[] { 7, 2, 4, 8 };

            for(int i = 0; i < jagarr.Length; i++)
            {
                Console.Write("subarray {0} -> ", i);
                for(int j = 0; j < jagarr[i].Length; j++)
                {
                    Console.Write(jagarr[i][j]+" ");
                }
                Console.WriteLine();
            }*/

            /*//Exception Handlling
            int a = 11;
            int b = 0;
            try
            {
                int c = a / b;
                Console.WriteLine(c);
            }
            catch(Exception e)
            {
                Console.WriteLine(e);
            }
            finally { Console.WriteLine("Succesful Handle exception"); }*/

            /*var a = 20;
            var b = "string";
            var c = 'c';
            Console.WriteLine(a);
            Console.WriteLine(b);
            Console.WriteLine(c);*/

            /*var v1 = 10;
            Console.WriteLine(v1.GetType().Name);
            Console.WriteLine("v1 = "+v1);

            var v2 = "C# Lanaguage";
            Console.WriteLine(v2.GetType().Name);
            Console.Write("v2 = "+v2+" ");
            Console.WriteLine();

            var v3 = new[] { 1, 2, 4, 5 }; //annonymous array          
            foreach (var v in v3)
                Console.Write(v+" ");

            Console.WriteLine();
            int[] arr = { 10, 20, 30, 40, 50 };
            var v4 = arr;                           
            foreach (var v in v4)
            {
                Console.Write(v+" ");
            }

            var tup = new { name = "abc", marks = 50 }; //anonymous tuple
            Console.WriteLine(tup.ToString());
            Console.WriteLine(tup.GetType());
            Console.WriteLine(tup.name + "\t" + tup.marks);


            var lst = new List<string>();
            lst.Add("abc");
            lst.Add("def");
            lst.Add("ghi");
            lst.Add("jkl");
            lst.Add("mno");
            Console.WriteLine(lst.ToString());
            Console.WriteLine(lst.GetType());
            foreach (var v in lst)
            {
                Console.WriteLine(v);
            }*/

            /*info ob = new info();
            
            ob.id = 1;
            ob.name = "manish";
            ob.description = "properties demo";
            

            Console.WriteLine("id = "+ ob.id);
            Console.WriteLine("name= "+ob.name);
            Console.WriteLine("description= "+ob.description);*/

            /*circle c =new circle();
            c.Rad = 5;
            Console.WriteLine(c.area);
            Console.WriteLine(c.perimeter);*/

            /*Info[] inf =
            {
               new Info { id = 1,name="manish",description="pune"},
               new Info { id = 2,name="rahul",description="bangalore"},
               new Info { id = 3,name="nitin",description="ayodhya"},
               new Info { id = 4,name="shobit",description="patna"},
               new Info { id = 5,name="rohit",description="patna"},
            };

            List<Info> list = new List<Info>()
            {
               new Info { id = 1,name="manish",description="pune"},
               new Info { id = 2,name="rahul",description="bangalore"},
               new Info { id = 3,name="nitin",description="ayodhya"},
            };


            *//*var f = from pa in Info
                    where pa.id == 1
                    select pa;*/

            /*var res = from pa in inf
                      where pa.description=="patna"
                      select pa;
            Console.WriteLine(string.Join(", ", res));

            var r = inf.Where(a => a.description.Contains("patna")).ToArray();

            foreach (var i in r)
            {
                Console.WriteLine("name = {0}", i.name);
            }*//*



        }
    }
}
*/