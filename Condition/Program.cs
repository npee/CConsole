using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Condition
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("영문자를 입력해주세요 : ");
            string input = Console.ReadLine();

            Console.WriteLine(input.Any(char.IsUpper) ?  "Yes" : "No");
        }
    }
}
