#include <iostream>
#include "headers_and_constructors.hpp"

using namespace std;

int main(){

	Plane *plane1 = new Plane(TYPE_GLIDER);
	Plane *plane2 = new Plane(TYPE_JET);
	Plane *plane3 = new Plane(TYPE_MONOMOTOR);

	plane1->print();
	plane2->print();
	plane3->print();

	return 0;
}