#include <iostream>
#include <stdlib.h>

using namespace std;

class Employee{
    protected:
      int employeeId;
      string employeeName;
      float salary;
      char employeeType;
   public :
   		void setEmployeeType(char type){
   			employeeType = type;
		   }
		   char getEmployeeType(){
		   	return this->employeeType;
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
	 float setSalary(float salary){
	 	this->salary = salary;
	 }
	 float getSalary(){
	 	return this->salary;
	 }
	 string getEmployeeName(){
	 	return this->employeeName;
	 }
	 float calculateSalary(){
	 	cout<<"Calculating Base Employe Class Salary...."<<endl;
		return salary;
	}	 
};
class SalariedEmployee : public Employee{
	private:
		float houseRent;
		
	public:
		void setHouseRent(float houseRent){
			this->houseRent = houseRent;
		}
		float getHouseRent(){
			return this->houseRent;
		}
	 float calculateSalary(){
	 cout<<"Calculating Salaried Employe Salary...."<<endl;
		return (salary+houseRent);
	}	 
};
class ContractualEmployee : public Employee{  
	private:
	 int contractDuration;
	 public :
	 
	 float calculateSalary(){
	 cout<<"Calculating Contractual Employe Salary...."<<endl;
		return salary;
	}	 
	 void setContractDuration(int contractDuration){
	 	this->contractDuration = contractDuration;
	 }
	 int getContractDuration(){
	 	
	 	return this->contractDuration;
	 }
};
class HourlyEmployee : public Employee{  
    protected:
      float hourlyRate;
      float hourWorked;
      
   public :
   	 void setHourWorked(float hourWorked){
   	 	this->hourWorked = hourWorked;
		}
		float getHourWorked(){
			return this->hourWorked;
		}
  
	  void setHourlyRate(float hourlyRate){
	  	this->hourlyRate = hourlyRate;
	  }  
	  float getHourlyRate(){
	  	return this->hourlyRate;
	  }
	  
	 float calculateSalary(){
	 	cout<<"Calculating Hourly Employe Salary...."<<endl;
	 salary = hourlyRate * hourWorked;
	return salary;
	}	 
     	 
};
 /*void printSalaries(Employee* _emp[], int size) {
	for (int i = 0; i < size; i++) {
		cout<<"---------------------------------------"<<endl;
		cout<<"Employee Id :"<<_emp[i]->getEmployeeId()<<endl;
		cout<<"Employee Name :"<<_emp[i]->getEmployeeName()<<endl;
		float salary = _emp[i]->calculateSalary();	
		cout<<"Employee Salary :"<<salary<<endl;
		cout<<"---------------------------------------"<<endl;
	}
}
*/
void printSalaries(Employee* _emp[], int size) {
	for (int i = 0; i < size; i++) {
		cout<<"---------------------------------------"<<endl;
		cout<<"Employee Type is  : "<<_emp[i]->getEmployeeType()<<endl;
		cout<<"Employee Id :"<<_emp[i]->getEmployeeId()<<endl;
		cout<<"Employee Name :"<<_emp[i]->getEmployeeName()<<endl;
		float salary = 0.0;
		 
		if(_emp[i]->getEmployeeType()=='C'){
 			 salary = static_cast<ContractualEmployee*>(_emp[i])->calculateSalary();
		}else if(_emp[i]->getEmployeeType()=='S'){
			 salary = static_cast<SalariedEmployee*>(_emp[i])->calculateSalary();
		}else if(_emp[i]->getEmployeeType()=='H'){
			 salary = static_cast<HourlyEmployee*>(_emp[i])->calculateSalary();
		}
		 
		cout<<"Employee Salary :"<<salary<<endl;
		cout<<"---------------------------------------"<<endl;
	}
}

int main(){
		Employee* _emp[ 3 ];
		SalariedEmployee *e1 = new SalariedEmployee;
		e1->setEmployeeId(1);
		e1->setEmployeeName("Sohail");
		e1->setHouseRent(500.0);
		e1->setSalary(1000.0);		 
		e1->setEmployeeType('S');
		_emp[0] = e1;
		 ContractualEmployee *e2 = new ContractualEmployee;
		e2->setEmployeeId(2);
		e2->setEmployeeName("Ali");
 		e2->setContractDuration(3);
 		e2->setEmployeeType('C');
 		e2->setSalary(5400.00);
		 _emp[1] = e2;
		 HourlyEmployee *e3 = new HourlyEmployee;
 		e3->setEmployeeId(3);
		e3->setEmployeeName("Aslam");
		e3->setHourlyRate(200);
	 	e3->setHourWorked(40);
	 	e3->setEmployeeType('H');
	 	_emp[2] = e3;
	 	 
	 	printSalaries(_emp,3);
	return 1;
}

