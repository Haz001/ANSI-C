#include <stdio.h>

#define true 1
#define false 0

main()
{
	/* 
	  Line  Count (lc), Word Count (wc), Tab  Count (tc),
	  Space Count (sc), Char Count (cc), Byte Count (bc)
	*/
	long lc, wc, tc, sc, cc, bc;

	/*
	  Current Character (c), in word state (state)
	*/
	short c, state;
	state = false;
	lc = wc = tc = sc = cc = bc = 0;

	while ((c = getchar()) != EOF){
		bc++;
		if (c == '\n' || c == '\t' || c == ' ') {
			state = false;
			if (c == '\n')
				lc++;
			else if (c == '\t')
				tc++;
			else if (c == ' ')
				sc++;
		}
		else{
			cc++;
			if (state == false)
				wc++;
			state = true;
		}
	}
	printf("\n");
	printf("Lines\tWords\tTabs\tSpaces\tCharacters\tBytes\n");
	printf("%5d\t%5d\t%4d\t%6d\t%10d\t%5d\n", lc, wc, tc, sc,
		cc, bc);
}
