#include <iostream>
 
#include <stdlib.h>

using namespace std;
class Processor
{
    private: 
    double clockSpeed;
    
    public:
    Processor(){
    	clockSpeed =2.5;
    	}	
    	
    Processor(double cs){
    	       clockSpeed=cs;
        }
        
   double getClockSpeed(){
   		return clockSpeed;
   }
   
   void setClockSpeed(double cs){
   		clockSpeed=cs;
   }
	
};

class Computer
{

	protected:
     Processor *processor;
	string operatingSystem;
	public:
     
	void setOperatingSystem(string operatingSystem){
		this->operatingSystem = operatingSystem;
	}
	string getOperatingSystem(){
		return this->operatingSystem;
	}
	Computer(){
                 
		 
	}
	~Computer(){
     	delete this->processor;            
		 
	}
	Processor* getProcessor()
	{
		
			return this->processor;
		
	}
	
	void setProcessor(Processor *processor)
	{
			this->processor = new Processor;
			this->processor->setClockSpeed(processor->getClockSpeed()) ;	
			this->processor->setClockSpeed(5.0);
			 
	}
	
    void print(){
	  cout<<"Operating System"<<operatingSystem;
      cout<<"Clock Speed "<<processor->getClockSpeed();
	}	
};

 



	
int main(){
     	 Processor processor(3.6);
		{

         Computer pc1;
         pc1.setProcessor(&processor);
         pc1.print();
	}

     cout<<"Clock Speed "<<processor.getClockSpeed()<<endl;
         return 0;
     }	
	



