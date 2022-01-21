#include <iostream>
#include <stdlib.h>
using namespace std;

class Parcel{
	protected:
		int Id;
		string senderName;
		string senderAddress;
		string receiverName;
		string receiverAddress;
		int weight;
		int fee;
		int feePerGram;
	public:
		Parcel(){
			Id = 0;
			senderName = "";
			senderAddress = "";
			receiverName = "";
			receiverAddress = "";
			weight = 0;
			fee = 0;
			feePerGram = 0;
		}
		void setFeePerGram(int feePerGram){
			this->feePerGram = feePerGram;
		}
		int getFeePerGram(){
			return this->feePerGram ;
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
class NormalParcel : public Parcel {
	public : 
		void displayNormalReceipt(){
		int overWeightCharges = 0;
		string overWeight = "No";
		int totalOverWeight = 0;
		int totalCharges = this->fee;
		 
			if(this->weight>900 ){
				
				totalOverWeight = this->weight - 900 ;
				overWeightCharges =  totalOverWeight * this->feePerGram ;
				totalCharges =  totalCharges + (this->feePerGram* totalOverWeight );
				 
			} 
		 
		 
		cout<<"\n\nShipment Receipt"<<endl;
		cout<<"-------------------------"<<endl;
		cout<<"Receipt No. : "<<this->Id<<endl;
		cout<<"Sender Name : "<<this->senderName<<endl;
		cout<<"Sender Address : "<<this->senderAddress<<endl;
		cout<<"Receiver Name : "<<this->receiverName<<endl;
		cout<<"Receiver Address : "<<this->receiverAddress<<endl;
		cout<<"Parcel Weight : "<<this->weight<<endl;
		if(totalOverWeight>0){
			cout<<"OverWeight : "<<totalOverWeight<<"g"<<endl;
		}else{
			cout<<"OverWeight : No"<<endl;
		}
		
		cout<<"Basic Charges : "<<this->fee<<endl;
		cout<<"OverWeight Charges: "<<overWeightCharges<<endl;
		cout<<"Shipment Total Charges: "<<totalCharges<<endl;
		cout<<"Type of Shipment: Normal"<<endl;
	}
};

class UrgentParcel : public Parcel{
	private : 
		int additionalFeePerGram;
	public : 
 
	int getAdditionalFeePerGram(){
		return this->additionalFeePerGram;
		
	}
	void setAdditionalFeePerGram(int additionalFeePerGram){
		this->additionalFeePerGram = additionalFeePerGram;
	} 
	
	void displayUrgentReceipt(){
		int overWeightCharges = 0;
		 float totalCharges = 0;
		int totalOverWeight = 0;
		float basicCharges = this->fee;
			basicCharges =  (basicCharges + (basicCharges * 0.5));
			 totalCharges =  basicCharges ;
		 	if(this->weight>900 ){
		 		 
		 		totalOverWeight = this->weight - 900 ;
		 		
		 		int appliedRate =  (this->feePerGram  + this->additionalFeePerGram);
		 		overWeightCharges =  totalOverWeight * appliedRate;
	 			totalCharges =  (basicCharges + ( appliedRate * totalOverWeight ));
	 		}
	
		 
		 
		cout<<"\n\nShipment Receipt"<<endl;
		cout<<"-------------------------"<<endl;
		cout<<"Receipt No. : "<<this->Id<<endl;
		cout<<"Sender Name : "<<this->senderName<<endl;
		cout<<"Sender Address : "<<this->senderAddress<<endl;
		cout<<"Receiver Name : "<<this->receiverName<<endl;
		cout<<"Receiver Address : "<<this->receiverAddress<<endl;
		cout<<"Parcel Weight : "<<this->weight<<endl;
		if(totalOverWeight>0){
			cout<<"OverWeight : "<<totalOverWeight<<"g"<<endl;
		}else{
			cout<<"OverWeight : No"<<endl;
		}
		
		cout<<"Basic Charges : "<<basicCharges<<endl;
		cout<<"OverWeight Charges: "<<overWeightCharges<<endl;
		cout<<"Shipment Total Charges: "<<totalCharges<<endl;
		cout<<"Type of Shipment: Urgent"<<endl;
		 
	}

};
