#include <stdio.h>

#define TAM 9

void inizializarF(int matriz[TAM][TAM]){

	for (int i = 0; i < TAM; ++i)
	{
		for (int j = 0; j < TAM; ++j)
		{
			if (i==j){
				matriz[i][j]=1;
			}else{
				matriz[i][j]=0;
			}
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