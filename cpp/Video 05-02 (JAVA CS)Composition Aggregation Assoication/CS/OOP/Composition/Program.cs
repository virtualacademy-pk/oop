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
            processor.PrintSpec();

            Console.Read();
        }
        
    }
}
