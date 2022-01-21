#include <iostream>
#include <stdlib.h>
using namespace std;

 
class LandVehicle  {
	public :
		int GetMaxLoad(){
		cout<<"Land Getmaxload calling";
		return 50;
	}

};
class WaterVehicle {
public :
		int GetMaxLoad(){
		cout<<"Water Getmaxload calling";
		return 150;
	}

};
class AmphibiousVehicle: public  LandVehicle, 	public WaterVehicle{
 	  

};
int main(){
	AmphibiousVehicle obj;
//  	obj.GetMaxLoad();
  	obj.LandVehicle::GetMaxLoad();
	obj.WaterVehicle::GetMaxLoad();

	return 0;
}

