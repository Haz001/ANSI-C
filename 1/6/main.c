#include <stdio.h>

main()
{
	short c;
	long nwhite, nother;
	long ndigit[10];
	
	nwhite = nother = 0;
	{/* Minimum scope for i deallocation*/
		short i;
		for (i = 0; i < 10; i++)
			ndigit[i] = 0;
	}
	
	while ((c = getchar()) != EOF)
		if(c >= '0' && c <= '9')
			ndigit[c-'0']++;
		else if (c == ' ' || c == '\n' || c == '\t')
			nwhite++;
		else
			nother++;
	printf("Digits =");
	{
		short i;
		for (i = 0; i < 10; i++)
			printf(" %d",ndigit[i]);
	}
	printf(", white space = %d, other %d\n", nwhite, nother);

}
