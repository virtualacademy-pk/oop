using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Encapsulation
{
    class ContractEmployee : Employee
    {
        public override void Print()
        {
            Console.WriteLine("Contract Employee Prining");
            Console.WriteLine("Id " + employeeId);

            Console.WriteLine("Employee Name " + employeeName);
            Console.WriteLine("Religion" + religion);
        }
    }
}
