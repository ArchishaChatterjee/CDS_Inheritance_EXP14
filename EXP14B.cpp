// EXPERIMENT 14B : Multiple Inheritance
#include <iostream>
using namespace std;

class A{
public:
    string colorName = "Blue";
    void printColor(){
        cout << colorName << endl;
    }
};

class B{
public:
    string colorName = "Green";
    void printColor(){
        cout << colorName << endl;
    }
};

class C : public A, public B{
public:
    string colorName = "Red";
    void printColor(){
        cout << colorName << endl;
    }
};

int main(){
    C hello;
    hello.printColor(); 
    hello.A::printColor(); 
    hello.B::printColor(); 
    return 0;
}

/*
OUTPUT :
Red
Blue
Green
*/
