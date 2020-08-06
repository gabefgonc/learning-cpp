#ifndef HEADERS_AND_CONSTRUCTORS_H_INCLUDED
#define HEADERS_AND_CONSTRUCTORS_H_INCLUDED
#define TYPE_JET 1
#define TYPE_MONOMOTOR 2
#define TYPE_GLIDER 3

class Plane{
	public:
		int velocity = 0;
		int maxVelocity;
		std::string type;
		Plane(int tp);
		void print();
	private:

};

Plane::Plane(int tp){
	if(tp==1){
		type = "Jato";
		maxVelocity = 800;
	}else if(tp==2){
		type = "Monomotor";
		maxVelocity = 350;
	}else if(tp == 3){
		type = "Planador";
		maxVelocity = 180;
	}
}

void Plane::print(){
	std::cout << "Type........: " << type << std::endl;
	std::cout << "Velocity....: " << velocity << std::endl;
	std::cout << "Max Velocity: " << maxVelocity << std::endl;
	std::cout << "-----------------" << std::endl;

}

#endif