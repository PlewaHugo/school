#include <iostream>

using namespace std;
class Car{
	public:	
	unsigned int id;
	string brand;
	string model;
	void getData();
	
	Car();
	Car(unsigned int pid, string pbrand, string pmodel);
};
void Car::getData(){
	cout << "\nId: " << id << "\nMarka: " << brand << "\nModel: " << model;
	
}
Car::Car(){
	id=0;
	brand="Domyolna marka";
	model="Domyolny model";
	cout << "\nKontruktor domyœlny" << endl;
}
Car::Car(unsigned int pid, string pbrand, string pmodel){
	id=pid;
	brand=pbrand;
	model=pmodel;
	std::cout <<"\nKontruktor parametryczny";
}
int main(){
	Car car1(1,"Opel","Astra");
	car1.getData();
	Car samochod1 = Car(12, "Bugatti", "Veyron");
	samochod1.getData();
	return 0;
}
