#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMX 6
#define TAMY 3

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

void sumaF(int matriz[TAMX][TAMY], int suma[3]){

	for (int j = 0; j < TAMY; ++j)
	{
		for (int i = 0; i < TAMX; ++i)
		{
			suma[i] = suma[i] + matriz[i][j];
		}
	}
}

int main(int argc, char const *argv[])
{
	int matriz[TAMX][TAMY], suma[TAMX];
	
	for (int i = 0; i < TAMX; ++i)
	{
		suma[i]=0;
	}

	inizializarF(matriz);

	for (int j = 0; j < TAMY; ++j)
	{
		for (int i = 0; i < TAMX; ++i)
		{
			printf("%i 	",matriz[i][j] );
		}
		printf("\n");
	}

	sumaF(matriz,suma);

	for (int i = 0; i < TAMX; ++i)
	{
		printf("\nLa suma de la columna %d es: %d\n",i+1 ,suma[i]);
	}


	return 0;
}
