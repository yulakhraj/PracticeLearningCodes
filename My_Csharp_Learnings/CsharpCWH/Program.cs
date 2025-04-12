/*using System;
using System.Collections.Generic;
using System.Data.Odbc;
using System.Globalization;
using System.Linq;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace CsharpCWH
{
    *//*    public interface myinterface<T>
        {
            void show(T t);

        }
        class sample<T> : myinterface<T>
        {
            public void show(T t) { 
                Console.WriteLine(t.ToString());
            }
        }*/
    /*class mylinkedlist<T>
    {
        private T info;
        private mylinkedlist<T> next;
        private int count;
        private mylinkedlist<T> head = null;


        public void Addnode(T tinfo)
        {
            char ch;
            mylinkedlist<T> newnode= new mylinkedlist<T>();
            newnode.info = tinfo;
            if (head == null)
            {
                head = newnode;
                newnode.next = null;
            }
            else
            {
                mylinkedlist<T> temp = head;
                while(temp.next != null)
                {
                    temp = temp.next;
                }
                newnode.next = temp.next;
                temp.next = newnode;
            }
        }
        public void deleteAtFirst()
        {
            if (head == null)
            {
                Console.WriteLine("\n Linked List Empty");
               
            }
            mylinkedlist<T> temp = head;
            head = head.next;
        }
        public void deleteAtLast()
        {
            if (head == null)
            {
                Console.WriteLine("\n Linked List Empty");
            }
            mylinkedlist<T> temp = head;
            while (temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;
        }
        public void deleteAtPosition(int position)
        {
            if (head == null)
            {
                Console.WriteLine("\n Linked List Empty");
                return;
            }

            if (position == 1)
            {
                deleteAtFirst();
                return;
            }
            mylinkedlist<T> temp = head;
            int count = 1;
            while (count < position - 1 && temp.next != null)
            {
                temp = temp.next;
                count++;
            }
            mylinkedlist<T> tempdelete = temp.next;
            temp.next = tempdelete.next;
            
        }
        public void traverse()
        {
            if (head == null)
            {
                Console.WriteLine("\n Linked List Empty");
            }
            else
            {
                mylinkedlist<T> temp = head;
                while (temp!= null)
                {
                    Console.WriteLine("{0}",temp.info);
                    temp=temp.next; 
                }
            }
        }
    }*//*

     //public delegate int dele(int a, int b);
     internal class Program
     {
         *//*public static int sum(int a, int b) { return a + b; }
         public static int mul(int a, int b) { return a * b; }
         public int div(int a, int b) {  return a / b; }
         public int sub(int a, int b) { return  (a - b) / b; }*/


    /*        public class A
            {
                int id;
                string name;

                public A(int id, string name)
                {
                    this.id = id;
                    this.name = name;
                }

                void setid(int id)
                {
                    this.id = id;
                }
                void setname(string name)
                {
                    this.name = name;
                }
                int getid()
                {
                    return this.id;
                }
                string getname()
                {
                    return this.name;
                }
            }*//*
        static void Main(string[] args)
        {
            Console.WriteLine("C# Learning");

            *//*int a;
            //a=Int32.Parse(Console.ReadLine());
            //Console.WriteLine(a);

            /*int[] arr = { 12, 34, 21, 45, 55, 65, 75 };
            foreach (int i in arr)
            {
                Console.Write(i + " ");
            }
            Array.Sort(arr);
            Console.WriteLine();
            foreach (int i in arr)
            {
                Console.Write(i + " ");
            }*/

            /*            string str1 = "India";
                        char[] chr = { 'B', 'A', 'T', 'M', 'A', 'N' };
                        string str2 = new string(chr);*/
            /* string str3 = str1 + str2;
             Console.WriteLine("\n Str1= " + str1);
             Console.WriteLine("\n Str2= " + str2);
             Console.WriteLine("\n Str3= " + str3);
             Console.WriteLine("\n Length of Str1= " + str1.Length);
             Console.WriteLine("\n Hashcode of Str1= " + str1.GetHashCode());*/

            /*A a1 = new A(20,"manish");
            A a2 = new A(30, "rahul");
            A a3 = a2;

            if(a1== a2)
            {
                Console.WriteLine("equal");
            }
            else
            {
                Console.WriteLine("not equal");
            }*/

            /*if(string.Compare(str1, str2) == 0 )
            {
                Console.WriteLine("equal");
            }
            else
            {
                Console.WriteLine("not eual");
            }
            //string st1;
            //string st2 = null;
            //string st3 = System.String.Empty;
            //Console.WriteLine("\n Length of St1= " + st1.Length);
            //Console.WriteLine("\n Length of St2= " + st2.Length);
            //Console.WriteLine("\n Length of St3= " + st3.Length);
            //Console.WriteLine(string.IsNullOrEmpty(st3));         */

            /*          string str9 = "abc";
                        string str10 = "def";
                        str9 += str10;

                        string str8 = str9 + str10;
                        Console.WriteLine(str9);

                        var info = (fname: "hemant", lname: "shah",desg: "Academic head");
                        Console.WriteLine(info);
                        Console.WriteLine(info.ToString());
                        Console.WriteLine(info.GetType().BaseType.FullName);

                        Console.WriteLine($"\nFirst Name: { info.fname} \t Last Name: {info.lname}");   */

            /*mylinkedlist<int> list = new mylinkedlist<int>();
            list.Addnode(10);
            list.Addnode(20);
            list.Addnode(30); 
            list.Addnode(40);
            list.Addnode(50);

            Console.WriteLine("\n Linked List are: ");
            list.traverse();

            //list.deleteAtFirst();
            //list.deleteAtLast();

            int a;
            a=Int32.Parse(Console.ReadLine());
            Console.WriteLine(a);
            list.deleteAtPosition(2);


            Console.WriteLine("\n New Linked List are: ");
            list.traverse();*/

            
            /*int[] numbers = { 3, 5, 1, 4, 2 };
            Array.Sort(numbers, (a, b) => a.CompareTo(b));

            foreach(int number in numbers)
            {
                Console.WriteLine(number+" ");
            }
            Action<double, double> func3 = (x, y) =>
            {
                double p = (x + y);
                Console.WriteLine(p);
            };
            func3(2, 5);

            Action<int, int> func4 = (x, y) =>
            {
                int mul = (x * y);
                Console.WriteLine(mul);

            };
            func4(20, 5);

            Action<string> func1 = (x)=> Console.WriteLine(x);
            func1("lambda expression");*//*





        }
     }
}
*/