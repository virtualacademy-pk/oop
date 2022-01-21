#include <iostream>
#include <stdlib.h>

using namespace std;

class Employee{
    protected:
      int employeeId;
      string employeeName;
      
   public :
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
class ContractualEmployee : public Employee{ // private is by default inheritance
	private:
	 int contractDuration;
	 public : 
	 void setContractDuration(int contractDuration){
	 	this->contractDuration = contractDuration;
	 }
	 int getContractDuration(){
	 	return this->contractDuration;
	 }
};
class HourlyEmployee : public Employee{ //Private Inheritance  is by default
    protected:
      int hourlyRate;
      int hourWorked;
      
   public :
   	 
  
	  void setHourlyRate(int hourlyRate){
	  	this->hourlyRate = hourlyRate;
	  }  
	  int getHourlyRate(){
	  	return this->hourlyRate;
	  }
     	 
};
 


