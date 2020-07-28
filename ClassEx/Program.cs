using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassEx
{
    class Program
    {
        // public field -> get / set 접근가능
        class Pos1
        {
            public int x, y;

            public Pos1(int x, int y)
            {
                this.x = x;
                this.y = y;
            }
        }

        // private field -> 접근 불가
        class Pos2
        {
            int x, y;

            public Pos2(int x, int y)
            {
                this.x = x;
                this.y = y;
            }
        }

        // private field + public method
        // Java 방식
        // Getter / Setter 떄문에 코드가 길어짐 -> 플러그인을 이용하여 생략 가능
        class Pos3
        {
            int x;
            int y;

            public Pos3(int x, int y)
            {
                this.x = x;
                this.y = y;
            }

            public int GetX()
            {
                return this.x;
            }
            public void SetX(int x)
            {
                this.x = x;
            }
        }

        // private field
        // public field + method
        // C#에서 권장하는 방식
        class Pos4
        {

            public readonly int X; // 읽기(get) 전용으로 구현하려면 public readonly로 선언하는 것이 편함
            int y;

            public Pos4(int x, int y)
            {
                this.X = x;
                this.Y = y;
            }

            public int Y { set => this.y = value; } // 쓰기 전용 구현
        }

        // private field
        class Pos5
        {
            int x { get; set; }
            int y { get; set; }

            public Pos5(int x, int y)
            {
                this.x = x;
                this.y = y;
            }
        }

        // public field + method
        // 접근 제한을 public으로 할거면 get; set;의 의미가 없음
        class Pos6
        {
            public int x { get; set; }
            public int y { get; set; }
            // { get => return this.x; set => this.x = value; }
            // { get { return this.x; } set { x = value; }}
            public Pos6(int x, int y)
            {
                this.x = x;
                this.y = y;
            }
        }


        static void Main(string[] args)
        {
            Pos1 p1 = new Pos1(1, 2);
            Pos2 p2 = new Pos2(1, 2);
            Pos3 p3 = new Pos3(1, 2);
            Pos4 p4 = new Pos4(1, 2);
            Pos5 p5 = new Pos5(1, 2);
            Pos6 p6 = new Pos6(1, 2);

            // set value
            // Pos1 -> set; 없이 잘 됨
            p1.x = 10;

            // Pos2 -> private field 접근불가
            // p2.x = 10;

            // Pos3 -> Java 방식
            p3.SetX(10);

            // Pos4 -> X는 readonly이기 때문에 수정 불가
            // p4.X = 10;
            p4.Y = 10;

            // Pos5 -> private field 접근불가
            // p5.x = 10;

            // Pos6 -> public 이므로 get; set; 하지 않아도 잘 됨 == Pos1
            p6.x = 10;


            // get value
            // Pos1
            Console.WriteLine("Pos1 X: {0}, Y: {1}", p1.x, p1.y);

            // Pos2
            Console.WriteLine("Pos2 X: {0}, Y: {1}", null, null);

            // Pos3
            Console.WriteLine("Pos3 X: {0}, Y: {1}", p3.GetX(), null);

            // Pos4
            Console.WriteLine("Pos4 X: {0}, Y: {1}", p4.X, null);

            // Pos5
            Console.WriteLine("Pos5 X: {0}, Y: {1}", null, null);

            // Pos6
            Console.WriteLine("Pos6 X: {0}, Y: {1}", p6.x, p6.y);

        }

    }
}
