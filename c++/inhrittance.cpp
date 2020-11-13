/*

#include <bits/stdc++.h>
Look at the following diagram and create classes in C++ . This is an example of hybrid inheritance structure ( a mix of multiple, hierarchical and multi-level inheritance structure.


Do the following when defining the classes 
1. Determine possible member variables for each class. 
2. Determine member methods for each class
 3. Decide which are the additional methods in child classes 
 4. Compile the program (only with classes) and check if it is compiled error free. Please note : You can avoid writing complete method details.
 */
 
 #include <iostream>
using namespace std;
class Citizen
{
	private :
	int ssc_no; // Social Security Number
	char name[100];
	char addr[100];
	int age;
	int telephone;
	double avg_income;
	public :
	void gather_info()
	{
	}
	int authentication() // method structure only
	{
		return 1;
	}

};
class Student : public Citizen
{
	private :
	int rollnum;
	char institution_name[100];
	char course_enrolled[100];
	char joining_date[12];
	public :
	void gather_info() // override
	{
		Citizen::gather_info();
	}
	int join_course() // method structure only
	{
		return 1;
	}

};
class Musician : public Citizen
{
	private :
	int musician_id;
	int if_self_learnt;
	char music_college[100];
	char musician_type;
	public :
	void gather_info() // override
	{
		Citizen::gather_info();
	}

};
class StudentMusician : public Student, public Musician
{
	public :
	void gather_info()
	{
		Student::gather_info();
		Musician::gather_info();
	}
};
int main()
{
	return 0;
}
