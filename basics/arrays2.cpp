#include <iostream>

using namespace std;

/*
	Bi-dimensional arrays in c++
*/

#include <iostream>

using namespace std;

int main(){
	
	int array[3][4];

	for(int row = 0; row < 3; row++){
		for(int column = 0; column < 4; column++){
			cin >> array[row][column];
		}
	}

	// array[0][0] = 0;
	// array[0][1] = 0;
	// array[0][2] = 0;
	// array[0][3] = 0;

	// array[1][0] = 1;
	// array[1][1] = 1;
	// array[1][2] = 1;
	// array[1][3] = 1;
	
	// array[2][0] = 2;
	// array[2][1] = 2;
	// array[2][2] = 2;
	// array[2][3] = 2;

	for(int row = 0; row < 3; row++){
		for(int column = 0; column < 4; column++){
			cout << array[row][column] << " ";
		}
		cout << endl;
	}


	return 0;
}