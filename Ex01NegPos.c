#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
//Um codigo que compara se um valor � positivo ou igual a zero.

//E caso seja verdadeira imprima a raiz quadrada do n�mero, caso contr�rio
// imprima a eleva��o quadrada do mesmo.

	float entrada;

	setlocale (LC_ALL, "Portuguese");

	printf ("Insira um valor n�merico que seja positivo ou negativo: "); 
	scanf ("%f", &entrada);

	if (entrada >= 0)
	{
		entrada = sqrt (entrada); //Calculo de raiz quadrada usando <math.h>
		printf(".\nSeu n�mero era um negativo...\n.\nAqui esta a raiz quadrada dele: %.2f", 
				entrada);
	}
	 else
	{
		entrada = entrada * entrada;
		printf(".\nSeu n�mero era um negativo...\n.\nAqui esta ele elevado ao quadrado: %.2f", entrada);
	}	

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  "); //BICI!!!
	return 0;
}