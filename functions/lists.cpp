#include<iostream>
#include <list>

using namespace std;

int main(){
	list<int> count;
	
	int size = 10;
	list<int>::iterator it;
	count.push_front(5);
	count.push_front(6);
	count.push_front(3);
	count.push_front(2);
	count.push_front(7);
	count.push_front(9);
	count.push_front(8);
	
//	it=count.begin();
//	advance(it, 5);
//	
//	count.insert(it, 0);
	
//	size = count.size();
//	cout << size << endl;
	count.sort();
	for(int i = 0; i < size; i++){
		cout << count.front() << endl;;
		count.pop_front();
	}
	
}
