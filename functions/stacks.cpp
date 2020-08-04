#include <iostream>
#include <stack>

using namespace std;

int main(){
	
	stack<string> cards;
	
	cards.push("Rei de Copas");
	cards.push("Rei de Espada");
	cards.push("Rei de Ouros");
	cards.push("Rei de Paus");
	
	cout << "tamanho da stack: " << cards.size() << endl;
	
	cout << "carta do topo: " << cards.top() << endl;
	
//	cards.pop();
//	cout << "tamanho da stack depois do pop(): " << cards.size() << endl;
	
	return 0;
}
