#include <conio.h>
#include <windows.h>
#include <stdio.h>

int p(int n)
{
	int resultado = 1;
	int k = 0;
	
	for(k=1;k<=n;k=k+1)
	{
		resultado=resultado*k;
	}
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
