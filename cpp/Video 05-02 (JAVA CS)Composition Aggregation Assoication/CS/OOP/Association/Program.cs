using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Association
{
    class Program
    {
        static void Main(string[] args)
        {
            Processor processor = new Processor(3.6);
            {
                Computer pc1 = new Computer();
                pc1.Processor = processor;
                pc1.Print();
            }

            Console.WriteLine("Clock Speed " + processor.ClockSpeed);
            Console.Read();
        }
        
    }
}
