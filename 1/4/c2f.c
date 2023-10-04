#include <stdio.h>

#define	LOWER	-100
#define	UPPER	 100
#define	STEP	  10

main()
{
	short celsius;
	printf("  °C\t    °F\n");
	for (celsius = UPPER;celsius >= LOWER;celsius -= STEP)
	{ 
		printf("%4d\t%6.0f\n", celsius, (celsius * (9.0 / 5.0)) + 32);
	}
}
