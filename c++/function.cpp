#include<stdio.h>
int cube(int x);
main()
{
	int m ,n;
	printf("Enter the value to get cube: ");
	scanf("%d",&m);
	
	n=cube(m);
	printf("the cube of number %d is %d ",m,n);
}

int cube(int x){
	float p;
	p=x*x*x;
	return (p);
}
