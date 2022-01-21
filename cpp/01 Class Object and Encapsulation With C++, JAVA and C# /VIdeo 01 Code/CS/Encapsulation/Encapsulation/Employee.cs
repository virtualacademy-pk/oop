using  System;

namespace Encapsulation
{
    public class Employee
    {
        private int employeeId;
        private string employeeName;

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