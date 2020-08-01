/*
	Studying Arrays in c++
*/

#include <iostream>

using namespace std;

int main(){

	int array[5] = {10, 20, 30, 40, 50};


	for(int i = 0; i < sizeof(array) / sizeof(int); i++){
		cout << array[i] << endl;
	}

	return 0;
}