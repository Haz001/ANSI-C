#include <stdio.h>

main(){
	short c;
	while ((c = getchar()) != EOF){
		if(c == ' ')
			printf("\n");
		else
			printf("%c", c);
	}
}
