### Parte 1

1. Parte I — Análisis Comparativo del tipo String en Lenguajes de Programación:

Realizar un análisis comparativo de dato String en el lenguaje C versus un
lenguaje de programación a elección. Elanálisisdebecontener,por lo menos,
los siguientes ítems:

a. ¿El tipo es parte del lenguaje en algún nivel?

b. ¿El tipo es parte de la biblioteca?

c. ¿Qué alfabeto usa?

d. ¿Cómo se resuelve la alocación de memoria?

e. ¿El tipo tiene mutabilidad o es inmutable?

f. ¿El tipo es un first class citizen?

g. ¿Cuál es la mecánica para ese tipo cuando 
se los pasa como
argumentos?

h. ¿Y cuando son retornados por una función?

Las anteriores preguntas son disparadores para realizar una análisis
profundo.

## Para realizar este análisis, elegí Python como lenguaje a comparar con C.

## a. 

#### Python:
El tipo de dato es parte del lenguaje a nivel léxico, sintactico y semántico.
Python reconoce como string a cualquier cadena de caracteres encerradas entre "" o bien ''.
En Python es sencillo trabajar con este tipo de datos ya que el lenguaje lo toma como una lista de chars.

#### C
El tipo de dato string no forma parte del lenguaje C. No existe un tipo de datos específico para almacenar texto, sino que se utilizan arrays de char.

## b.

#### Python
El tipo de dato string no forma parte de la biblioteca de python debido a que el lenguaje reconoce al tipo de dato como tal. Es decir, no es necesario llamar a una biblioteca específica para operar con este tipo de dato. 
De todas formas, existen bibliotecas para operar específicamente con este tipo de dato.

#### C
Los strings no son parte de la biblioteca standard, pero existen fuciones para operar con este tipos de dato.

## c.

#### Python

Utiliza como método de codificación de caracteres a UTF-8.

#### C
Al igual que en python, se utiliza UTF-8 para la codificación de los caracteres del alfabeto.

## d.

#### Python 

Python usa tipado dinámico y conteo de referencias para la administración de memoria. Es dinámicamente tipado porque una variable puede tomar valores de distinto tipo. Por otro lado, el conteo de referencias es una técnica para contabilizar las veces que un determinado recurso está siendo referido. Por lo general ese recurso son bloques de memoria y la técnica permite establecer cuando no existe ninguna referencia a ese bloque y éste puede ser liberado. Es una técnica de muy fácil implementación, pero tiene una importante desventaja: Si las referencias forman un ciclo los objetos involucrados no se liberarán nunca. Otra técnica más efectiva es el uso de un garbage collector.
#### C
El lenguaje C implementa el tipo de gestión manual, es decir que cada programa debe explícitamente pedir memoria y liberarla.

Para esto, necesitamos un API. En C tenemos un conjunto de funciones para:

- Pedir memoria: malloc()
- Liberar memoria: free()

##  e. 
#### Python
En python los tipos de datos son inmutables por defecto, aunque en algunos casos esta regla se rompe cuando hablamos de listas y tuplas.

#### C
En C, los tipos de datos son mutables por defecto.

## f.
En el diseño de lenguaje de programación , un first class citizen (también tipo , objeto , entidad o valor ) en un lenguaje de programación dado es una entidad que soporta todas las operaciones generalmente disponibles para otras entidades. Estas operaciones generalmente incluyen pasar como argumento, devolver de una función, modificar y asignar a una variable. 

#### Python

En phython, los strings son un first class citizen desde la versión 3.x.x y posteriores.

#### C

Duda para la clase.

## g.
#### Python

Un string puede ser argumento simplemente con indicar el comienzo de la cadena.

#### C
El tipo String se puede enviar como argumento de una función a través de un puntero señalando el comienzo de la cadena y además la cadena debe finalizar con un caracter nulo de finalización: '\0'.

## h.

#### Python

Un resultado de este tipo puede ser devuelto como tal, sin necesidad de usar estructuras para su implementación.
#### C 
Es devuelto como un puntero que señala la dirección de memoria donde se encuentra el primer elemento de la  cadena
