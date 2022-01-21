#include <iostream>
#include <stdlib.h>
using namespace std;

class Vehicle{
	protected:
			int weight;
		
public:
	int getWeight(){
		return weight;
	}
	void setWeight(int weight){
		this->weight = weight;
	}
	int GetMaxLoad(){
		cout<<"Getmaxload calling";
		return 50;
	}
};
class LandVehicle : public virtual Vehicle{
};
class WaterVehicle : public virtual Vehicle{
};
class AmphibiousVehicle: public  LandVehicle, 	public WaterVehicle{
	public :
	 AmphibiousVehicle(){
 
 weight = 20;
	}

};
int main(){
	AmphibiousVehicle obj;
 cout<<"Weight is "<<obj.WaterVehicle::getWeight()<<endl;
 cout<<"Weight is "<<obj.LandVehicle::getWeight();
 
	return 0;
}

