#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include "questionBank.txt"

string startQuiz();
int main(void){
	int ch;
	char player_name;
	printf("--------Welcome to Simple Quiz Game--------");
	do{
		printf("\n\nYour options:");
		printf("\n\n1.Start the quiz");
		printf("\n2.Exit");
		printf("\nEnter your options:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("\n-----Quiz started--------");
				printf("\nEnter player Name:");
				scanf("%s",&player_name);
				printf("\nWelcome %s",player_name);
				startQuiz();
				break;
			case 2:
				printf("Exitting Press any key...");
				getch();
				exit(1);
			default:
				printf("Wrong choice!!!!");
				printf("Enter a valid option!!");
				break;
				
		}
	}while(ch=='y'||ch=='Y');
	getch();
	
}

string startQuiz(){
	string[] lines = System.IO.File.ReadAllLines(@"C:\c++ programs\questionBank.txt");
	 foreach (string line in lines)
        {
            // Use a tab to indent each line of the file.
            Console.WriteLine("\t" + line);
        }
}
