#include <iostream>

using namespace std;

struct Car{
	string name;
	string color;
	string brand;
	string model;
	int maxVelocity;
	int velocity;
	
	void insert(string stname, string stcolor, string stbrand, string stmodel, int stmaxVelocity){
		name = stname;
		color = stcolor;
		brand = stbrand;
		model = stmodel;
		maxVelocity = stmaxVelocity;
		velocity = 0;	
	}
	
	void print(){
		cout << "Nome.............: " << name << endl;
		cout << "Cor..............: " << color << endl;
		cout << "Marca............: " << brand << endl;
		cout << "Modelo...........: " << model << endl;
		cout << "Velocidade.......: " << velocity << endl;
		cout << "Velocidade Maxima: " << maxVelocity << endl << endl;
	}
	
	void setVelocity(int velocity_){
		velocity = velocity_;
		if(velocity_ > maxVelocity){
			velocity = maxVelocity;
		}
		if(velocity_ < 0){
			velocity = 0;
		}
	}
};

int main(){
	
	Car cars[4] = {};
		
	cars[0].insert("Tornado", "Verde", "Mitsubish", "Outlander", 200);
	cars[1].insert("Tornado", "Verde", "Mitsubish", "Outlander", 200);
	cars[2].insert("Tornado", "Verde", "Mitsubish", "Outlander", 200);
	cars[3].insert("Tornado", "Verde", "Mitsubish", "Outlander", 200);
	
	for(int i = 0; i < 4; i++){
		cars[i].setVelocity(50);
		cars[i].print();
	}
	
	
	return 0;
}
