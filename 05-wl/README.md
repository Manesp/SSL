### Árboles de exoresión

1.b)

![arbol1](Index/arbol1.png)

1.c)

![arbol2](Index/arbol2.png)

2.a)

![digrafo](Index/INOUT.png)

2.b)

A = (Q, ∑, T, q0, F)
- Donde:
    - Q = {IN, OUT}
    - ∑ = ASCII
    - q0 = OUT
    - F = {IN, OUT} = Q
    - T = {OUT si ∑ = {"","\n","\t"} / IN si ∑ != {"","\n","\t"}}

3.a.II)

Versión K&R

- Ventajas 
    - Utiliza un código más corto, por lo tanto más simple.
    - Utiliza #define para las variables de valores IN y OUT lo que facilita la interpretación del código.
    - Usamos solamente enteros, lo que simplifica la lógica del código.

- Desventajas
    - complementar con la clase.

Versión Enum y Switch

- Ventajas
    - El uso del switch hace que el código se asemeje más al modelo de la maquina de estados.
    -

- Desventajas
    - complementar en clase
