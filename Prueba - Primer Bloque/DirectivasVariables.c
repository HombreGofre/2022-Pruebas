//Directivas del proceador.
//Estas ayudan al procesador con las definiciones para optimizar su uso.

#include <stdio.h> //se incluye la librer�a que nos devuelve en un "ouput"

#define PI 3.1416   //as� se definen los MACROS
					// LOS MACROS NO LLEVAN PUNTO Y COMA AL FINAL

//variable global se puede usar en "n" funciones ya que est� fuera de un �mbito
int y = 5;

int main()
{
	int x = 10; // variable local  que s�lo funciona en este �mbito
//para mostrar los decimales en la operaci�n hay que a�adir una variable 
//tipo float ya que los int s�lo permiten variables de tipo entero
	float suma;	
	suma = PI + x;
	
	printf("la suma es: %.4f",suma);
	
	return (0);
}
