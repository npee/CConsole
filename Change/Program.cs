using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Change
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("금액 입력 -> ");
            int w = Convert.ToInt32(Console.ReadLine());
            int[] wArray = new int[8];

            for (int i = 0; i < 8; i++)
            {
                for (int j = 0, n = 50000; j <= i; j++)
                {
                    wArray[i] /= n;
                    if (j % 2 == 0)
                        n /= 5;
                    else
                        n /= 10;

                }
            }

            Console.WriteLine(
                "오만원 {0}매, 만원 {1}매, 오천원 {2}매, 천원 {3}매, 500원 {4}개, 100원 {5}개, 50원 {6}개, 10원 {7}개",
                w / 50000,
                w % 50000 / 10000,
                w % 50000 % 10000 / 5000,
                w % 50000 % 10000 % 5000 / 1000,
                w % 50000 % 10000 % 5000 % 1000 / 500,
                w % 50000 % 10000 % 5000 % 1000 % 500 / 100,
                w % 50000 % 10000 % 5000 % 1000 % 500 % 100 / 50,
                w % 50000 % 10000 % 5000 % 1000 % 500 % 100 % 50 / 10
            );
        }
    }
}
