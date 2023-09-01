#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
//Um codigo que compara se um valor é positivo ou igual a zero.

//E caso seja verdadeira imprima a raiz quadrada do número, caso contrário
// imprima a elevação quadrada do mesmo.

	float entrada;

	setlocale (LC_ALL, "Portuguese");

	printf ("Insira um valor númerico que seja positivo ou negativo: "); 
	scanf ("%f", &entrada);

	if (entrada >= 0)
	{
		entrada = sqrt (entrada); //Calculo de raiz quadrada usando <math.h>
		printf(".\nSeu número era um negativo...\n.\nAqui esta a raiz quadrada dele: %.2f", 
				entrada);
	}
	 else
	{
		entrada = entrada * entrada;
		printf(".\nSeu número era um negativo...\n.\nAqui esta ele elevado ao quadrado: %.2f", entrada);
	}	

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  "); //BICI!!!
	return 0;
}