//Tipos de datos en C

#include <stdio.h>
#include <stdbool.h> // se usa esta librería para poder usar la variable bool

int main()
{
	int a = 1; //2 bytes valores mínimos y máxmios de un int
	char b = 'z'; //1 byte on rango de 0 -> 255
	float c = 1.5; //4 bytes
	double d = 1.5555555; //8 bytes
	long e = 12345; //4 bytes
	short v = 2; // 2 bytes con Rango de -128 -> 127
	unsigned int f = 123; //solo valores positivos en el max de un int
	
	printf("El valor del entero es de %i\n", a);
	printf("El valor del char es de %c\n", b);
	printf("El valor del flotante es de %f\n", c);
	printf("El valor del double es de %lf\n", d);
	printf("El valor del long es de %li\n", e);
	printf("El valor del short es de %i\n", v);
	printf("El valor del entero insigned es de %i\n", f);
}

