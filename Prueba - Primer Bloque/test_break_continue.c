#include <stdio.h>

// continue --> sirve para terminar una iteraci�n y pasar a la siguiente
// break -----> no s�lo termina con una itraci�n sino que ternina con el ciclo completo

int main()
{
	int m;
	int	i;
	
	printf("Escribe el numero que sera ignorado\n");
	scanf("%i", &m);
	
	for(i = 0; i < 100; i++)
	{
		if (i == m)
			continue;
		printf("\n%i", i);
	}
	
	for (i = 0; i < 100; i++)
	{
		if (i == 5)
			break;
		printf("\n%i", i);
	}
}
