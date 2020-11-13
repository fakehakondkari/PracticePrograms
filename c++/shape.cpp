/*Create a class Shape with the following members
Private Members
Int side
Int length
Int breadth
Int height
Double radius
Char shapeType
Double area/
 
Public Methods
calcArea(int s) : It will calculate the area of a square. It will set the shapeType to ‘s’ and side to value passed for s. And use the formula side * side to calculate the area of square. The calculated area will be stored in area.
void calcArea(int l, int b) : It will calculate the area of a rectangle. The method will update the variables with the following values ..
shapeType with value ‘r’
length with l
breadth with b
Finally calculate the area with formula - length * breadth. Calculated value will be stored in area.
void calcArea(int l, int b, int h) : It will calculate the area of a cube. The method will update the variables with the following values ..
shapeType with value ‘c’
length with l
breadth with b
height with h
Finally calculate the area with formula - length * breadth * height . Calculated value will be stored in area.
void calcArea(double r) : It will calculate the area of a cube. The method will update the variables with the following values ..
shapeType with value ‘x’
radius with r
Finally calculate the area with formula - 22/7 * radius * radius . Calculated value will be stored in area.

void displayData() : The method will display the shape type, various dimensions and the area information.
Test the class for its correct functioning*/


#include <iostream>
using namespace std;

class Shape
{
    private :
    int side;
    int length;
    int breadth;
    int height;
    double radius;
    char shapeType;
    double area;

    public :
    void calcArea(int s)
    {
         shapeType = 's';
         side = s;
         area = side * side;
     }

    void calcArea(int l, int b)
   {
         shapeType = 'r';
         length = l;
         breadth = b;
         area = length * breadth;
   }

    void calcArea(int l, int b, int h)
    {
        shapeType = 'c';
        length = l;
        breadth = b;
        height = h;
        area = length * breadth * height;
    }

   void calcArea(double r)
   {
        shapeType = 'x';

        radius = r;
        area = 22.0/7.0 * radius * radius;
   }

   void displayData()
   {
        switch(shapeType)
       {
            case 's' :
                     cout << "Shape : Square" << endl;
                     cout << " Side : " << side << endl;
                     cout << " Area : " << area << endl;
                     break;
           case 'r' :
                   cout << "Shape : Rectangle" << endl;
                   cout << " Length : " << length << endl;
                   cout << " Breadth : " << breadth << endl;
                   cout << " Area : " << area << endl;
                   break;
          case 'c' :
                  cout << "Shape : Cube" << endl;
                  cout << " Length : " << length << endl;
                  cout << " Breadth : " << breadth << endl;
                  cout << " Height : " << height << endl;
                  cout << " Area : " << area << endl;
                  break;
         case 'x' :
                 cout << "Shape : Circle" << endl;
                 cout << " Radius : " << radius << endl;
                 cout << " Area : " << area << endl;
                 break;

        } 
   }

};
int main()
{
    Shape s1;
    s1.calcArea(10);
    s1.displayData();
}
