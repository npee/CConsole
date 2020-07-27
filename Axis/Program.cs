using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Axis
{
    class Point
    {
        public int x;
        public int y;

        public Point(int x, int y)
        {
            this.x = x;
            this.y = y;
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Point point1 = new Point(50, 50);
            Point point2 = new Point(100, 100);

            Console.Write("X입력 -> ");
            int inputX = Convert.ToInt32(Console.ReadLine());
            Console.Write("Y입력 -> ");
            int inputY = Convert.ToInt32(Console.ReadLine());

            bool isInRectangle = CheckXY(point1, point2, inputX, inputY);
            Console.WriteLine(isInRectangle ? "포함됩니다." : "포함되지 않습니다.");
        }

        static bool CheckXY(Point p1, Point p2, int x, int y)
        {
            for (int i = p1.x; i <= p2.x; i++)
                for (int j = p1.y; j <= p2.y; j++)
                    if (i == x && j == y)
                        return true;
            return false;
        }
    }
}
