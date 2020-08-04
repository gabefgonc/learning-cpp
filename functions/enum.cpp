#include <iostream>

using namespace std;

int main()
{
	enum utensil{spoon, fork, knife, pan};
	utensil selectedUtensil;
	
	selectedUtensil = pan;
	
	cout << selectedUtensil << endl;
		
	return 0;		
}