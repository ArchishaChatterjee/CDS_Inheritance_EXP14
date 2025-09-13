// EXPERIMENT 14D : Hierarchial Inheritance

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

class C : public A{
    public:
    string color = "Red";
    void showcolor(){
        cout << color << endl;
    }
};

class D : public B{
    public:
    string color = "Purple";
    void showcolor(){
        cout << color << endl;
    }
};

class E : public B{
    public:
    string color = "Pink";
    void showcolor(){
        cout << color << endl;
    }
};

class F : public C{
    public:
    string color = "Orange";
    void showcolor(){
        cout << color << endl;
    }
};

class G : public C{
    public:
    string color = "Yellow";
    void showcolor(){
        cout << color << endl;
    }
};

int main(){
    A a;
    B b;
    C c;
    D d;
    E e;
    F f;
    G g;

    cout << "From A: ";
    a.showcolor();
    
    cout << "From B: ";
    b.showcolor();

    cout << "From C: ";
    c.showcolor();

    cout << "From D: ";
    d.showcolor();

    cout << "From E: ";
    e.showcolor();

    cout << "From F: ";
    f.showcolor();

    cout << "From G: ";
    g.showcolor();

    cout << "\nAccessing parent versions explicitly:" << endl;
    b.A::showcolor();  
    c.A::showcolor();  
    d.B::showcolor();  
    e.B::showcolor();  
    f.C::showcolor();
    g.C::showcolor();

    return 0;
}

/*
OUTPUT :
From A: Blue
From B: Green
From C: Red
From D: Purple
From E: Pink
From F: Orange
From G: Yellow

Accessing parent versions explicitly:
Blue
Blue
Green
Green
Red
Red
*/
