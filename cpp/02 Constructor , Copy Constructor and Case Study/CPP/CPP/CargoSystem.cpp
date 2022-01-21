#include <iostream>
#include "Parcel.cpp" 
using namespace std;

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
	int receiptnum ;
	int   weight, charges;
	string sname, saddress, rname, raddress; 
	
	cout<<"Enter receipt no.: ";
	cin>>receiptnum;
	cin.ignore();
	
	cout<<"Enter sender name: ";
	getline(cin, sname);
	
	cout<<"Enter sender address: ";
	getline(cin, saddress);
	
	cout<<"Enter receiver name: ";
	getline(cin, rname);
	
	cout<<"Enter receiver address: ";
	getline(cin, raddress);
	
	cout<<"Enter weight(in grams)) of parcel: ";
	cin>>weight;
	
	cout<<"Enter shipment charges: ";
	cin>>charges; 
	
	Parcel p;
	p.setId(receiptnum);
	p.setSenderName(sname);
	p.setSenderAddress(saddress);
	p.setReceiverName(rname);
	p.setReceiverAddress(raddress);
	p.setWeight(weight);
	p.setFee(charges);
	 
	displayReceipt(p);
	
	system("pause");
}

