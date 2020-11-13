//Write a code to find out all positive whole numbers x & y satisfying the equation x+y = 130


#include<stdio.h>
int main()
{
int i,j;
for(i=0;i<=130;i++)	{            //taken for loop just to display the sequence
	printf("\nwhole no are %d:",i); ///to print the sequence
	}
for(i=0;i<=130;i++){       //i loop to run fronm 0to130       
	for(j=1;j<=i;j++){     //j loop to run from  1 to130  
		if((i+j)==130){     //it will check if i and j addition is equal to 130 or not
			printf("\n%d + %d=130",i,j);
		}
		
	}
}	
}
