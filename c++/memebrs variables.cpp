#include <iostream>
using namespace std;
class Time
{
	private :
	int mins;
		int hrs;
	public :
		void readTime()
		{
			cout << "Enter Hours and Minutes below" << endl;
			cout << "Enter hours : ";
			cin >> hrs;
			cout << "Enter minutes : ";
			cin >> mins;
			cout << endl;
		}
		void addTime(Time t1, Time t2)
		{
			mins = (t1.mins + t2.mins)%60;
			hrs = t1.hrs + t2.hrs + (t1.mins + t2.mins)/60;
		}
	void displayTime()
	{
		cout << "Total time is .." << endl;
		cout << "Hours : " << hrs << " Minutes : " << mins << endl;
	}
};
int main()
{
	Time tm1, tm2, tm3;
	tm1.readTime();
	tm2.readTime();
	tm3.addTime(tm1, tm2);
	tm3.displayTime();
}
