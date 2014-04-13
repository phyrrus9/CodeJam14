#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int grid1[4][4], grid2[4][4];

int checkdups(int r1, int r2, int *n)
{
	int x1, x2, t = -1;
	*n = 0;
	for (x1 = 0; x1 < 4; x1++)
		for (x2 = 0; x2 < 4; x2++)
			if (grid2[r2 - 1][x2] == grid1[r1 - 1][x1])
			{
				if (t != -1)
					*n = -1;
				else
					t = grid2[r2 - 1][x2];
			}
	return t;
}

int main(int argc, char * * argv)
{
	FILE *f = fopen(argv[1], "r");
	int ncases, row1, row2, i, x, y, t, z = 0;

	fscanf(f, "%d", &ncases);
	for (i = 0; i < ncases; i++)
	{
		fscanf(f, "%d", &row1);
		for (y = 0; y < 4; y++)
			for (x = 0; x < 4; x++)
				fscanf(f, "%d", &grid1[y][x]);
		fscanf(f, "%d", &row2);
		for (y = 0; y < 4; y++)
			for (x = 0; x < 4; x++)
				fscanf(f, "%d", &grid2[y][x]);
		t = checkdups(row1, row2, &z);
		if (z == -1)
			printf("Case #%d: Bad magician!\n", i + 1);
		else if (t == -1)
			printf("Case #%d: Volunteer cheated!\n", i + 1);
		else
			printf("Case #%d: %d\n", i + 1, t);
	}
	fclose(f);
}
