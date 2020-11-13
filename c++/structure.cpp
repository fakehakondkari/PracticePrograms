#include<stdio.h>
struct date
{
	int d;
	int m;
	int y;
};
int main()
{
	struct date today;
	printf("%d", sizeof(today));
}
