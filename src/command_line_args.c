#include <stdio.h>

int main(int argc, char** argv)
{
	// The first argument is always the program executable name
	// eg. $> program abc uvw xyz
	// argv[0] = "program"
	// argv[1] = "abc"
	// argv[2] = "uvw"
	// argv[3] = "xyz"
	// argc = 4

	for (int i = 0; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}

	return 0;
}