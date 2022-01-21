#include <iostream>
 
#include <stdlib.h>

using namespace std;
class ArithmaticAndLogiUnit
{
 	 public:
 	void printUnitName(){
 		cout<<"ArithmaticAndLogicUnit";
	 }
};

class ControllUnit
{
	public:
 void printUnitName(){
 		cout<<" Controll Unit";
	 }
};

class MemoryUnit
{
	public:
 string printUnitName(){
 		cout<<"Memory Unit";
	 }
};
class Processor
{
    private: 
    double clockSpeed;
    ArithmaticAndLogiUnit *alu;
    ControllUnit *controllUnit;
    MemoryUnit *memoryUnit;
    public:
    ~Processor(){
    	 cout<<"Destroying Processor";
    	delete alu;
    	delete controllUnit;
    	delete memoryUnit ;
    	}	
	Processor(){
    	clockSpeed =2.5;
    	alu = new ArithmaticAndLogiUnit;
    	       controllUnit = new ControllUnit;
    	       memoryUnit = new MemoryUnit;
    	}	
    	
    Processor(double cs){
    	       clockSpeed=cs;
    	       alu = new ArithmaticAndLogiUnit;
    	       controllUnit = new ControllUnit;
    	       memoryUnit = new MemoryUnit;
        }
        
   double getClockSpeed(){
   		return clockSpeed;
   }
   
   void setClockSpeed(double cs){
   		clockSpeed=cs;
   }
	void printSpec(){
 		cout<<"ArithmaticAndLogicUnit";
	 }
};
int main(){
     	 Processor processor(3.6);
		processor.printSpec();
           return 0;
     }	
	

 
