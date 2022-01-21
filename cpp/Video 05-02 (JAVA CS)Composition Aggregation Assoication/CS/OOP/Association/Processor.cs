using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Association
{
    class Processor
    {
        private double clockSpeed;

        public double ClockSpeed
        {
            get { return clockSpeed; }
            set { clockSpeed = value; }
        }
        public Processor()
        {
            ClockSpeed = 2.5;
        }
        public Processor(double cs)
        {
            clockSpeed = cs;
        }
      
    }
}
