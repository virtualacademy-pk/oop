using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Polymorphisom
{
    class SalariedEmployee : Employee
    {
        protected float houseRent;

        public float HouseRent
        {
            get { return houseRent; }
            set { houseRent = value; }
        }

        public override float calculateSalary()
        {
            Console.WriteLine("Calculating Salaried Employee Salary  ");
            salary = (salary + houseRent);
            return salary;
        }
    }
}
