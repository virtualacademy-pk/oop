using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Encapsulation
{
    class Program
    {
        static void Main(string[] args)
        {
            Employee emp = new Employee();
            emp.EmployeeId = 1;
            emp.EmployeeName = "Ali Imran";
            Console.WriteLine("Employee Name is " + emp.EmployeeName);
            
            
        }
    }
}
