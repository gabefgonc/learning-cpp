/*
	Studying conditional statements in C++
*/

#include <iostream>

using namespace std;

int main(){
	float first_note, second_note, third_note;
	cout << "digite sua nota do primeiro trimestre: ";
	cin >> first_note;

	cout << "digite sua nota do segundo trimestre: ";
	cin >> second_note;

	cout << "digite sua nota do terceiro trimestre: ";
	cin >> third_note;

	if((first_note + second_note * 2 + third_note * 3) / (1 + 2 + 3) >= 6.0){
		cout << "Nem acredito. Você.... Passou de ano!" << endl;
	}else{
		cout << "Seu vagabundo" << endl;
	}


}