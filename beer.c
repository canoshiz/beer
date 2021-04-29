#include <stdio.h>

int i = 99;
int count() {
	printf("%i bottle", i);
	if ( i > 1 ) { printf("s"); }
}

int main() {
	for ( ;; i-- ) {
		if ( i != 0 ) {
			if ( i != 99 ) {
				count(); printf(" of beer on the wall\n\n");
			}
			count(); printf(" of beer on the wall,\n");
			count(); printf(" of beer\n\n");
			printf("Take one down, pass it around,\n");
		} else {
			printf("no more bottles of beer on the wall\n\n");
			printf("Go to the store and buy some more,\n");
			printf("99 bottles of beer on the wall\n");
			return 0;
		}
	}
}
