#include <stdio.h>

main()
{
	/* farh holds the current temp to be converted, celsius holds the
	   converted temperature*/
	int farh, celsius;

	/* range of conversions for farh*/
	int start, stop, step;

	start = -100;
	stop = 100;
	step = 10;

	printf("°F\t°C\n");
	/* farh acts as counter */
	farh = start;
	/* loop till counter (farh) is bigger than stop, inclusive range */
	while (farh <= stop)
	{ 
		/* convert farh to celcius */
		celsius =  ((farh - 32) * 5) / 9;
		printf("%d\t%d\n",farh, celsius);
		/* increemnt counter (farh) */
		farh = farh + step;
	}
}
