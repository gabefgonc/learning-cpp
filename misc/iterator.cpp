#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector<string> products = {"mouse", "keyboard", "monitor", "headphone", "mousepad"};

	for(vector<string>::iterator it = products.begin(); it != products.end(); it++){
		cout << *it << endl;
	}



	return 0;
}
