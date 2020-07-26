using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Upper
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("영문자를 입력해주세요: ");
            string str = "";
            foreach (char ch in Console.ReadLine())
                str += ch >= 'a' && ch <= 'z' ? (char)(ch - ' ') : (char)(ch + ' ');
            // str += ch >= 97 && ch <= 122 ? (char)(ch - 32) : (char)(ch + 32);

            Console.WriteLine(str);
        }
    }
}
