/*
	Learning about variables in c++
*/

#include<iostream>


using namespace std;

int main(){
	int age = 12;

	char first_letter = 'G';

	double pi = 3.14158;

	float floating_pi = 3.14;

	bool like_computers = true;

	string name = "Gabriel";

	cout << "digite a idade: ";
	cin >> age;

	cout << "digite a a primeira letra de seu nome: ";
	cin >> first_letter;

	cout << "digite PI: ";
	cin >> pi;

	cout << "digite PI em float: ";
	cin >> floating_pi;

	cout << "digite 1 se você gosta de computadores ou 0 caso contrário: ";
	cin >> like_computers;

	cout << "digite seu nome: ";
	cin >> name;


	cout << age << endl;
	cout << first_letter << endl;
	cout << pi << endl;
	cout << floating_pi << endl;;
	cout << like_computers << endl;
	cout << name << endl;


	return 0;
}