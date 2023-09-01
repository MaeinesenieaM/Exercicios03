#include <stdio.h>
#include <locale.h>

int main ()
{
//Construa um algoritmo que, dado quatro valores, 
//A, B, C e D, o algoritmo imprima o maior e o menor valor.

	int abcd [4];

	setlocale (LC_ALL, "Portuguese");

	printf ("Insira os valores númericos de cada letra.\n");
	printf ("A: "); scanf ("%d", &abcd [0]);
	printf ("B: "); scanf ("%d", &abcd [1]);
	printf ("C: "); scanf ("%d", &abcd [2]);
	printf ("D: "); scanf ("%d", &abcd [3]);

	int maior = abcd [0];
	int menor = abcd [0];

	for (int pos = 1; pos < 4; pos++)
	{
		if (abcd [pos] > maior)
		{
			maior =	abcd [pos];
		}
		 else if (abcd [pos] < menor)
		{
			menor = abcd [pos];
		}
	}

	printf ("O Maior valor dado foi (%d), já o menor foi (%d)", maior, menor);

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  "); //BICI!!!

	return 0;
}