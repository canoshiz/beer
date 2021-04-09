#include <stdio.h>
int main(int argc, char *argv[]) {
	FILE *source, *target;
	source = fopen(argv[1], "rb");
	target = fopen(argv[2], "wb");
	int sizeI, sizeO;
	char buffer[255];

	while ( ! feof(source) ) {
		sizeI = fread(buffer, 1, 100, source);
		sizeO = fwrite(buffer, 1, sizeI, target);
	}

	fclose(source);
	fclose(target);
	return 0;
}
