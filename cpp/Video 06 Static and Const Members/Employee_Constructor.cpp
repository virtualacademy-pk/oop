#include <iostream>
#include <stdlib.h>

using namespace std;

class Employee{
    protected:
      int employeeId;
      string employeeName;
      
   public :
   	Employee(){
   		cout<<"Base Class"<<endl;
	   }
	   Employee(int id){
	   	cout<<"Base Class overloaded Constructor"<<endl;
   		this->employeeId = id;
	   }
	void setEmployeeId(int employeeId){ 
   			this->employeeId = employeeId;
	   }
	 int  getEmployeeId(){
	 	return this->employeeId;
	 }
	 void setEmployeeName(string employeeName){
	 	this->employeeName = employeeName;
	 }
	 string getEmployeeName(){
	 	return this->employeeName;
	 }	 
};
class ContractualEmployee : public Employee{  
	  public : 
	  ContractualEmployee(){
   		cout<<"ContractualEmployee Class Constructor "<<endl;
	   }
};
class HourlyEmployee : public Employee{  
       
   public :
   	  HourlyEmployee(){
   		cout<<"Hourly Class Constructor "<<endl;
	   }	
	   HourlyEmployee(int id){
   		cout<<"Hourly Class Constructor "<<endl;
	   }	 
};
int main( )
{
	HourlyEmployee emp;   	 
	  
	 cout<<"Employee Detail "<<endl;
	cout<<"Employee Id is " << emp.getEmployeeId();
      return 0;
} 


