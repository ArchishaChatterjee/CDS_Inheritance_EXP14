// EXPERIMENT 14E : Single Inheritance
#include <iostream>
using namespace std;

class A{
public:
    string colorName = "Blue";
    void printColor(){
        cout << colorName << endl;
    }
};

class B : public A{
public:
    string colorName = "Green";
    void printColor(){
        cout << colorName << endl;
    }
};

int main(){
    B element;
    element.A::printColor();
    element.printColor();

    return 0;
}

/*
OUTPUT :
Blue
Green
*/
