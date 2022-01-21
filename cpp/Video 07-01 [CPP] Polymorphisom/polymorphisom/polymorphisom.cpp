#include <iostream>
#include <stdlib.h>
using namespace std;
class Employee { 
  protected: 
    string name; 
    double taxRate; 
  public: 
    Employee( string n, double tr ): name(n){ 
 		taxRate = tr; 
	} 
     
    string getName() { 
  		return name; 
	}
	void setName(string name) { 
  		this->name = name; 
	}	 	 
    virtual double calcSalary() = 0; 
}; 
 
 class SalariedEmp : public Employee { 
	private: 
    	double salary; 
	public: 
    	SalariedEmp(string  n, double tr, double sal) : Employee( n, tr ) { 
  			salary = sal; 
		} 
        double calcSalary() { 
		  double tax = salary * taxRate; 
		  return salary - tax; 
		} 
}; 
class HourlyEmp : public Employee { 
	private: 
	  int hours; 
	  double hourlyRate; 
	public:   
		 
		HourlyEmp( string n, double tr, int h, double hr ) : Employee( n, tr ) { 
		  hours = h; 
		  hourlyRate = hr; 
		}    
	double calcSalary() { 
	  double grossPay, tax; 
	  grossPay = hours * hourlyRate; 
	  tax = grossPay * taxRate; 
	  return grossPay - tax; 
	}
}; 
	
class CommEmp : public Employee 
{ 
	private: 
	  double sales; 
	  double commRate; 
	public: 
	   
	  CommEmp( string n, double tr, double s, double cr ) : Employee( n, tr ) { 
  		sales = s; 
  		commRate = cr; 	
		}	 
		double calcSalary() { 
  			double grossPay = sales * commRate; 
  			double tax = grossPay * taxRate; 
  			return grossPay - tax; 
		} 

};
void generatePayroll(Employee* emp[], int size) { 
   
  cout << "Name\tNet Salary\n\n"; 
  for (int i = 0; i < size; i++) { 
  cout << emp[i]->getName() << '\t' << emp[i]->calcSalary() << endl; 
 
  } 
}  
int main() { 
  Employee* emp[10]; 
  emp[0] = new SalariedEmp( "Aamir", 0.05, 15000 ); 
  emp[1] = new HourlyEmp( "Faakhir", 0.06, 160, 50 ); 
  emp[2] = new CommEmp( "Fuaad", 0.04, 150000, 10 ); 
   
  generatePayroll( emp, 3 ); 
  return 0; 
} 
 

 
 
 
 

 
