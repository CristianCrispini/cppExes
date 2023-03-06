#include "Cat.h"
#include <iostream>

using namespace std;

Cat::Cat(string name){
    Cat::name = name;
    Cat::color = "red";
    Cat::happy = true;
}
Cat::~Cat(){}

void Cat::speak(){
    cout << Cat::name << " says: ";
    Cat::happy ? cout << "Meow !!!" << endl : cout << "Meow...." << endl;
}
