/*
	Learning about constants and multiple variables in one line in c++
*/

#include <iostream>

using namespace std;

#define pi 3.14159

#define printSomething cout << "something" << endl;

int main(){
	int lifes = 3, bullets = 100, health = 200;
	cout << pi << endl;
	printSomething;
}