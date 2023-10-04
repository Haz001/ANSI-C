#include <stdio.h>

#define	LOWER	-100
#define	UPPER	 100
#define	STEP	  10

main()
{
	short farh;
	printf("  °F\t    °C\n");
	for (farh = UPPER; farh >= LOWER; farh -= STEP)
	{ 
		printf("%4d\t%6.1f\n", farh, (farh-32) * (5.0/9.0));
	}
}
