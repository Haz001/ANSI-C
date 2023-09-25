#include <stdio.h>

main()
{
	/* farh holds the current temp to be converted, celsius holds the
	   converted temperature*/
	float farh, celsius;

	/* range of conversions for farh*/
	int start, stop, step;

	start = -100;
	stop = 100;
	step = 10;

	printf("  °F\t    °C\n");
	/* farh acts as counter */
	farh = (float) start;
	/* loop till counter (farh) is bigger than stop, inclusive range */
	while (farh <= stop)
	{ 
		/* convert farh to celcius */
		celsius = (farh - 32) * (5.0 / 9.0);
		/* Print first float with expected (compensated) width of 4 and
		   no decimal point.
		   Print second float with expected width of 6 and one digit
		   after decimal point */
		printf("%4.0f\t%6.1f\n", farh, celsius);
		/* increemnt counter (farh) */
		farh = farh + step;
	}
}
