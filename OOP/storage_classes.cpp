#include<iostream>

using namespace std;

auto sum(double n1, double n2)->int{
	return n1 + n2;
}

void counter(){
	static auto i{0};
	i++;
	cout << i << endl;
}

int main(){

	auto n1 = 10.5;
	auto n2 = 5.9;

	cout << sum(n1, n2) << endl;

	counter();
	counter();
	counter();
	counter();

	return 0;
}
