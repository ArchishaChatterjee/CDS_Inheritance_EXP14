// Inheritance using Public, Private and Protected Classes

#include <iostream>
using namespace std;

class Vehicle{
    public:
    string brand = "Ford";
    
    void color(){
        cout << "Red!" << endl;
    }
    private:
    void wheels()_{
        cout << "4!" << endl;
    }
    protected:
    
    class Car : protected Vehicle{
    string brand = "Ford";
    void show(){
        cout << brand << endl;
    }
    };
    
};

// Derived Class
class Car : private Vehicle{
    public:
    string model = "Mustang";
};

int main(){
    Car mycar;
    mycar.color();
    mycar.wheels();
    return 0;
}


/*
OUTPUT: 
Exp14A.cpp:14:17: error: expected ‘;’ at end of member declaration
   14 |     void wheels()_{
      |                 ^
      |                  ;
Exp14A.cpp:14:18: error: ‘_’ does not name a type
   14 |     void wheels()_{
      |                  ^
Exp14A.cpp:19:27: error: invalid use of incomplete type ‘class Vehicle’
   19 |     class Car : protected Vehicle{
      |                           ^~~~~~~
Exp14A.cpp:6:7: note: definition of ‘class Vehicle’ is not complete until the closing brace
    6 | class Vehicle{
      |       ^~~~~~~
Exp14A.cpp: In function ‘int main()’:
Exp14A.cpp:36:16: error: ‘void Vehicle::color()’ is inaccessible within this context
   36 |     mycar.color();
      |     ~~~~~~~~~~~^~
Exp14A.cpp:10:10: note: declared here
   10 |     void color(){
      |          ^~~~~
Exp14A.cpp:36:16: error: ‘Vehicle’ is not an accessible base of ‘Car’
   36 |     mycar.color();
      |     ~~~~~~~~~~~^~
Exp14A.cpp:37:17: error: ‘void Vehicle::wheels()’ is private within this context
   37 |     mycar.wheels();
      |     ~~~~~~~~~~~~^~
Exp14A.cpp:14:10: note: declared private here
   14 |     void wheels()_{
      |          ^~~~~~
Exp14A.cpp:37:17: error: ‘Vehicle’ is not an accessible base of ‘Car’
   37 |     mycar.wheels();
      |     ~~~~~~~~~~~~^~
*/
