#include <stdio.h>

main()
{
	short farh;
	printf("  °F\t    °C\n");
	for (farh = -100; farh <= 100; farh = farh + 10)
	{ 
		printf("%4d\t%6.1f\n", farh, (farh-32) * (5.0/9.0));
	}
}
