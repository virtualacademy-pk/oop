#include <iostream>
#include <stdlib.h>

using namespace std;

class Student{
   const int rollNo;
public:
	Student(int aRollNo):rollNo(aRollNo)
	{
//		rollNo = aRollNo;
		/*error: cannot modify a constant data member*/
	}
	Student():rollNo(0)
	{
		 
	}

	int getRollNo(){
		return rollNo;
	}
	void setRollNo(int rNo)const{
	//	rollNo = rNo;
	/*error: cannot modify a constant data member*/

	}
 
};
int main(){
Student s(13) ;
cout<<s.getRollNo();
return 1;
}

