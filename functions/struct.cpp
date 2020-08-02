#include <iostream>

using namespace std;

struct Car{
	string name,
	string color,
	string brand,
	string model,
	int maxVelocity,
};

int main(){
	
	Car car;
	
	car.name = "AutoLoopy";
	
	car.color = "Verde";
	
	car.brand = "Mitsubish";
	
	car.model = "Outlander";
	
	car.maxVelocity = 200;
	
	return 0;
}
