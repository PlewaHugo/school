#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Rectangle{
	public:
	float sidea;
	float sideb;
	
	void showArea();
	void showcircuit();

};
void Rectangle::showArea(){
	cout<<"Pole prostok�ta: "<<sidea*sideb<<endl;
}
void Rectangle::showcircuit(){
	cout<<"Obw�d prostok�ta: "<<2*sidea+2*sideb<<endl;
}
int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	Rectangle rectangle1;
	cout <<"Podaj d�ugo�� pierwszego boku: ";
	cin >> rectangle1.sidea;
	cout <<endl<<"Podaj d�ugo�� drugiego boku: ";
	cin >> rectangle1.sideb;
	rectangle1.showArea();
	rectangle1.showcircuit();
	return 0;
}
