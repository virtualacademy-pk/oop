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
            Employee emp = new HourlyEmployee();
            emp.CompanyName = "VU";
            emp.EmployeeName = "Ali";
            emp.EmployeeId = 1;
           emp.Print();
                         Console.ReadLine();
        }

        }
    }
