#include <iostream>
#include "Employee.cpp" 
using namespace std;

int main( )
{
   	Employee emp(3);
    	emp.setEmployeeName("Peter");
	 emp.setReligion("Christian");
  
   cout <<"Employee Id "<<emp.getEmployeeId()<<endl<< "Employee name " << emp.getEmployeeName()<<endl <<"Employee religion " << emp.getReligion()<<endl;
  
  Employee emp2;
  	emp2.setEmployeeId(1);
    	emp2.setEmployeeName("Ali Imran");
cout <<"Employee Id "<<emp2.getEmployeeId()<<endl<< "Employee name " << emp2.getEmployeeName()<<endl <<"Employee religion " << emp2.getReligion()<<endl;
   return 0;
}
