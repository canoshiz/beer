#include <stdio.h>

// These values are adjustable; change them to your liking
int rows = 1;
int maxr = 26;
int cols = 4;
int maxc = 98;
int intc = 4;

int main(void) {

	// Count the rows on the screen
	while ( rows <= maxr ) {

		// Add preceding 0s to integers less than 10
		if ( rows < 10 ) {
			printf("0");
		}

		printf("%i", rows);

		// Add newlines as appropriate
		if ( rows < maxr ) {
			printf("\n");
		} else {
			printf(" ");
		}

		rows = rows + 1;

	}

	// Count the columns on the screen
	while ( cols <= maxc ) {

		printf("%i", intc);
		cols = cols + 1;
		intc = intc + 1;

		// Print 0s instead of 10s
		if ( intc == 10 ) {
			intc = 0;
		}

	}

	// Add newline after execution
	printf("\n");

}
