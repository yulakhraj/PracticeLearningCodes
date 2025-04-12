/*using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.NetworkInformation;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace CsharpCWH
{
    class Array<T>
    {
        public T[] obj;
        public int size;
        public int capacity;

        public Array(int capacity)
        {
            this.capacity = capacity;
            obj = new T[capacity];
            size = 0;
        }

        public void insertion(T value)
        {
            if (size == capacity)
            {
                Console.WriteLine("Array is full");
            }
            obj[size] = value;
            size++;
        }
        public void insertAtFirst(T value)
        {
            obj[0] = value;
            for (int i = 1; i < size - 1; i++)
            {
                obj[i] = obj[i + 1];
            }
            size++;
        }
        public void deletion(T value)
        {
            for (int i = 0; i < size; i++)
            {
                if (obj[i].Equals(value))
                {
                    obj[i] = obj[i + 1];
                }
            }
            size--;
        }
        public int search(T value)
        {
            for (int i = 0; i < size; i++)
            {
                if (obj[i].Equals(value))
                {
                    return i;
                }
            }
            return -1;
        }
        public void sort()
        {
            Array.Sort(obj);
        }
        public void print()
        {
            if (size == 0)
            {
                Console.WriteLine("Arrays is Empty: ");
                return;
            }
            for (int i = 0; i < size; i++)
            {
                Console.WriteLine(obj[i] + " ");
            }
        }
    }

    internal class ArrayGenericsProblem
    {

        static void Main(string[] args)
        {
            int len;
            Console.WriteLine("Enter The Size of Array :");
            len = int.Parse(Console.ReadLine());
            Array<int> arr = new Array<int>(len);

            bool flag = true;
            while (flag)
            {
                int data, val, ele;
                Console.WriteLine("Array Operation");
                Console.WriteLine("1.Insertion");
                Console.WriteLine("2.Deletion");
                Console.WriteLine("3.Searching");
                Console.WriteLine("4.Sorting");
                Console.WriteLine("5.Display");
                Console.WriteLine("6.Exit");
                Console.WriteLine("7.insertatfirst");


                int choice = int.Parse(Console.ReadLine());
                switch (choice)
                {
                    case 1:
                        Console.WriteLine("Enter The Number :");
                        data = int.Parse(Console.ReadLine());
                        arr.insertion(data);
                        break;
                    case 2:
                        Console.WriteLine("Enter The Value :");
                        val = int.Parse(Console.ReadLine());
                        arr.deletion(val);
                        break;
                    case 3:
                        Console.WriteLine("Enter The Element :");
                        ele = int.Parse(Console.ReadLine());
                        int index = arr.search(ele);
                        if (index != -1)
                        {
                            Console.WriteLine("Element at index " + index);
                        }
                        else
                        {
                            Console.WriteLine("Element Not available");
                        }
                        break;
                    case 4:
                        arr.sort();
                        Console.WriteLine("Arrays are Sorted: ");
                        break;
                    case 5:
                        Console.WriteLine("Arrays are: ");
                        arr.print();
                        break;
                    case 6:
                        Console.WriteLine("Terminated Successful");
                        flag = false;
                        break;
                    case 7:
                        arr.insertAtFirst(24);
                        break;
                }
            }
        }
    }
}
*/