/*Write a program to create a structure Students with data fields ..
Name
Roll
Maths
Physics
Chemistry
English
Total
Get details of five students and print the data in a tabular fashion.
Also in next two lines print the total and average marks obtained by all the students
At the end print a line showing the toppers total marks among all the 5 students.
This time you will not only use &lt;iomanip&gt; to format the output and write the content in a text file
instead of displaying in the console. For this you will use <fstream> header file.*/

#include<iostream>
#include <string.h>
#include <iomanip>
#include <fstream>
using namespace std;
struct student
{
	char name[100];
	int roll;
	int Maths;
	int Physics;
	int Chemistry;
	int English;
	int Total;
};
struct Max
{
	char name[100];
	int roll;

	int Total;
};
int main()
{
	struct student stud[5];
	int i,Total;
	double Average, Sum = 0;

	ofstream fileout;
	fileout.open ("Result.txt");

	for(i=0;i<5;i++)
	{
		cout<<"Enter the name : ";
		cin>>stud[i].name;
		cout<<"Enter the roll number : ";
		cin>>stud[i].roll;
		cout<<"Enter marks of English : ";
		cin>>stud[i].English;
		cout<<"Enter marks of Physics : ";
		cin>>stud[i].Physics;
		cout<<"Enter marks of Chemistry :";
		cin>>stud[i].Chemistry;
		cout<<"Enter marks of Mathematics :";
		cin>>stud[i].Maths;
	              stud[i].Total=stud[i].English+stud[i].Physics+stud[i].Chemistry+stud[i].Maths;
	}
	cout << endl << endl;
	fileout << "Student&#39;s Progress Report "<< endl;
	fileout<<"====================================================="<<endl;
	fileout <<setw(20)<< "Name";
	fileout <<setw(10)<< "Roll";
	fileout <<setw(10)<< "English";
	fileout <<setw(10)<< "Physics";
	fileout <<setw(10)<< "Chemistry";

	fileout <<setw(10)<< "Maths";
	fileout <<setw(10)<< "Total"<<endl;
	fileout<<"====================================================="<<endl;
	for(i=0;i<5;i++)
	{
		fileout<<setw(20)<<stud[i].name;
		fileout<<setw(10)<<stud[i].roll;
		fileout<<setw(10)<<stud[i].English;
		fileout<<setw(10)<<stud[i].Physics;
		fileout<<setw(10)<<stud[i].Chemistry;
		fileout<<setw(10)<<stud[i].Maths;
		fileout<<setw(10)<<stud[i].Total<<endl;
		Sum=Sum+stud[i].Total;
	}
	fileout<<"====================================================="<<endl;
	fileout<<"Total "<<Sum<<endl;
	fileout<<"====================================================="<<endl;
	Average = Sum/5.0;
	fileout<<"Average "<<Average<<endl;
	fileout<<"====================================================="<<endl;
	struct Max max;
	max.Total = 0;
	for(i=0;i<5;i++)
	{
		if(max.Total<stud[i].Total)
		{
			strcpy(max.name,stud[i].name);
			max.roll=stud[i].roll;
			max.Total=stud[i].Total;
		}
	}
	fileout<< "The Topper&#39;s Profile "<< endl;
	fileout<< "====================================================="<<endl;
	fileout<<setw(20)<< "Name";
	fileout<<setw(10)<< "Roll";
	fileout<<setw(10)<< "Total"<<endl;
	fileout<< "====================================================="<<endl;
	fileout<<setw(20)<<max.name;
	fileout<<setw(10)<<max.roll;
	fileout<<setw(10)<<max.Total<<endl;
	fileout<< "====================================================="<<endl;
	fileout.close();
}
