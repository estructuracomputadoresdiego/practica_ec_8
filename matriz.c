#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

void inizializarF(int matriz[TAM][TAM]){

	int _rand;
	srand(time(NULL));

	for (int i = 0; i < TAM; ++i)
	{
		for (int j = 0; j < TAM; ++j)
		{
			_rand=3+(rand()%(16-3));

			matriz[i][j]=_rand;
		}
	}
}

int main(int argc, char const *argv[])
{
	int matriz[TAM][TAM];

	inizializarF(matriz);

	for (int j = 0; j < TAM; ++j)
	{
		for (int i = 0; i < TAM; ++i)
		{
			printf("%i ",matriz[i][j] );
		}
		printf("\n");
	}

	return 0;
}