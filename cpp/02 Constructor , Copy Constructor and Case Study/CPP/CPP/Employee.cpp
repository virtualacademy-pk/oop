#include <iostream>
using namespace std;
class Employee{
    private:
      int employeeId;
      char* employeeName;
      char * religion;
   public :
   	
	   Employee(){
	   	cout<<"Calling Default Constructor"<<endl;
   		employeeId = 0;
   		employeeName = "";
   		religion = "Islam";
	   }
	   Employee(int employeeId){
	   	cout<<"Calling param constructor with Id"<<endl;
   		this->employeeId = employeeId;
   		employeeName = "";
   		religion = "Islam";
	   }   
   	void setReligion(char* religion){
	   this->religion = religion;
	   
	   
	   }
	char* getReligion(){
		return this->religion;
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
	 
};

