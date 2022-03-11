//Directivas del proceador.
//Estas ayudan al procesador con las definiciones para optimizar su uso.

#include <stdio.h> //se incluye la librería que nos devuelve en un "ouput"

#define PI 3.1416   //así se definen los MACROS
					// LOS MACROS NO LLEVAN PUNTO Y COMA AL FINAL

//variable global se puede usar en "n" funciones ya que está fuera de un ámbito
int y = 5;

int main()
{
	int x = 10; // variable local  que sólo funciona en este ámbito
//para mostrar los decimales en la operación hay que añadir una variable 
//tipo float ya que los int sólo permiten variables de tipo entero
	float suma;	
	suma = PI + x;
	
	printf("la suma es: %.4f",suma);
	
	return (0);
}
