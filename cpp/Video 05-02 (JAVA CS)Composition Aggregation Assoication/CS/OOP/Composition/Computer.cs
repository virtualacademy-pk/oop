using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Association
{
    class Computer
    {
        private Processor processor;
        private String operatingSystem;

        public string OperatingSystem
        {
            get { return operatingSystem; }
            set { operatingSystem = value; }
        }

        public Processor Processor
        {
            get { return processor; }
            set
            {
                processor = value;
                processor.ClockSpeed = 5.0;
            }
        }
        public void Print()
        {
            
            Console.WriteLine("Operating System" + OperatingSystem);
            Console.WriteLine("Clock Speed " + processor.ClockSpeed);
        }
        
    }
}
