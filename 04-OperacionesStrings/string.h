/*
SSL
04-OperacionesStrings
Manuel Ignacio Espina
170.366-3
*/


#include <stdio.h>
#include <stdbool.h>

/* La función cuenta la cantidad de caracteres de la cadena que recibe. 
Se asume a que los  punteros apuntan a cadenas.
*/
size_t GetLength(const char * str);

/* La función valida si la cadena que recibe es vacía. Esto quiere decir que, 
retornará un valor booleano dependiendo el valor de la cadena que ingrese. 
Se asume a que los  punteros apuntan a cadenas.*/
bool IsEmpty(const char * str);

/* La función toma una cadena y la multiplica por si misma las veces que el 
usuario lo indique. 
Se asume a que los  punteros apuntan a cadenas.*/
char * Power(const char * string, unsigned int power);

/* La función valida si dos cadenas ingresadas son idénticas. Retornará 
true, si son iguales, o false, si son diferentes. 
Se asume a que los  punteros apuntan a cadenas.*/
bool AreEqual(const char * str1, const char * str2);
