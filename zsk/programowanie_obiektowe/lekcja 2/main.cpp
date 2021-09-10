#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Worker{
	public:
//deklaracja zmiennych cz3onkowskich (pol, w3aociwooci)
	string name;
	string surname;
	unsigned short int birthday;
	string narodowosc;
	float height;
	char gender;
	void showName();
	void showSurname();
	void showNameSurname();
	void showPersonality();
	
	//deklaracja lub prototyp metody
	//void showAllData();
};
	void Worker::showName(){
		cout << "Imiê pracownika:"<<name<<endl;
	}
	void Worker::showSurname(){
		cout << "Nazwisko pracownika:"<<surname<<endl;
	}
	void Worker::showNameSurname(){
		cout<< "Imiê i nazwisko:"<<name<<" i "<<surname<<endl;
	}
	void Worker::showPersonality(){
		cout<< "Rok urodzenia:"<<birthday<<endl<<"narodowoœc:"<<narodowosc<<endl<<"wzrost:"<<height<<endl<<"p³eæ:";
		switch(gender){
			case 'm':
				cout<< "mê¿czyzna";
				break;
			case  'w':
				cout<<"kobieta";
				break;
		}
	}
//definicja metody showAllData
//void Worker::showAllData(){
//	cout << "imie i nazwisko"<< name << "" << surname;
//}
int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	Worker pracownik1;
	pracownik1.name="Krystian";
	pracownik1.surname="Nowak";
	pracownik1.birthday=2005;
	pracownik1.narodowosc="Polska";
	pracownik1.height=182;
	pracownik1.gender='m';
	
	pracownik1.showName();
	pracownik1.showSurname();
	pracownik1.showNameSurname();
	pracownik1.showPersonality();
	
	
	
	
	
	return 0;
}
