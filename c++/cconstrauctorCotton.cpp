/*The following program uses constructor to initialize values to the members of a class and calculates the price of a shit or trouser depending on given input.
Directions for coding
Define a class Clothing with C++ with following description
The private members
Code of type string
Type of type string
Size of type integer
Material of type string
Price of type float

A method calc_Price() which calculates and assigns the value of Price as follows
For value of material as “COTTON”
Type Price
Trouser 1500
Shirt 1200
For materials other than cotton the above price is reduced by 25%
The public members
A constructor to assign initial value of code, type and material with value “Not Assigned”.
Function getInfo() to input the values of data members code, type, size and material. It will invoke the method calc_Price()
The method show() displays the content of all data members.
Program*/
#include <iostream>
#include <string.h>
using namespace std;
// Class Clothing
class Clothing
{
	// Member variables
	private :
		char code[20];
		char type[30];
		int siz;
		char material[30];
		float price;
	public :
		// Member functions
		Clothing() // constructor
		{
			strcpy(code, "Not Assigned");
			strcpy(type, "Not assigned");
			siz = 0;
			strcpy(material, "Not assigned");
			price = 0;
		}
		void calcPrice()
		{
			if (strcmp(material, "COTTON") == 0)
			{
				if (strcmp(type, "TROUSER") == 0)
				{
					price = 1500;
				}
				if (strcmp(type, "SHIRT") == 0)
				{
					price = 1200;
				}
			}
			else
			{
				if (strcmp(type, "TROUSER") == 0)
				{
					price = 1500 - 1500*.25;
				}
				if (strcmp(type, "SHIRT") == 0)
				{
					price = 1200 - 1200*.25;
				}
			}
		}
		void getInfo()
		{
			cout << "Enter code .. (Any Integer) : ";
			cin >> code;
			cout << "Enter type .. (TROUSER / SHIRT ) : ";
			cin >> type;
			cout << "Enter size .. (Size of Trouser or shirt) : ";
			cin >> siz;
			cout << "Enter material .. (COTTON / NON-COTTON) : ";
			cin >> material;
			calcPrice();
		}
		void show()
		{
			cout << "Code : " << code << endl;
			cout << "Type : " << type << endl;
			cout << "Size : " << siz << endl;
			cout << "Material : " << material << endl;
			cout << "Price : " << price << endl;
		}
};
// Main function
int main()
{
	Clothing cl; // Calling the constructor explicitly
	cl.getInfo();
	cout << "The output \n"<< endl;
	cl.show();
	return 0;
}
