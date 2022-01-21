#include <iostream>
 
#include <stdlib.h>

using namespace std;

 class Complex{
private:
	double real, img;
public:
	void setReal(double real){
		this->real = real;
	}
	double getReal(){
		return this->real;
	}
	void setImg(double img){
		this->img = img;
	}
	double getImg(){
		return this->img;
	}
	Complex(){
	}
	Complex(double real,double img){
		this->real = real;
		this->img = img;
	}
 	Complex operator -=(const Complex & c1){
		 
	 real = real - c1.real;
	img  = img  - c1.img;
	return *this;

	}
 
		void print(){
		cout<<"Real  : "<<this->real<<" Imaginary : "<<this->img<<endl;
	}
 
}; 

int main(){
	Complex c1 (5.0,2.0);
	Complex c2 (13.0,2.0);
	c2 -= c1 ;
	c2.print();
	 
 
	return 1;
}

