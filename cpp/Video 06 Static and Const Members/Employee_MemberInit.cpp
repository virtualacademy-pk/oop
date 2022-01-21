#include <iostream>
#include <stdlib.h>

using namespace std;

class Employee{
    protected:
      int employeeId;
      char *employeeName;
      
   public :
   	Employee():employeeId(8),employeeName("Ahmad"){
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
	 void setEmployeeName(char* employeeName){
	 	this->employeeName = employeeName;
	 }
	 char* getEmployeeName(){
	 	return this->employeeName;
	 }	 
	 void print()const{
		cout<<"Printing Employee";
	} 
};
class ContractualEmployee : public Employee{  
	  public : 
	  ContractualEmployee(){
   		cout<<"ContractualEmployee Class Constructor "<<endl;
	   }
	    void print(){
		cout<<"Printing Contract Employee";
	} 
};
class HourlyEmployee : public Employee{  
       
   public :
   	  HourlyEmployee():Employee(3){
   		cout<<"Hourly Class Constructor "<<endl;
	   }	
	   HourlyEmployee(int id):Employee(13){
   		cout<<"Hourly Class Constructor "<<endl;
	   }	 
	     void print(){
		cout<<"Printing Hourly Employee";
	} 
};
class DgreeHolderEmployee : public HourlyEmployee {  
       
   public :
   	  DgreeHolderEmployee():HourlyEmployee(){
   		cout<<"DgreeHolder Class Constructor "<<endl;
	   }	
	   	 
	     void print(){
		cout<<"Printing DgreeHolder Employee";
	} 
};

int main( )
{
	DgreeHolderEmployee emp;   	 
	  emp.setEmployeeName("Sajid");
	 cout<<"Employee Detail "<<endl;
	cout<<"Employee Id is " << emp.getEmployeeId()<<endl;
	cout<<"Employee Name is " << emp.getEmployeeName();
      return 0;
} 


