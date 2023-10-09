#include <stdio.h>

main()
{
	long cc;
	while (getchar() != EOF) {
		++cc;
	}
	printf("Characters: %d\n", cc);

}
