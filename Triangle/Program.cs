using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Triangle
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("edge1입력 -> ");
            int x = Convert.ToInt32(Console.ReadLine());
            Console.Write("edge2입력 -> ");
            int y = Convert.ToInt32(Console.ReadLine());
            Console.Write("edge3입력 -> ");
            int z = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("This is " + (x + y > z && y + z > x && x + z > y ? "" : "NOT ") + "triangle.");
        }
    }
}
