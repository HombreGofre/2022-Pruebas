#include <stdio.h>

int main()
{
	float saldo = 1000, cantidad;
	int opcionElegida;
	
	printf(" Bienvedio a tu cajero virtual\n");
	do
	{
	printf("\n Escribe lo que qiueras hacer\n");
	printf(" 1) Agregar dinero a la cuenta\n");
	printf(" 2) Retirar dinero de la cuenta\n");
	printf(" 3) Ver saldo actual\n");
	printf(" 4) Salir\n");
	scanf("%d" ,&opcionElegida);
	
	switch(opcionElegida)
	{
		case 1:
			printf(" Seleciono agregar dinero a la cuenta\n");
			printf(" Escriba la cantidad que desea ingresar\n");
			scanf ("%f", &cantidad);
			saldo += cantidad;
			printf(" El saldo es: €%.2f", saldo);
			break;
		case 2:
			printf(" seleccion retiar dinero de la cuenta\n");
			printf(" Ecriba la cantidad que desea retirar\n");
			scanf ("%f", &cantidad);
			saldo -= cantidad;
			printf(" El saldo es: €%.2f", saldo);
			break;
		case 3:
			printf(" Selecciono ver saldo actual\n");
			printf(" Su saldo actual es: €%.2f", saldo);
		case 4:
			printf(" Chao pejcao");
			break;
		default:
			printf(" Opcion no disponible\n");
	}
	}
	while(opcionElegida != 4);
	return 0;
}
