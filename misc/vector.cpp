#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> num1;
	vector<int> num2;
	int size1, size2;
	
	num1.push_back(1);
	num1.push_back(2);
	num1.push_back(3);
	num1.push_back(4);
	
	num2.push_back(5);
	num2.push_back(6);
	num2.push_back(7);
	num2.push_back(8);

//	num1.swap(num2);
	
	size1 = num1.size();
	size2 = num2.size();
	
	cout << "Primeiro valor de num1: " << num1.front() << endl << endl;
	cout << "Valor do meio.........: " << num1.at(size1 / 2) << endl << endl;
	cout << "Ultimo valor de num1..: " << num1.back() << endl << endl; 
	
	cout << "Tamanho do num1.......: " << size1 << endl;
	
	for (int i = 0; i < size1; i++){
		cout << num1[i] << endl;
	}
	cout << endl;
	
	for (int i = 0; i < size2; i++){
		cout << num2[i] << endl;
	}
	cout << endl;
	
	return 0;
}
