//sentencia If / Else o Doble 
#include <stdio.h>
/*Su sintaxis es la siguinete;
if(algo)
{
	Esto es loq queocurre si se cumple ese primer algo.
}
else(otro algo)
{
	Esto es lo que ocurrirá si no se da la primera condición y sí la segunda.
}
*/


int main ()
{
	float a,b,c;
	
	printf("Digite el número a\n");
	scanf("%f",&a);
	printf("Digite el número b\n");
	scanf("%f",&b);
	c = a + b;
	
	if(a+b>200)
	{
		printf("El resultado es mayor a 200 y es %.0f \n",c);
	}
	else
	{
		printf("El resultado es menor a 200 y es %.0f \n",c);
	}
}
