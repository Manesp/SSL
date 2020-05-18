## Secuencia de pasos.

### Pasos 1 y 2 

- Comando ejectutado: C:\Users\Manu\Desktop\Trabaj>gcc hello2.c -E > hello2.i

- Resultados obtenidos.
    - Obtenemos hello2.i
    - El proceso del preprocesamiento elimina los comentarios que se encuentran en el código.
    - Elimina del código los archivos del encabezado, en este caso include <stdio.h>
    - Agrega al código una linea # 2 hello2.c
  
- Errores:
  - No hay errores en la fase de preprocesamiento.

### Paso 3, 4 y 5

- Como observación se declara la función printf como entero.
  
- Comando ejecutado: C:\Users\Manu\Desktop\Trabaj>gcc hello3.c -E > hello3.i

- Resultados obtenidos:
  - Obtenemos hello3.i
  - A diferencia de hello3.c, hello3.i nos está avisando que es lo que va a compilar
  - A diferencia de hello2.i, cuando preprocesamos hello3.c no obtenemos el mismo comportamiento.

- Errores: 
  - No hay errores en esta etapa.

### Paso 6

- Comando ejecutado: C:\Users\Manu\Desktop\Trabaj>gcc hello3.c -S

- Resultados obtenidos
  - Obtenemos hello3.s con una linea que indica "	.file	"hello3.c""
  
  -   
    ```cmd 
    warning: implicit declaration of function 'prontf'; did you mean 'printf'? [-Wimplicit-function-declaration]
    4 |  prontf("La respuesta es %d\n");
      |  ^~~~~~
      |  printf
      

- Errores obtenidos: 
  
  - ```cmd 
    hello3.c:4:2: warning: implicit declaration of function 'prontf'; did you mean 'printf'? [-Wimplicit-function-declaration]
    4 |  prontf("La respuesta es %d\n");
      |  ^~~~~~
      |  printf

hello3.c:4:2: error: expected declaration or statement at end of input

## Paso 7

- Comando ejecutado: C:\Users\Manu\Desktop\Trabaj>gcc hello4.c -S

- Se corrige el error al compilar hello3.c en hello4.c
- Resultados obtenidos:
  - Obtenemos como resultado hello4.s
  
- Errores:
  - No hay errores en la fase de compilación.

## Paso 8

- En hello4.s obtenemos instrucciones en assembler del código compilado

## Paso 9 
- Comando ejecutado: C:\Users\Manu\Desktop\Trabaj>gcc hello4.c 

- Resultados obtenidos:
  - Como resultado obtenemos hello4.o, es un archivo binario equivalente a hello4.c

- Errores:
  - No obtenemos errores en esta etapa.
  - ```cmd
      warning: implicit declaration of function 'prontf'; did you mean 'printf'? [-Wimplicit-function-declaration]
    4 |     prontf("La respuesta es %d\n");
      |     ^~~~~~
      |     printf

## Paso 10

- Comando ejecutado: 
  - gcc hello4.o -o hello4.out
  - ./hello4.out
                        
- Resultados obtenidos:
  - Falla debido a que no reconoce el la función prontf

- Errores:
    - ```cmd
      hello4.c:4:5: warning: implicit declaration of function 'prontf'; did you mean 'printf'? [-Wimplicit-function-declaration]
      4 |     prontf("La respuesta es %d\n");
      |     ^~~~~~
      |     printf
 - ```cmd 
    c:/mingw/bin/../lib/gcc/mingw32/9.2.0/../../../../mingw32/bin/ld.exe: C:\Users\Manu\AppData\Local\Temp\ccobEcZn.o:hello4.c:(.text+0x16): undefined reference to `prontf'
  collect2.exe: error: ld returned 1 exit status

- El compilador indica que prontf no está declarado 

## Paso 11

- Comandos ejecutados: 
  - C:\Users\Manu\Desktop\Trabaj>gcc hello5.c -o hello5.out


- Resultados obtenidos:
  - Obtenemos hello5.out
  - Obtenemos el ejecutable equivalente a hello5.c
  

- Errores:
  - No hay errores en esta etapa

## Paso 12

- Comandos ejecutados:
  -  C:\Users\Manu\Desktop\Trabaj>hello5.out

- Resultados obtenidos:
  - Al ejecutar hello5.out nos da "La respuesta es 4200688"

## Paso 13

- Comandos ejecutados:
  - C:\Users\Manu\Desktop\Trabaj>gcc hello6.c -o hello6.out

- Resultados:
  - Obtenemos el ejecutable.
  - Al ejecutar hello6.out obtenemos "La respuesta es 42"

- Errores:
  - No hay errores en esta fase

## Pasos 14 y 15

- Comando ejecutado:

    $ gcc hello7.c -o hello7.out
    $ ./hello7.out

- Resultado obtenido:

  - Archivo `hello7.out`
  - Se genera el archivo ejecutable, equivalente al código del archivo fuente
  - Al ejecutar el archivo resultante, se visualiza por consola `La respuesta es 42`
  - El código funciona debido a que la función printf utilizada, se busca en la biblioteca estándard, la cual se linkea por defecto por GCC durante la fase de vinculación. 

- Errores:

```cmd
hello7.c:3:5: warning: implicitly declaring library function 'printf' with type 'int (const char *, ...)' [-Wimplicit-function-declaration]
    printf("La respuesta es %d\n", i);
    ^
hello7.c:3:5: note: include the header <stdio.h> or explicitly provide a declaration for 'printf'
1 warning generated.
```

- Se está utilizando la función printf de manera implícita, es decir no se incluyó el header con la biblioteca estándar, ni tampoco se agregó explicitamente la declaración de la función **(warning)**