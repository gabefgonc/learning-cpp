#ifndef MULTIPLE_INHERITANCE_H_INCLUDED
#define MULTIPLE_INHERITANCE_H_INCLUDED

class Base1{
public:
	void printBase1();
};

void Base1::printBase1(){
	std::cout << "Impressao da classe Base1" << std::endl;
}

class Base2{
public:
	void printBase2();
};

void Base2::printBase2(){
	std::cout << "Impressao da classe Base2" << std::endl;
}

class MultipleInheritance : public Base1, public Base2{


};

#endif