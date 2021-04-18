#include <stdio.h>
int main(int argc, char *argv[]) {
	FILE *source, *target;
	source = fopen(argv[1], "rb");
	target = fopen(argv[2], "wb");
	char buffer[255];
	int size;

	while ( ! feof(source) ) {
		size = fread(buffer, 1, 100, source);
		fwrite(buffer, 1, size, target);
	}

	fclose(source);
	fclose(target);
	return 0;
}
