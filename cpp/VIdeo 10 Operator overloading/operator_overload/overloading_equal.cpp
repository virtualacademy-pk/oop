#include <iostream>
#include <stdlib.h>
using namespace std;

class Parcel{
	private:
		int *Id;
		string senderName;
		string senderAddress;
		string receiverName;
		string receiverAddress;
		int weight;
		int fee;
	public:
		 
		Parcel(){
			int id = 0;
			Id = &id;
			senderName = "";
			senderAddress = "";
			receiverName = "";
			receiverAddress = "";
			weight = 0;
			fee = 0;
		}
		~Parcel( ){
			cout<<"Calling destructor------------------ "<<*Id<<endl;
			delete Id;
		}
		Parcel& operator =( const Parcel &obj){ 
		 cout<<"Calling = operator "<<endl;
		  
			Id = new int;
			*Id = *obj.Id;
			senderName = obj.senderName;
			senderAddress = obj.senderAddress;
			receiverName = obj.receiverName;
			receiverAddress = obj.receiverAddress;
			weight = obj.weight;
			fee = obj.fee;
			return *this;
	}
		void setId(int id){
			*Id = id;
		}
		int getId(){
			return *Id;
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
void displayReceipt(Parcel p){
	cout<<"\n\nShipment Receipt"<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"Receipt No. : "<<p.getId()<<endl;
	cout<<"Sender Name : "<<p.getSenderName()<<endl;
	cout<<"Sender Address : "<<p.getSenderAddress()<<endl;
	cout<<"Receiver Name : "<<p.getReceiverName()<<endl;
	cout<<"Receiver Address : "<<p.getReceiverAddress()<<endl;
	cout<<"Parcel Weight : "<<p.getWeight()<<" grams"<<endl;
	cout<<"Parcel Shiping Charges : "<<p.getFee()<<endl;
}

main() {
	int receiptnum = 15 ;
	int   weight=800, charges=300;
	string sname="Ali", saddress="LHR", rname="Aamir", raddress="KHI"; 
 	
	Parcel p;
	p.setId(receiptnum);
	p.setSenderName(sname);
	p.setSenderAddress(saddress);
	p.setReceiverName(rname);
	p.setReceiverAddress(raddress);
	p.setWeight(weight);
	p.setFee(charges);
	Parcel p2=p;
	p2 = p;
	 p2.setId(45);
	 p2.setWeight(78);
	 p2.setFee(15);
	 displayReceipt(p2);	
	displayReceipt(p);
	system("pause");
}

