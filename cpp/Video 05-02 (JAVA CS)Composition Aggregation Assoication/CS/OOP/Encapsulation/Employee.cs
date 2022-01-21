using  System;

namespace Encapsulation
{
    public abstract class Employee
    {
        protected int employeeId;
        protected string employeeName;
        protected string religion;
        public static String companyName;

        public Employee()
        {
            Console.WriteLine("Calling Default Constructor");
            employeeId = 0;
            employeeName = "";
            religion = "Islam";
        }

        public Employee(int employeeId):this()
        {
            Console.WriteLine("Calling param constructor with Id");
            this.employeeId = employeeId;
            employeeName = "";

        }

        public string Religion
        {
            get { return this.religion; }
            set { this.religion = value; }

        }

        public int EmployeeId
        {
            get { return this.employeeId; }
            set { this.employeeId = value; }
        }

        public string EmployeeName
        {
            get { return employeeName; }
            set { employeeName = value; }
        }
        public string CompanyName
        {
            get { return companyName; }
            set { companyName = value; }
        }

        public abstract void Print() ;/*
        {
            Console.WriteLine("Id " + employeeId);

            Console.WriteLine("Employee Name " + employeeName);
            Console.WriteLine("Religion" + religion);
        }*/
    }
}