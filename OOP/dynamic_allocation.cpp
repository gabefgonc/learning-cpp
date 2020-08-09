#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

int main(){
	char *name;

	name = (char *) malloc(sizeof(char)+1);

	scanf("%[^\n]s", name);

	cout << name;

	return 0;
}