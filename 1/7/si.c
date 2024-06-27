#include <stdio.h>
#include <string.h>

unsigned long power (int x, int y);
void print_si();


int main(){
	const char *a[31];
	// To de-allocate i after no longer used
	{
		int i;
		for (i = 0; i < 30; ++i)
			i[a] = "\0";
		a[1] = "deca";
		a[2] = "hecto";
		a[3] = "kilo";
		a[6] = "mega";
		a[9] = "giga";
		a[12] = "tera";
		a[15] = "peta";
		a[18] = "exa";
		a[21] = "zetta";
		a[24] = "yotta";
		a[27] = "ronna";
		a[30] = "quetta";

		printf(" Prefix  | Base 10 | Decimal \n");

		for (i = 0; i < 31;i++){
			char *prefix;
			strcpy(prefix, i[a]);

			if (strlen(prefix) != 0)
				strcat(prefix, "-");

			while (strlen(prefix) < 7)
				strcat(prefix, " ");
			
			if (i > 9)
				printf(" %s |   10^%2d | %llu\n", prefix, i, power(10,i));
			else
				printf(" %s |    10^%1d | %llu\n", prefix, i, power(10,i));
		}
	}
	return 0;
}

unsigned long power (int x, int y)
{
	unsigned long r = 1;
	int i;
	for (i = 0; i < y; ++i)
		r *= x;
	return r;
}
