#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMX 3
#define TAMY 6

void inizializarF(int matriz[TAMX][TAMY]){

	int _rand;
	srand(time(NULL));

	for (int i = 0; i < TAMX; ++i)
	{
		for (int j = 0; j < TAMY; ++j)
		{
			_rand=rand()%11;

			matriz[i][j]=_rand;
		}
	}
}

int sumaF(int matriz[TAMX][TAMY]){

	int suma = 0;

	for (int j = 0; j < TAMY; ++j)
	{
		for (int i = 0; i < TAMX; ++i)
		{
			suma = suma + matriz[i][j];
		}
	}

	return suma;

}

int main(int argc, char const *argv[])
{
	int matriz[TAMX][TAMY], suma;

	inizializarF(matriz);

	for (int j = 0; j < TAMY; ++j)
	{
		for (int i = 0; i < TAMX; ++i)
		{
			printf("%i 	",matriz[i][j] );
		}
		printf("\n");
	}

	suma = sumaF(matriz);

	printf("\nLa suma de la matriz es: %d\n",suma);

	return 0;
}
