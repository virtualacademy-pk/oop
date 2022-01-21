#include <iostream>
#include "Parcel.cpp" 
using namespace std;


main() {
	
	int receiptnum, weight, charges;
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
	cout<<"\n\nShipment Receipt"<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"Receipt No. : "<<receiptnum<<endl;
	cout<<"Sender Name : "<<sname<<endl;
	cout<<"Sender Address : "<<saddress<<endl;
	cout<<"Receiver Name : "<<rname<<endl;
	cout<<"Receiver Address : "<<raddress<<endl;
	cout<<"Parcel Weight : "<<weight<<" grams"<<endl;
	cout<<"Parcel Shiping Charges : "<<charges<<endl;
	  
	system("pause");
}

