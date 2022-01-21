#include <iostream>
#include <stdlib.h>

using namespace std;

class Employee{
    protected:
      int employeeId;
      string employeeName;
   	  static string companyName;      	  
   public :
	void static setCompanyName(string cName){
		companyName = cName;
		 
	}
	static string getCompanyName(){
		return companyName;
	}
   	/*Employee(){
   		
   		cout<<"Base Class"<<endl;
	   }*/
	Employee(int id){
	   	//Employee::companyName = "Virtual University";	
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
string Employee::companyName = "Virtual University";
class ContractualEmployee : public Employee{ // private is by default inheritance
	  public : 
	  ContractualEmployee():Employee(0){
   		cout<<"ContractualEmployee Class Constructor "<<endl;
	   }
};
class HourlyEmployee : public Employee{ //Private Inheritance  is by default
       
   public :
   	  HourlyEmployee():Employee(0){
		 
   		cout<<"Hourly Class Constructor "<<endl;
	   }	
	   HourlyEmployee(int id):Employee(id){
	    //this->employeeId = id;
   		cout<<"Hourly Class Constructor "<<endl;
	   }	 
};
//string Employee::companyName = "Virtual University";		   
int main( )
{
Employee::setCompanyName("Virtual University of Pakistan");

	HourlyEmployee emp(9);
	cout<<"Employee Id "<<emp.getEmployeeId()<<endl;
 /*	 HourlyEmployee emp2(2);   	 
  	 cout<<"Employee Detail "<<endl;
	 cout<<"Company name is "<<emp.getCompanyName()<<endl;
	cout<<"Employee Id is " << emp.getEmployeeId();
cout<<"---------------------"<<endl;
	 cout<<"Employee Detail "<<endl;
	 cout<<"Company name is "<<emp2.getCompanyName()<<endl;
	cout<<"Employee Id is " << emp2.getEmployeeId();*/
      return 0; 
} 


