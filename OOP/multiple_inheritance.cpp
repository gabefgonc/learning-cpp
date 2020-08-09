#include <iostream>
#include "multiple_inheritance.hpp"

using namespace std;

int main(){

	MultipleInheritance *mi = new MultipleInheritance();

	mi->printBase1();
	mi->printBase2();


	return 0;
}