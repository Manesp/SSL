# Examen #0 

### Primera Parte

1. Indique la tarea más representativa para la cual un Ingeniero en Sistemas de Información está calificado.

La tarea más representativa para la que un Ingeniero en Sistemas de Información está calificado es realizar el Análisis, Diseño e Implementación de sistemas de información. 

2. Defina información

* La información es un conjunto de datos que tiene un sentido, no solo porque representa  una realidad, sino por que a alguien le interesa. 

* Sistemas de información, es un conjunto de subsistemas con un fin en común, que analiza y procesa datos para la toma de decisiones.

3. Indique las asignaturas del área de programación.
 
Las Asignaturas del area de programación son:

- Matemática Discreta
- Algoritmos y Estructuras de Datos   
- Sintaxis y Semántica de los Lenguajes 
- Paradigmas de Programación 
- Gestión de Datos

4. Indique las asignaturas del área de sistemas de información.

Las asignaturas del área de sistemas de información son:   

- Análisis de requisitos
- Análisis de sistemas
- Diseño de sistemas
- Ingeniería de Software
- Sistemas y organizaciones
- Proyecto final

5. Indique el paradigma de programación aplicado en primer año de la carrera.

El paradigma de programación utilizado en el primer año de la carrera, fue un paradigma de programación estructurado.
*Utilizamos un paradigma procedural.

6. Defina abstracción.

Proceso de análisis del mundo real con el propósito de interpretar los aspectos esenciales de un problema y expresarlo en términos precisos.

### Segunda Parte

1. Indique diferencias entre secuencia y conjunto.

En una secuencia a diferencia de un conjunto, el orden en que aparecen los términos sí es relevante y un mismo término puede aparecer en más de una posición. 

2. Defina el concepto matemático secuencia.

Una secuencia es un grupo de números o de otros elementos matemáticos que forman un conjunto ordenado.

3. Defina función matemática.

Una función matemática es una relación que se establece entre dos conjuntos, a través de la cual a cada elemento del primer conjunto se le asigna un único elemento del segundo conjunto o ninguno.

4. Defina grafo.

Un grafo es una estructura formada por vértices unidos a través de aristas y se utiliza para representar determinadas situaciones. 



5. Defina partición de un conjunto.

Una partición de un conjunto es una división del mismo, en subconjuntos que no son vacíos y que no tienen ningún elemento en común.

6. Sea X={a,b} indique P(X)

P(X) es la función partición del conjunto X.

Conjunto de partes o powerset. 

7. Defina Lenguaje Formal.

Un lenguaje es un conjunto de palabras y métodos para combinar palabras, que es usado y entendido por un extenso grupo de personas. 
Los lenguajes formales se caracterizan por tener reglas gramaticales preestablecidas. Son ejemplo de este tipo de lenguajes los lenguajes de programación.

8. Defina autómata finito.

Un autómata finito es una herramienta abstracta que se utiliza para reconocer determinado Lenguaje Regular. 
Es un modelo matemático de un sistema que recibe una cadena formada por caracteres de un determninado alfabeto y determina si esa cadena pertenece o no al lenguaje que reconoce.

### Tercera parte

1. Defina algoritmo.

Es un conjunto de reglas, ordenadas de forma lógica, finito y preciso para la
solución de un problema, con utilización o no de un computador.

2. Defina programación estructurada.

La programación estructurada es un paradigma, que hace uso de estructuras de control para la ejecución de un programa. También facilita la creación de componentes re-utilizables, dividiendo el programa en módulos más pequeños.

3. Indique las tres estructuras de control de flujo de ejecución de la programación estructurada.

Las estructuras de control de flujo de la programación estructurada son la secuencia, selección y repetición.


4. Indique las diferencias entre parámetro y argumento.

- Parámetro: variable cuya característica principal es que se utiliza para transferir información entre módulos.
- Argumento: valor que toma un parámetro al momento de la transferencia de información.

5. Explique las dos formas de transferencia de argumentos.

 - Por valor: se comparte una copia del dato entre los módulos, por lo cual las modificaciones realizadas por el segundo módulo no afectan al del primero.
 - Por referencia: se comparte la dirección de memoria donde el dato se encuentra almacenado, por lo cual tanto el módulo que realiza la llamada, como el llamado pueden acceder a dicho dato y modificarlo.

6. Explique las diferencias entre parámetros de entrada, de salida y de entrada/salida

- Parámetro dato (o parámetro de entrada):
El valor del argumento es asignado al parámetro en el momento de la llamada. El argumento
puede ser una expresión del mismo tipo de dato que el parámetro. Se trata de una comunicación unidireccional: solamente se transmite información desde el punto del llamado hacia la acción.
- Parametro Salida (o parámetro de salida):
Se devuelve un resultado asignándole un valor.
- Parámetro dato-resultado (o parámetro de entrada y salida):
El valor del argumento es asignado al parámetro en el momento de la llamada y al final de la ejecución el valor del parámetro es asignado al argumento. Se trata de una comunicación
bidireccional. Si la ejecución de la acción provoca un cambio en el valor del parámetro, en el momento del retorno el argumento tendrá el valor del parámetro al finalizar la ejecución.
Un argumento para un parámetro dato-resultado debe ser una variable del mismo tipo de dato
que el parámetro y no puede ser una expresión.

**
- Entrada: recibe la funcion y sirve para haceer algún cálculo
- Salida: se utiliza para obtener un resultado
- Entrada salida: Reciben un dato, lo usa para calcular y el resultado lo sobrescribe en lo que era la entrada

7. Defina tipo de dato abstracto.

Un tipo de dato abstracto está definido por un conjunto de operaciones que representan el comportamiento, sin mencionar cómo van a ser implementadas. *Lo podemos utilizar sin importar como se van a resolver los pedidos.

8. Indique las diferencias entre una pila y una cola

- Pila: método de organización de datos tipo LIFO (Last In First Out).
- Cola: método de organización de datos tipo FIFO (First In First Out).

9. Defina archivo.

Un archivo es una estructura de dato que se utiliza para la conservación permanente de los datos

10. Diseñe un algoritmo que dado un arreglo de naturales a y su longitud n calcule el promedio.

```c++
float promedio(int a[], int n)
{  
    int sum = 0;  
 for (int i = 0; i < n; i++)
    {  
        sum += a[i];  
    }
    return sum / n;  
}
