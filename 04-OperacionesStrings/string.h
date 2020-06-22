/*
SSL
04-OperacionesStrings
Manuel Ignacio Espina
170.366-3
*/

#include <stdio.h>
#include <stdbool.h>

/* La función cuenta la cantidad de caracteres de la cadena que recibe. */
size_t GetLength(const char * str);

/* La función valida si la cadena que recibe es vacía. Esto quiere decir que, 
retornará un valor booleano dependiendo el valor de la cadena que ingrese. */
bool IsEmpty(const char * str);

/* La función toma una cadena y la multiplica por si misma las veces que el 
usuario lo indique. */
char * Power(const char * string, unsigned int power);

/* La función valida si dos cadenas ingresadas son idénticas. Retornará 
true, si son iguales, o false, si son diferentes. */
bool AreEqual(const char * str1, const char * str2);
