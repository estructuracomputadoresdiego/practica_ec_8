#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 26


void inizializar (char abecedario[TAM]){

	abecedario[0]='a';

	for (int i = 0; i < TAM; ++i)
	{
		
		abecedario[i]=abecedario[0]+i;

	}

}

int main(int argc, char const *argv[])
{
	
	char abecedario[TAM], password[9];
	int num_rand;
	srand(time(NULL));
	password[8]='\0';	

	inizializar(abecedario);

	for (int i = 0; i < 8; ++i)
	{
		
		num_rand=rand()%26;

		password[i]=abecedario[num_rand];

	}

	printf("%s\n",password );

	return 0;
}
