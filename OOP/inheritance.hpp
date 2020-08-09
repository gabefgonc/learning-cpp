#ifndef INHERITANCE_H_INCLUDED
#define INHERITANCE_H_INCLUDED
#define VEHICLE_TYPE_MOTORCYCLE 1
#define VEHICLE_TYPE_CAR 2
#define VEHICLE_TYPE_TANK 3


class Vehicle{
public:
	int velocity;
	bool shield;
	int wheels;
	void setType(int tp);
	void setMaxVelocity(int maxVelocity_);
	void setArmament(bool has_armament);
	int getType();
	int getMaxVelocity();
	bool hasArmament();
	void print();
private:
	int type;
	int maxVelocity;
	bool armament;
};

void Vehicle::print(){
	std::cout << "Tipo do Veiculo.............: " << getType() << std::endl;
	std::cout << "Veiculo tem armamento.......? " << hasArmament() << std::endl;
	std::cout << "Numero de rodas do Veiculo..: " << wheels << std::endl;
	std::cout << "Velocidade do Veiculo.......: " << velocity << std::endl;
	std::cout << "Velocidade maxima do Veiculo: " << getMaxVelocity() << std::endl;
	std::cout << "Veiculo eh blindado.........? " << shield << std::endl;

}

void Vehicle::setType(int tp){
	type = tp;
}

void Vehicle::setMaxVelocity(int maxVelocity_){
	maxVelocity = maxVelocity_;
}

void Vehicle::setArmament(bool has_armament){
	armament = has_armament;
}

int Vehicle::getType(){
	return type;
}

int Vehicle::getMaxVelocity(){
	return maxVelocity;
}

bool Vehicle::hasArmament(){
	return armament;
}

class Motorcycle : public Vehicle{
public:
	Motorcycle();
};

Motorcycle::Motorcycle(){
	velocity = 0;
	shield = false;
	wheels = 2;
	setType(VEHICLE_TYPE_MOTORCYCLE);
	setArmament(false);
	setMaxVelocity(230);
}


class Car : public Vehicle{
public:
	Car();
};

Car::Car(){
	velocity = 0;
	shield = false;
	wheels = 4;
	setType(VEHICLE_TYPE_CAR);
	setArmament(false);
	setMaxVelocity(200);
}

class Tank : public Vehicle{
public:
	Tank();
};

Tank::Tank(){
	velocity = 0;
	shield = true;
	wheels = 4;
	setType(VEHICLE_TYPE_TANK);
	setArmament(true);
	setMaxVelocity(100);
}

#endif