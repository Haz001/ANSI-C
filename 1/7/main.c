#include <stdio.h>

int power( int m, int n);

main()
{
	int i;
	printf("n  | 2^n  | -3^n\n");
	for (i = 0; i < 10; i++)
		{
		printf("%2d | %4d | %4d\n", i , power(2, i), power(-3, i));
}
	return 0;
}

int power(int base, int n)
{
	int i, p;
	p = 1;
	for (i = 0; i < n; i++)
		p *= base;
	return p;
}
