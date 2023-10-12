#include <stdio.h>

int factorial(n)
{
	int i, res = 1;
	for (i = 1; i <= n; i++)
		res = res * i;
	return res;
}

int combination(n, r)
{
	return factorial(n) / (factorial(n-r) * factorial(r));
}

int main()
{
	int n, r, result;
	
	printf("input n : ");
	scanf("%i", &n);
	printf("input r : ");
	scanf("%i", &r);
	
	result = combination(n, r);
	
	printf("result : %i", result);
}


