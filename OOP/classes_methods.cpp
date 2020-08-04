#include <iostream>

using namespace std;

class Plane{
	public:
		int velocity = 0;
		int maxVelocity;
		string type;
		void init(int tp);

	private:

};

void Plane::init(int tp){
	if(tp==1){
		this->maxVelocity = 800;
		this->type = "Jato";
	}else if(tp==2){
		this->maxVelocity = 350;
		this->type = "Monomotor";
	}else if(tp==3){
		this->maxVelocity = 180;
		this->type = "Planador";
	}
}

int main(){

	Plane *plane1 = new Plane();

	plane1->init(1);

	cout << plane1->maxVelocity << endl;

	return 0;

}