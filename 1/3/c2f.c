#include <stdio.h>

main()
{
	short celsius;
	printf("  °C\t    °F\n");
	for (celsius = 100;celsius >= -100;celsius -= 10)
	{ 
		printf("%4d\t%6.0f\n", celsius, (celsius * (9.0 / 5.0)) + 32);
	}
}
