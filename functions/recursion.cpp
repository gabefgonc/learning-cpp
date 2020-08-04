#include <iostream>

using namespace std;

void factorial(int num, int count=0, int result=1);

int main(){
	
	factorial(6);
	
	return 0;
}

void factorial(int num, int count, int result){
	count++;	
	result *= count;
	cout << result << endl;
	if(count < num){
		factorial(num, count, result);
	}
}


