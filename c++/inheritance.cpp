// C++ program to demonstrate implementation of Inheritance 
#include <bits/stdc++.h>
using namespace std;
//Base class
class School
{
    public:
    int id_p;
}; 
// Sub class inheriting from Base Class(School)
class Student : public School
{
    public:
    int id_c;
}; 
//main function
int main() 
   {      
        Student obj1; 
// An object of class student has all data membersand member functions of class school
        obj1.id_c = 91;
        obj1.id_p = 6;
        cout << "Student id is " <<  obj1.id_c << endl;
        cout << "School id is " <<  obj1.id_p << endl;        
        return 0;
}









Try Yourself 
Program 2
#include <iostream>
using namespace std;
class Parent
{
public :
Parent()
{
cout << "Inside the Parent" << endl;
}
Parent(int x)
{
cout << "Inside the Parent with parameter value " << x << endl;
} 
void method1() 
{
Parent(10);
cout << "Inside the Method1 of Parent" << endl;
}
};
class Child:public Parent
{
public :
Child()
{
Parent(5); // Parent constructor call
cout << "Inside the Child" << endl;
}
void method1()
{
Parent(7); // Parent constructor call
cout << "Inside the Method1 of Child" << endl;
}
};
int main()
{
Child ch;
ch.method1();
}

