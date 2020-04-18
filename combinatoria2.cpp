#include <conio.h>
#include <windows.h>
#include <stdio.h>

int p(int n)
{
	int resultado = 1;
	int k = 0;
	
	k=1;
	do 
	{
		resultado=resultado*k;
		k=k+1;
	}while(k<=n);
	return resultado;
}

int main ()
{
	printf("#####################################\n");
	printf("## LOS CALCULOS DE BETY Y VERONICA ##\n");
	printf("#####################################\n");
	printf("\n\n\n");
	printf("Bety ordena sus pulseras de %d formas  \n", p(3));
	printf("Veronica ordena sus pulseras de %d formas  \n", p(10));
	
	system("pause");
	return 0;		
}
