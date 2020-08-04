/*
	Learning functions in c++
*/

#include <iostream>

using namespace std;

void print();
int sum(int num1, int num2);
void printArray(string array[]);

int main (){
	print();
	int result = sum(6, 6);
	cout << result << endl;
	string transportation_methods[4] = {"carro", "moto", "barco", "aviao"};
	printArray(transportation_methods);
	return 0;
}

void print(){
	cout << "Learning functions in c++" << endl;
}

int sum(int num1, int num2){
	return num1 + num2;
}

void printArray(string array[]){
	for(int i = 0; i < sizeof(array); i++){
		cout << array[i] << " ";	
	}
	cout << endl;
}
