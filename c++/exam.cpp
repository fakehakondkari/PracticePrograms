#include <stdio.h>
int main()
{
	int m = 4, n = 6, p = 0, i;
	for(i = 1; i <= n; i++)
	p = p * m;
	printf ("P = %d", p);
}
