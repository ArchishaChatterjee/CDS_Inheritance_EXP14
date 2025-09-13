// EXPERIMENT 14C : Multilevel Inheritance

#include <iostream>
using namespace std;

class A{
    public:
    string color = "Blue";
    void showcolor(){
        cout << color << endl;
    }
};

class B : public A{
    public:
    string color = "Green";
    void showcolor(){
        cout << color << endl;
    }
};

class C : public B{
    public:
    string color = "Red";
    void showcolor(){
        cout << color << endl;
    }
};

int main(){
    C element;
    element.A::showcolor();
    element.B::showcolor();
    element.C::showcolor();
    return 0;
}

/*
OUTPUT :
Blue
Green
Red
*/
