#include <stdio.h>
char count[] = "s";
int i;
int main() {
	for ( i=99; i>=0; i-- ) {
		if ( i == 1 ) { count[0] = '\0'; }
		if ( i != 0 ) {
			if ( i != 99 ) {
				printf("%i bottle%s of beer on the wall\n\n", i, count);
			}
			printf("%i bottle%s of beer on the wall,\n", i, count);
			printf("%i bottle%s of beer\n\n", i, count);
			printf("Take one down, pass it around,\n");
		} else {
			printf("no more bottles of beer on the wall\n\n");
			printf("Go to the store and buy some more,\n");
			printf("99 bottles of beer on the wall\n");
			return 0;
		}
	}
}
