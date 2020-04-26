# SSL

### Trabajo práctico #2

## Hello.c

```C
#include <stdio.h>

int main(void) {
printf("Hello, World!\n");
}
```

## Hello.cpp

```C++
#include <iostream>

int main() {
    std :: cout << "Hello world!/n";
    return 0;
}
```

## Java

```Java
public class HelloWorld {

    public static void main(String[] args) {
        // Prints "Hello, World" to the terminal window.
        System.out.println("Hello, World");
    }

}
```

|           | Similitudes                                                                                                                                                                  | Diferencias                                                                                                                                     |
|-----------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------|
| Léxico    | Caracteres especiales como ";", "{}", "()"                                                                                                                                   | Palabras reservadas de cada lenguaje: Ej: Java (public) Bibliotecas particulares de cada lenguaje: C++ (iostream) C (stdio.h)                   |
| Sintaxis  | Entre C y C++, la función tiene una estructura similar: tipo de retorno + identificador de la función Se utiliza el standard output como salida para la cadena de caracteres | En Java se utiliza otra estructura semántica: nivel de acceso + palabra reservada + tipo de retorno + identificador de la función + argumentos |
| Semántica | Son iguales ya que todos tienen el mismo significado                                                                                                                         |                                                                                                                                                 |