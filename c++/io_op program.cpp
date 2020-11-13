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
At this stage you should not worry about the formatting*/

#include<iostream>
#include <string.h>
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
	cout<<"======================================================="<<endl;
	cout << "Name Roll English Physics Chemistry Maths Total" << endl;
	cout<<"======================================================="<<endl;
	for(i=0;i<5;i++)
	{
		cout<<stud[i].name<<" ";
		cout<<stud[i].roll<<" ";
		cout<<stud[i].English<<" ";
		cout<<stud[i].Physics<<" ";
		cout<<stud[i].Chemistry<<" ";
		cout<<stud[i].Maths<<" ";

		cout<<stud[i].Total<<endl;
		Sum=Sum+stud[i].Total;
	}
	cout<<"======================================================="<<endl;
	cout<<"Total "<<Sum<<endl;
	cout<<"======================================================="<<endl;
	Average = Sum/5.0;
	cout<<"Average "<<Average<<endl;
	cout<<"======================================================="<<endl;
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
	cout << "The topper "<< endl;
	cout<<"======================================================="<<endl;
	cout<<max.name<<" ";
	cout<<max.roll<<" ";
	cout<<max.Total<<" "<<endl;
	cout<<"======================================================="<<endl;
}
