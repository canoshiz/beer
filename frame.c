#include <stdio.h>

int main() {
	const int cols = 80;
	const int rows = 24;

	int chars;
	int line;

	printf("\033[2J\033[1;2H");
	for ( chars = 0; chars < cols - 2; chars++ ) {
		printf("-");
	}
	printf("\033[24;2H");
	for ( chars = 0; chars < cols - 2; chars++ ) {
		printf("-");
	}

	line = 2;
	for ( chars = 0; chars < rows - 2; chars++ ) {
		printf("\033[%i;1H|", line);
		line = line + 1;
	}
	line = 2;
	for ( chars = 0; chars < rows - 2; chars++ ) {
		printf("\033[%i;80H|", line);
		line = line + 1;
	}

	printf("\033[1;1H+\033[1;80H+\033[24;1H+\033[24;80H+");

	printf("\033[2;2H");
}
