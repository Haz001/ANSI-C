#include <stdio.h>

main()
{
	/* variables to hold current version of temp */
	int farh, celsius;
	/* range of conversions */
	int start, stop, step;

	start = 0;
	stop = 300;
	step = 20;

	farh = start;
	while (farh <= stop){
		celsius =  ((farh - 32) * 5) / 9;
		printf("%d\t%d\n",farh, celsius);
		farh = farh + step;
	}
}
