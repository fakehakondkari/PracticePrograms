Program 1
// C++ program to implement Hierarchical Inheritance
#include <iostream>
using namespace std;
// base class
class Vehicle 
{
  public:
    Vehicle()
    {
      cout << "This is a Vehicle" << endl;
    }
};
 
// first sub class 
class Scooter: public Vehicle
{
 
};
 
// second sub class
class Bus: public Vehicle
{
     
};
 
// main function
int main()
{   
    // 
    Scooter obj1;
    Bus obj2;
    return 0;
}

Try Yourself 
Program 2
#include <iostream>
using namespace std;
 
// base class 
class Vehicle 
{
  public:
    Vehicle()
    {
      cout << "This is a Vehicle" << endl;
    }
};
 
//base class
class Fare
{
    public:
    Fare()
    {
        cout<<"Fare of Vehicle\n";
    }
};
 
// first sub class 
class Scooter: public Vehicle
{
 
};
 
// second sub class
class Bus: public Vehicle, public Fare
{
     
};
 
// main function
int main()
{   
    Scooter obj1;
    Bus obj2;
    return 0;
}
