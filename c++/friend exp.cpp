#include <iostream>
using namespace std;
class Square
{
	int side;
	public:
		Square() {}
		Square (int s) : side(s) {}
		int area() {return side * side;}
		friend Square copySquarePlus10 (const Square&);
};
Square copySquarePlus10 (const Square& sp)
{
	Square sq;
	sq.side = sp.side+10;
	return sq;
}
int main ()
{
	Square sqf;
	Square sq (4);
	sqf = copySquarePlus10 (sq);
	cout << sqf.area() << '\n';
	return 0;
}
