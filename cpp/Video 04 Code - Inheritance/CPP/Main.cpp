#include <iostream>
#include "Employee.cpp" 
 
using namespace std;

int main( )
{
   	ContractualEmployee emp;
   	emp.setEmployeeId(1);
    	emp.setEmployeeName("Ali");
 	emp.setContractDuration(2);
  
   cout <<"Employee Id "<<emp.getEmployeeId()<<endl<< "Employee name " << emp.getEmployeeName()<<endl;
   cout<<"COntract Duration : "<<emp.getContractDuration()<<endl;
      return 0;
}
