using  System;

namespace Encapsulation
{
    public class Employee
    {
        private int employeeId;
        private string employeeName;
        private string religion;
        public Employee()
        {
            Console.WriteLine("Calling Default Constructor");
            employeeId = 0;
            employeeName = "";
            religion = "Islam";
        }
        public Employee(int employeeId)
        {
            Console.WriteLine("Calling param constructor with Id");
            this.employeeId = employeeId;
            employeeName = "";
            religion = "Islam";
        }
        public string Religion
        {
            get {return this.religion;}
            set { this.religion = value; }
            
        }
        public int EmployeeId
        {
            get { return this.employeeId; }
            set { this.employeeId = value; }
        }

        public string EmployeeName
        {
            get { return this.employeeName; }
            set { this.employeeName = value; }

        }
    }

}