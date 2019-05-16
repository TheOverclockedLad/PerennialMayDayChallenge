/***********
Dev 3: Spiral Matrix
To compile: cc Dev3.c
To execute: ./a.out
***********/

#include <stdio.h>

int main()
{
	char T; scanf("%c", &T);

	for (; T > 0; T--)
	{
		int M, N; scanf("%d%d", &M, &N);

		int mat[M][N];
		for (char i = 0; i < M; i++)
			for (char j = 0; j < N; j++)
				scanf("%d", &mat[i][j]);

		char i = 0, j = 0, k = 0;
		while (i < M && j < N)
		{
			for (char k = j; k < N; k++)
				printf("%d\t", mat[i][k]);
			i++;

			for (char k = i; k < M; k++)
				printf("%d\t", mat[k][N - 1]);
			N--;

			if (i < M)
			{
				for (char k = N - 1; k >= j; k--)
					printf("%d\t", mat[M - 1][k]);
				M--;
			}

			if (j < N)
			{
				for (char k = N - 1; k >= i; k--)
					printf("%d\t", mat[k][j]);
				j++;
			}
		}
		puts("\n");
	}
	return 0;
}
