using System;
using System.Runtime.InteropServices;

namespace CSharpConsoleApplication
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("2 * 3 = {0}", Multiply(2, 3));
            Console.ReadKey();
        }

        [DllImport("MathLibrary.dll", CallingConvention = CallingConvention.Cdecl)]
        public static extern int Multiply(int a, int b);
    }
}
