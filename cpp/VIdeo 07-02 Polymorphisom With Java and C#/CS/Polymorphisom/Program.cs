using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Polymorphisom
{
    class Program
    {
        static void Main(string[] args)
        {
            Employee[] _emp = new Employee[3];
            SalariedEmployee e1 = new SalariedEmployee
            {
                EmployeeId = 1,
                EmployeeName = "Sohail",
                HouseRent = 500.0f,
                Salary = 1000.0f,
                EmployeeType = 'S'
            };
            _emp[0] = e1;
            ContractualEmployee e2 = new ContractualEmployee
            {
                EmployeeId = 2,
                EmployeeName = "Ali",
                ContractDuration = 3,
                Salary = 1000.0f,
                EmployeeType = 'C'
            };
            _emp[1] = e2;
            HourlyEmployee e3 = new HourlyEmployee
            {
                EmployeeId = 3,
                EmployeeName = "Aslam",
                HourWorked = 200,
                HourlyRate = 40,

                EmployeeType = 'H'
            };
            _emp[2] = e3;
            printSalaries(_emp, 3);

         
            Console.Read();

        }
        static void printSalaries(Employee[] _emp, int size)
        {
            for (int i = 0; i < size; i++)
            {
                Console.WriteLine("---------------------------------------");
                Console.WriteLine("Employee Type is  : " + _emp[i].EmployeeType);
                Console.WriteLine("Employee Id :" + _emp[i].EmployeeId);
                Console.WriteLine("Employee Name :" + _emp[i].EmployeeName);
                float salary = _emp[i].calculateSalary();
                Console.WriteLine("Employee Salary :" + salary);
                _emp[i].Click();
                Console.WriteLine("---------------------------------------");
            }
        }
        /*static void printSalaries(Employee[] _emp, int size)
        {
            for (int i = 0; i < size; i++)
            {
                Console.WriteLine("---------------------------------------");
                Console.WriteLine("Employee Type is  : " + _emp[i].EmployeeType);
                Console.WriteLine("Employee Id :" + _emp[i].EmployeeId);
                Console.WriteLine("Employee Name :" + _emp[i].EmployeeName);
                float salary = 0;
                if (_emp[i].EmployeeType == 'S')
                {
                    SalariedEmployee s = (SalariedEmployee)_emp[i];
                    salary = s.calculateSalary();
                }else if (_emp[i].EmployeeType == 'H')
                {
                    HourlyEmployee h = (HourlyEmployee)_emp[i];
                    salary = h.calculateSalary();
                }
                else if (_emp[i].EmployeeType == 'C')
                {
                    ContractualEmployee c = (ContractualEmployee)_emp[i];
                    salary = c.calculateSalary();
                }

                Console.WriteLine("Employee Salary :" + salary);
                Console.WriteLine("---------------------------------------");
            }
        }*/
    }
}
