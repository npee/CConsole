using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Factorial
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Factoral 피연산자 입력 -> ");
            int n = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine(n + "! = " + Factorial(n));
        }
        
        static int Factorial(int n)
        {
            if (n == 1) return 1;
            return n * Factorial(--n);
        }

    }
}
