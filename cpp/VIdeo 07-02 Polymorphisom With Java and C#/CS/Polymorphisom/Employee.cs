using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Polymorphisom
{
     abstract class Employee :IClickable
    {
        protected int employeeId;
        protected String employeeName;
         
        protected float salary;
        protected char employeeType;

        public int EmployeeId
        {
            get { return employeeId; }
            set { employeeId = value; }
        }

        public string EmployeeName
        {
            get { return employeeName; }
            set { employeeName = value; }
        }

        public float Salary
        {
            get { return salary; }
            set { salary = value; }
        }

        public char EmployeeType
        {
            get { return employeeType; }
            set { employeeType = value; }
        }

        public abstract float calculateSalary();
        /*public virtual float calculateSalary()
        {
            Console.WriteLine("Calculating Base Employee Salary  ");
            return salary;
        }*/
        /*public virtual float calculateSalary()
        {
            Console.WriteLine("Calculating Base Employee Salary  ");
            return salary;
        }*/
         public void Click()
         {
             Console.WriteLine("Employe is clickable");
         }
    }
}
