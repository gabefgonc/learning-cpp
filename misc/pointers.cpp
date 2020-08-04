#include <iostream>

using namespace std;

int main(){
	
	string vehicle = "Carro";
	string *vehicle_pointer;
	
	vehicle_pointer = &vehicle;
	
	
	cout << "Valor...............: " << vehicle << endl;
	cout << "Endereco do ponteiro: " << vehicle_pointer << endl;
	
	*vehicle_pointer = "Moto";
	
	cout << "Valor...............: " << vehicle << endl;
	cout << "Endereco do ponteiro: " << vehicle_pointer << endl;
	
	return 0;
}
