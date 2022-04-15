/*
 ============================================================================
 Name        : TP1.c
 Author      : Gastón Cragno.
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void)
{
	setbuf(stdout, NULL);

	int opcion;
	int respuesta;
	float kilometros;
	float precioLatam;
	float precioAerolineas;
	float debitoL;
	float debitoA;
	float creditoL;
	float creditoA;
	float bitcoinL;
	float bitcoinA;
	float unitarioL;
	float unitarioA;
	float difDePrecio;
	int opcion1=0;
	int opcion2=0;
	int opcion3=0;
	int opcion5=0;

	do{ //entra al do while para mostrarle el menu y pedirle que ingrese una opcion.
		respuesta = getNumero(&opcion,"\nSeleccione una opcion\n\n1. Ingresar Kilometros. \n2. Ingresar Precio de Vuelos \n3. Calcular todos los costos\n4. Informar Resultados\n5. Carga forzada de datos\n6. Salir\n","No es una opcion valida\n",1,6,3);
		if(!respuesta)
		{
			switch(opcion) //switch para actuar en base a la opcion que haya elegido.
			{
			case 1: getFloat(&kilometros,"\nIngrese los kilometros: \n","No es una opcion valida (1000~9000000)\n",1000,9000000,3);
					opcion1=1;
					break;
			case 2: if(opcion1 == 1){
					getFloat(&precioLatam,"\nIngrese precio del vuelo en Latam: \n","No es una opcion valida (100~9000000)\n",100,9000000,3);
					getFloat(&precioAerolineas,"\nIngrese precio del vuelo en Aerolineas: \n","No es una opcion valida (100~9000000)\n",100,9000000,3);
					opcion2=1;}
					break;
			case 3: if(opcion2 == 1){
					calcular(precioLatam, precioAerolineas, kilometros,&debitoL,&debitoA,&creditoL,&creditoA,&bitcoinL,&bitcoinA,&unitarioL,&unitarioA,&difDePrecio);
					opcion3 = 1;}
					break;
			case 4: if(opcion3 == 1 || opcion5 == 1){
					mostar(kilometros,precioLatam,precioAerolineas,debitoL,debitoA,creditoL,creditoA,bitcoinL,bitcoinA,unitarioL,unitarioA,difDePrecio);}
					break;
			case 5:	cargaForzada(&precioLatam, &precioAerolineas, &kilometros,&debitoL,&debitoA,&creditoL,&creditoA,&bitcoinL,&bitcoinA,&unitarioL,&unitarioA,&difDePrecio);
					opcion5=1;
					mostar(kilometros,precioLatam,precioAerolineas,debitoL,debitoA,creditoL,creditoA,bitcoinL,bitcoinA,unitarioL,unitarioA,difDePrecio);
					break;
			case 6: //Salir.
					break;
			}
		}
	}while(opcion != 6); //while para salir en caso que indique la opcion 6 (salir).

	return 0;
}
