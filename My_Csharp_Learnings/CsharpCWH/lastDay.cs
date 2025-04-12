using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CsharpCWH
{
    internal class lastDay
    {
        static void Main(string[] args)
        {
            int a = 20;
            int b, c, d;
            Console.WriteLine("enter a number ");
            b = int.Parse(Console.ReadLine());
            c = Convert.ToInt32(Console.ReadLine());
            d = Int16.Parse(Console.ReadLine());
            Console.WriteLine(a + b);
            Console.WriteLine(a + c);
            Console.WriteLine(a + d);
            string ab;
            ab = Console.ReadLine();
            Console.WriteLine(ab);
            int[] mynum = { 1, 2, 3 };
            int aa = 2, bb = 0;
            try
            {
                //Console.WriteLine(mynum[5]);
                Console.WriteLine(aa / bb);
                Console.WriteLine("trop");
            }
            catch (Exception ex)
            {
                //Console.WriteLine(ex.ToString());
                Console.WriteLine(ex);

            }
            finally
            {
                Console.WriteLine("hello");
                Console.WriteLine("Hello G20 Member");
            }
        }
    }
}
