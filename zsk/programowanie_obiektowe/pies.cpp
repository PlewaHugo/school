#include <iostream>

using namespace std;

class Dog {
    public:
        string name;
        string breed;

        string color;
        string eyeColor;

        float height;
        float length;
        float weight;

        void sit();
        void layDown();
        void shake();
        void come();
        Dog(string name,float weight, string breed);
    	Dog(string name,float length, float weight);
};
Dog::Dog(string name,float weight, string breed){
	Dog::name=name;
	Dog::weight=weight;
	Dog::breed=breed;
}
Dog::Dog(string name,float length, float weight){
	Dog::name=name;
	Dog::length=length;
	Dog::weight=weight;
	
}
void Dog::sit() {
    cout << "Pies siada\n";
}

void Dog::layDown() {
    cout << "Pies le¿y\n";
}

void Dog::shake() {
    cout << "Pies merda ogonem\n";
}

void Dog::come() {
    cout << "Pies podchodzi\n";
}



int main() {
    setlocale(LC_CTYPE, "polish");

    Dog dog1 ("Dupeæ",2.3,2.4);
	Dog pupec ("Pupeæ",2.2,"Sfinx");
    dog1.sit();
    dog1.layDown();
    dog1.shake();
    dog1.come();

    return 0;
}
