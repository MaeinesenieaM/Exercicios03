#include <stdio.h>
#include <locale.h>

int main ()
{
//Dados três valores A, B e C, construa um algoritmo, 
//que imprima os valores de forma ascendente (do menor para o maior).
	setlocale (LC_ALL, "Portuguese");

	int lista [3];
	int hand; //Valor temporario

	printf ("DIGITE TRÊS NUMEROS PARA SEREM ORGANIZADOS EM ORDEM CRESENTE.\n\n");
	printf ("A: "); scanf ("%d", &lista [0]);
	printf ("B: "); scanf ("%d", &lista [1]);
	printf ("C: "); scanf ("%d", &lista [2]);

	for (int fim = 2; fim > 0; fim--)
	{
		for (int elem = 0; elem < fim; elem++)
		{
			int prox = elem + 1;
			if ((lista [elem] - lista [prox]) > 0)
			{
				hand = lista [elem];
				lista [elem] = lista [prox]; //esse resultado troca os valores de lugar
				lista [prox] = hand;
			}
		}
	}
	printf ("%d,%d,%d", lista [0], lista [1], lista [2]);

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  "); //BICI!!!

	return 0;
}

