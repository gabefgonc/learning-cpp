/*
	Learning about math and variables scope in c++
*/

#include <iostream>

using namespace std;

int n1, n2; // global vars

int main(){
	
	int n3, n4; // Local vars
	int result;

	n1 = 12;
	n2 = 3;
	n3 = 4;
	n4 = 2;

	result = n1+n2+n3+n4;
	cout << result << endl;

	result = n1/n2/n3/n4;
	cout << result << endl;
	
	result = n1-n2-n3-n4;
	cout << result << endl;

	result = n1*n2*n3*n4;
	cout << result << endl;

	result = n1%n2%n3%n4;
	cout << result << endl;

	return 0;
}