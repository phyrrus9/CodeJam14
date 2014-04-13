#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char * * argv)
{
	FILE *f = fopen(argv[1], "r");
	int numcases, i;
	fscanf(f, "%d", &numcases);
	for (i = 0; i < numcases; i++)
	{
		//do shit here

		printf("Case #%d: ", i + 1);
	}
	fclose(f);
}
