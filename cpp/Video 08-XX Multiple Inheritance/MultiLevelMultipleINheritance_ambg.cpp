#include <iostream>
#include <stdlib.h>
using namespace std;

class Vehicle{
 
public:
 
	int GetMaxLoad(){
		cout<<"Vehicle Getmaxload calling";
		return 20;
	}
};
class LandVehicle : public Vehicle{
};
class WaterVehicle : public Vehicle{
};
class AmphibiousVehicle: public  LandVehicle, 	public WaterVehicle{
	 

};
int main(){
	AmphibiousVehicle obj;
  obj.LandVehicle::GetMaxLoad();
	return 0;
}

