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
	Complex Add(const Complex & c1){
		Complex t;
	t.real = real + c1.real;
	t.img  = img  + c1.img;
	return t;

	}
	Complex operator +(const Complex & c1){
		Complex t;
	t.real = real + c1.real;
	t.img  = img  + c1.img;
	return t;

	}
 
		void print(){
		cout<<"Real  : "<<this->real<<" Imaginary : "<<this->img<<endl;
	}
 
}; 

int main(){
	Complex c1 (5.6,2.0);
	Complex c2 (5.6,2.0);
	Complex c3 = c1 + c2;
	c3.print();
	Complex c4 = c3-c1;
	c4.print();
 
	return 1;
}

