#include <iostream>
#include <stdlib.h>

using namespace std;


class Student{
 	const int rollNo;
public:
	Student(int rollNo):rollNo(rollNo){
		 
	}
	int getRollNo(){
		return this->rollNo;
	}
	 
	 
};

int main(){
	Student st(5);
	cout<<st.getRollNo();
}
