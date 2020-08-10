#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ofstream file;

	file.open("somefile.txt");

	file << "Lorem ipsum dolor sit amet" << endl;	
		
	file.close();

	return 0;
}
