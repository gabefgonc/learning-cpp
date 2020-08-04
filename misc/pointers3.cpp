#include <iostream>

using namespace std;

void sum(float *var, float value);

void initArray(float *a, int aSize);

void printArray(float *a, int aSize);

int main(){

	float num = 0;
	
	float array[5];
	
	initArray(array, 5);
	
	printArray(array, 5);
	
	sum(&num, 50.0);
	
	cout << num << endl;
	
	return 0;
}

void sum(float *var, float value){
	*var += value;
	
}

void initArray(float *a, int aSize){
	for(int i = 0; i < aSize; i++){
		a[i] = 0;
	}
}

void printArray(float *a, int aSize){
	for (int i = 0; i < aSize; i++){
		cout << a[i] << endl;
	}
}
