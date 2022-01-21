using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using OOP;

namespace Association
{
    class Processor
    {
        private double clockSpeed;
        private ArithmaticAndLogicUnit alu;
        private ControllUnit controllUnit;
        private MemoryUnit memoryUnit;
      
       

        public double ClockSpeed
        {
            get { return clockSpeed; }
            set { clockSpeed = value; }
        }
        public Processor()
        {
            clockSpeed = 2.5;
            alu = new ArithmaticAndLogicUnit();
            controllUnit = new ControllUnit();
            memoryUnit = new MemoryUnit();
        }
        public Processor(double cs)
        {
            clockSpeed = cs;
            alu = new ArithmaticAndLogicUnit();
            controllUnit = new ControllUnit();
            memoryUnit = new MemoryUnit();
        }
        public Processor ShallowCopy()
        {
            return (Processor)this.MemberwiseClone();
        }
        public void PrintSpec()
        {
            Console.WriteLine("ArithmaticAndLogicUnit");
        }
    }
}
