#include <stdio.h>

main()
{
	long lc, tc, bc;
	short c;
	lc = tc = bc = 0;
	while ((c = getchar()) != EOF){
		if (c == '\n')
			lc++;
		else if (c == '\t'){
			tc++;
		}
		else if (c == ' ')
			bc++;
	}
	printf("Lines\tTabs\tSpaces\n");
	printf("%5d\t%4d\t%6d\n", lc, tc, bc);
	

}
