#include <iostream>
#include "inheritance.hpp"

using namespace std;

int main(){

	Motorcycle *bike = new Motorcycle();
	Car *car = new Car();
	Tank *tank = new Tank();

	car->print();
	cout << endl;
	cout << "---------------------" << endl;
	cout << endl;
	bike->print();
	cout << endl;
	cout << "---------------------" << endl;
	cout << endl;
	tank->print();



	return 0;
}