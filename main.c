#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int n)
{
	int res=1;
	int i;
	for(i=1;i<=n;i++)
	{
		res = res*i; 
	}
	
	return res;
}

int calcombination(int n, int r)
{
	int numerator, denominator;
	numerator = factorial(n);
	denominator = factorial(n-r)*factorial(r);
	return (numerator/denominator);
}

int main(void)
{
	int n, r;
	int res;
	printf("input n and r :");
	scanf("%d %d", &n, &r);
	res = calcombination(n, r);
	printf("combination result is %d\n", res);
	
	return 0;
}
