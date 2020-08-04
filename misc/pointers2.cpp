#include<iostream>

using namespace std;

int main(){
	
	int *p;
	int array[10];
	
	p = &array[0];
	
	*p=10;
	
	cout << array[0] << endl;
	
	
	*(p+=1);
	
	cout << p << endl;
	
	return 0;
}
