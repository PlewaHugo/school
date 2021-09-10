#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Worker{
	public:
//deklaracja zmiennych cz³onkowskich (pol, w³aœciwoœci)
	string name;
	string surname;
	int age;
	void showSurname(){
		cout << "Nazwisko pracownika:";
	}
	//deklaracja lub prototyp metody
	void showAllData();
};
//definicja metody showAllData
void Worker::showAllData(){
	cout << "imiê i nazwisko"<< name << "" << surname;
}
int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	Worker pracownik1;
	pracownik1.name="Krystian";
	pracownik1.surname="Nowak";
	cout << pracownik1.name;
	pracownik1.showSurname();
	pracownik1.showAllData();
	return 0;
}
