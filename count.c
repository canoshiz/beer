#include <stdio.h>
#include <unistd.h>

int main() {
	int time;

	printf("\033[2J\033[1;1H");

	for ( time = 0 ;; time++ ) {
		printf("\033[1;1H");
		printf("Seconds since this program began running: ");
		printf("%i\n", time);
		sleep(1);
	}
}
