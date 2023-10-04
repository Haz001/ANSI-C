#include <stdio.h>

main()
{
	short int c;
	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}

}
