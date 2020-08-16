#include <iostream>

using namespace std;

double divide(double n1, double n2);

int main(){
	double n1, n2;

	cin >> n1 >> n2;
	try {
		cout << divide(n1, n2) << endl;
	}catch(const char * e){
		cout << "an error ocurred: " << e << endl;
		return 1;
	}
	return 0;
}

double divide(double n1, double n2){
	if(n2 == 0){
		throw "division by zero." ;
	}
	return n1/n2;
}
