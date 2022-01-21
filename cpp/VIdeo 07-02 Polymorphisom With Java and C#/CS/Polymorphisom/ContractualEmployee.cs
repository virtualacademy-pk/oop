using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Polymorphisom
{
    class ContractualEmployee : Employee
    {
        protected int contractDuration;

        public int ContractDuration
        {
            get { return contractDuration; }
            set { contractDuration = value; }
        }

        public  override float calculateSalary()
        {
            Console.WriteLine("Calculating Contractual Employee Salary  ");
             
            return salary;
        }
    }
}
