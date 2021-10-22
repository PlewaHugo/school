#include <iostream>

using namespace std;
class Car{
public:	
	unsigned int id;
	string brand;
	string model;
	void getData();
	Car(unsigned int pid, string pbrand, string pmodel);
};
void Car::getData(){
	cout << "\nId: " << id << "\nMarka: " << brand << "\nModel: " << model;
	
}
Car::Car(unsigned int pid, string pbrand, string pmodel){
	id=pid;
	brand=pbrand;
	model=pmodel;
	cout <<"\nKontruktor parametryczny";
}
int main(){
	Car mercedess(13,"BMW","X6");
	mercedess.getData();
	return 0;
}
