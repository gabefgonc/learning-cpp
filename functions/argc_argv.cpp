/*
	Learning main function arguments in c++
*/


#include <iostream>
#include <string.h>


using namespace std;

int main(int argc, char *argv[]){
	if(argc > 1){
		if(!strcmp(argv[1], "sol")){
			cout << "vou ao clube" << endl;	
		}else if(!strcmp(argv[1], "nublado")){
			cout << "vou ao cinema" << endl;	
		}else {
			cout << "vou ficar em casa." << endl;
		}
	}	
}
