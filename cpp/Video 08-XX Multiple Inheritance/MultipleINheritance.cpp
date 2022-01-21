#include <iostream>
#include <stdlib.h>
using namespace std;

class Receiver{
 	public:
 		Receiver(){
 			cout<<"Receiver Constructor"<<endl;
		 }
	void receive(){
		cout<<"Signal Receive"<<endl;
	} 	  
};
class Transmitter {
	public : 
		Transmitter(){
			cout<<"Transmitter constructor"<<endl;
		}
		void transmit(){
			cout<<"Signal Transmitting"<<endl;
		}
  };
class Phone : public Receiver,public Transmitter{
	public : 
		 Phone(){
		 cout<<"Phoen Constructor"<<endl; 
	}
	
};
 
int main(){
	Phone obj;
	Transmitter * tPtr = &obj;
	tPtr->transmit(); 	
	tPtr->receive(); 	//Error
 
	return 1;
}

