#include <stdio.h>

int main(int argc, const char *argv[])
{
	char *str;
 	size_t size;

	while (1) {
		if (getline(&str, &size, stdin) < 0) break;
		printf("%s", str);
	}

	return 0;
}
