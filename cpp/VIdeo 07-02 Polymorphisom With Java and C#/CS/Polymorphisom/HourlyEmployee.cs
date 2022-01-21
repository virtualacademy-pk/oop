using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Polymorphisom
{
    class HourlyEmployee : Employee
    {
        protected float hourlyRate;
        protected float hourWorked;

        public float HourlyRate
        {
            get { return hourlyRate; }
            set { hourlyRate = value; }
        }

        public float HourWorked
        {
            get { return hourWorked; }
            set { hourWorked = value; }
        }

        public override float calculateSalary()
        {
            Console.WriteLine("Calculating Hourly Employee Salary  ");
            salary = hourlyRate * hourWorked;
            return salary;
        }
    }
}
