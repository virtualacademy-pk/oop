#include <iostream>
#include "Employee.cpp" 
using namespace std;

int main( )
{
   	Employee emp;
   
   	emp.setEmployeeId(1);
   	emp.setEmployeeName("Ali Imran");
	 
   cout << "Employee is " << emp.getEmployeeName() <<endl;
   return 0;
}
