#include <iostream>
#include <stdlib.h>
using namespace std;

class Parcel{
	private:
		int Id;
		string senderName;
		string senderAddress;
		string receiverName;
		string receiverAddress;
		int weight;
		int fee;
	public:
		 
		Parcel(){
			senderName = "";
			senderAddress = "";
			receiverName = "";
			receiverAddress = "";
			weight = 0;
			fee = 0;
		}
		  
		void setId(int id){
			Id = id;
		}
		int getId(){
			return Id;
		}
		
		void setSenderName(string sname){
			senderName = sname;
		}
		string getSenderName(){
			return senderName;
		}
		
		void setSenderAddress(string saddress){
			senderAddress = saddress;
		}
		string getSenderAddress(){
			return senderAddress;
		}
		
		void setReceiverName(string rname){
			receiverName = rname;
		}
		string getReceiverName(){
			return receiverName;
		}
		
		void setReceiverAddress(string raddress){
			receiverAddress = raddress;
		}
		string getReceiverAddress(){
			return receiverAddress;
		}
		
		void setWeight(int w){
			weight = w;
		}
		int getWeight(){
			return weight;
		}
		
		void setFee(int f){
			fee = f;
		}
		int getFee(){
			return fee;
		}
		
};

