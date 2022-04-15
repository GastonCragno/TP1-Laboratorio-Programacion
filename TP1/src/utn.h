/*
 * utn.h
 *
 *  Created on: 11 abr. 2022
 *      Author: Gastón '.-'
 */

/**
 * funcion para pedir y verificar un entero.
 * @param pResultado puntero a int para guardar un entero.
 * @param mensaje parametro para dar un mensaje.
 * @param mensajeError parametro para dar un mensaje en caso de error.
 * @param minimo parametro para validar el rango del caracteres, aqui pongo el minimo.
 * @param maximo parametro para validar el rango del caracteres, aqui pongo el maximo.
 * @param reintentos parametro para determinar la cantidad de intentos que tiene de realizar la accion.
 * @return en caso de exito retornara un 0 de lo contrario un -1.
 */
int getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);

/**
 * funcion para pedir y verificar un caracter.
 * @param pResultado puntero a char para guardar un char.
 * @param mensaje parametro para dar un mensaje.
 * @param mensajeError parametro para dar un mensaje en caso de error.
 * @param minimo parametro para validar el rango del caracteres, aqui pongo el minimo.
 * @param maximo parametro para validar el rango del caracteres, aqui pongo el maximo.
 * @param reintentos parametro para determinar la cantidad de intentos que tiene de realizar la accion.
 * @return en caso de exito retornara un 0 de lo contrario un -1.
 */
int getCaracter(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos);

/**
 * funcion para pedir y verificar un flotante.
 * @param pResultado puntero a char para guardar un flotante.
 * @param mensaje parametro para dar un mensaje.
 * @param mensajeError parametro para dar un mensaje en caso de error.
 * @param minimo parametro para validar el rango del caracteres, aqui pongo el minimo.
 * @param maximo parametro para validar el rango del caracteres, aqui pongo el maximo.
 * @param reintentos parametro para determinar la cantidad de intentos que tiene de realizar la accion.
 * @return en caso de exito retornara un 0 de lo contrario un -1.
 */
int getFloat(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);

/**
 * funcion para realizar todas las operaciones del main.
 * @param latam parametro precio para latam que ingreso el usuario.
 * @param aerolineas parametro precio para aerolineas que ingreso el usuario.
 * @param kilometros parametro cantidad de kilometros que ingreso el usuario.
 * @param debitoL puntero para guardar el precio con debito de latam en float.
 * @param debitoA puntero para guardar el precio con debito de aerolineas en float.
 * @param creditoL puntero para guardar el precio con credito de latam en float.
 * @param creditoA puntero para guardar el precio con credito de aerolineas en float.
 * @param bitcoinL puntero para guardar el precio con BTC de latam en float.
 * @param bitcoinA puntero para guardar el precio con BTC de aerolineas en float.
 * @param unitarioL puntero para guardar el precio unitario por kilometros de latam en float.
 * @param unitarioA puntero para guardar el precio unitario por kilometros de aerolineas en float.
 * @param diferencia puntero para guardar la diferencia de precio entre latam y aerolineas.
 * @return en caso de exito retornara un 0 de lo contrario un -1.
 */
int calcular(float latam, float aerolineas, float kilometros, float* debitoL, float* debitoA, float* creditoL, float* creditoA, float* bitcoinL, float* bitcoinA, float* unitarioL, float* unitarioA, float* diferencia);

/**
 * funcion para mostrar los resultados de los calculos.
 * @param kil parametro cantidad de kilometros en float.
 * @param lat parametro precio de latam en float.
 * @param aer parametro precio de aerolineas en float.
 * @param debL parametro precio con debito de latam en float.
 * @param debA parametro precio con debito de aerolineas en float.
 * @param creL parametro precio con credito de latam en float.
 * @param creA parametro precio con credito de aerolineas en float.
 * @param bitL parametro precio con BTC de latam en float.
 * @param bitA parametro precio con BTC de aerolineas en float.
 * @param uniL parametro precio por kilometro de latam en float.
 * @param uniA parametro precio por kilometro de aerolineas en float.
 * @param difP parametro diferencia de precio entre latam y aerolineas en float.
 */
void mostar(float kil,float lat,float aer,float debL,float debA,float creL,float creA,float bitL,float bitA,float uniL,float uniA,float difP);

/**
 * funcion para hacer una carga forzada de datos "Km=7090" "Aerolineas=162965" "Latam=159339".
 * @param latam puntero para precio para latam a 159339 en float.
 * @param aerolineas puntero para precio aerolineas a 162965 en float.
 * @param kilometros puntero para cantidad de kilometros a 7090 en float.
 * @param debitoL puntero para guardar el precio con debito de latam en float.
 * @param debitoA puntero para guardar el precio con debito de aerolineas en float.
 * @param creditoL puntero para guardar el precio con credito de latam en float.
 * @param creditoA puntero para guardar el precio con credito de aerolineas en float.
 * @param bitcoinL puntero para guardar el precio con BTC de latam en float.
 * @param bitcoinA puntero para guardar el precio con BTC de aerolineas en float.
 * @param unitarioL puntero para guardar el precio unitario por kilometros de latam en float.
 * @param unitarioA puntero para guardar el precio unitario por kilometros de aerolineas en float.
 * @param diferencia puntero para guardar la diferencia de precio entre latam y aerolineas.
 */
void cargaForzada(float* latam, float* aerolineas, float* kilometros,float* debitoL, float* debitoA, float* creditoL, float* creditoA, float* bitcoinL, float* bitcoinA, float* unitarioL, float* unitarioA, float* diferencia);

#ifndef GETNUMBER_H_
#define GETNUMBER_H_



#endif /* GETNUMBER_H_ */
