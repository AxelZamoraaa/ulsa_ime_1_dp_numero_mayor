# Práctica 5: El mayor de tres números

> **En esta práctica todo es tuyo:** el análisis, la receta, el código y las pruebas. Llena cada sección en la fase que se indica.

## 1. Descripción del problema (Fase 1)

El programa define el numero mas grande o mayor en una serie de 3 numeros, esto podria servir en una escuela o empresa en la cual se quiera ver el rendimiento de las personas asi viendo quien tiene la mayor cantidad de trabajos realizados o cosas asi

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
num1: double el primer numero que se escribe
num2: double el segund numero
num3: double el tercer numero

**Salida:**
mayor: double el mayor de los tres

**¿Muestro el valor del mayor o cuál de los tres fue (primero, segundo o tercero)? ¿Por qué?**
Muestra el valor del mayor, ya que eso es lo que pide que se haga en el programa
**¿Qué función de `utilerias.h` uso para leer los números? ¿Por qué esa y no la otra?**
leerDecimal, porque los numeros si pueden ser decimales
leerEntero rechazaria los valores decimales y los cortaria

## 3. Restricciones e invariante (Fases 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- Los tres datos deben ser numeros
- El resultado debe ser ccorrecto sin importar el orden

**¿Hace falta validar el rango de los números (por ejemplo, rechazar el 0 o los negativos)? ¿Por qué?**
no, porque el problema no limita el rango 

**¿Qué hace mi programa cuando dos números son iguales y son los mayores? ¿Y cuando los tres son iguales?**
dice el numero mas alto y ya, cuando son tres dice que los tres son iguales

**¿Quién detecta cada error?** (¿qué revisa la función de `utilerias.h` y qué reviso yo?)
revisa que lo que se escriba sea un numero valido y lo vuelve a pedir si no es 

**Invariante** (justo antes de mostrar el resultado, ¿qué es seguro sobre el valor que voy a mostrar?):
mayor es uno de los tres numeros y es mayor o igual a los otros numeros

## 4. Casos resueltos a mano (Fase 1)

| Caso | Número 1 | Número 2 | Número 3 | Mayor calculado a mano |
|---|---|---|---|---|
| 1 (el mayor en primera posición) | 9 | 4 | 3 | 9 |
| 2 (el mayor en segunda posición) | 2 | 20 | 0 | 20 |
| 3 (el mayor en tercera posición) | 900 | 3 | 10000 | 10000 |
| 4 (con un empate) | 2 | 2 | 2 | 2 |
| 5 (con negativos) | -4 | -1 | -100 | -1 |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las preguntas. -->

**¿Probé mi receta a mano con mis 5 casos?** Sí / 
**¿Tuve que corregirla? ¿Qué cambié?** agregue el hecho de que acepte empates
**¿Cuántas versiones de mi receta escribí hasta la final?** 3
**¿Se me ocurrió otra forma de resolver el problema? ¿Cuál? ¿Por qué elegí la que usé?**
no

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o numero_mayor
./numero_mayor
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso de empate (por ejemplo 7, 7 y 3). -->

Programa: el mayor de tres numeros
Primer numero: 1
Segundo numero: 2
Tercer numero: 3
El mayor es: 3
Quieres intentarlo otra vez? (si/no): no
Gracias por usar el programa

## 8. De la receta al código (Fase 3)
<!-- Para cada paso de TU receta, escribe la instrucción (o instrucciones) de C++ que lo implementa. Agrega las filas que necesites. -->

| Paso de la receta | Instrucción de C++ que lo implementa |
|---|---|
| 1. Mensaje de bienvenida | cout << "Bienvenido al mayor de tres numeros" |
| Repetir mientras sea "si" | while (respuesta == "si") |
| leer los 3 numeros | num1 = leerDecimal("Primer numero: "); igual para el 2 y el 3 |
| los 3 iguales | if (num1 == num2 && num2 == num3) |
|Mostrar el mayor | cout << "El mayor es: " << mayor << endl; |

**¿Hubo algún paso de mi receta que me costó traducir a C++? ¿Cuál y por qué?**
no

## 9. Experimentos (Fase 3)

**Experimento A: ¿qué te dijo el compilador con `if (a > b > c)`? ¿Qué mostró el programa con 3, 2 y 1? ¿Por qué?**
al trabajar con un significado matematico, con 3 2 1 verifica que 3>2 y que 1 y si 1>1 es falso entonce no detecta el 3 

**Experimento B: al cambiar `>=` por `>` (o al revés), ¿qué mostró el programa con 7, 7, 3 y con 5, 5, 5? ¿Por qué?**
al no cumplirse la condicion para num1 ni num, cae en el else y muestra 3, lo cual es incorrecto

**Experimento C (opcional): con `if (a = b)`, ¿qué te dijo el compilador? ¿Qué le pasó al valor de `a`?**
el compilador marca error y sugiere cambiar los datos

## 10. Tabla de pruebas (Fase 4)

| Caso | Entradas | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Mayor primero | 9, 4, 2 | 9 | 9 | si |
| Mayor en medio | 4, 9, 2 | 9 | 9 | si |
| Mayor al final | 2, 4, 9 | 9 | 9 | si |
| Empate arriba (1.º y 2.º) | 7, 7, 3 | 7 | 7 | si |
| Empate arriba (1.º y 3.º) | 7, 3, 7 | 7 | 7 | si |
| Empate abajo | 8, 3, 3 | 8 | 8 | si |
| Los tres iguales | 5, 5, 5 | 5 | los tres son iguales | no |
| Todos negativos | -4, -1, -9 | -1 | -1 | si |
| Con cero | -2, 0, -5 | 0 | 0 | si |
| Decimales cercanos | 2.5, 2.7, 2.6 | 2.7 | 2.7 | si |
| Texto | `abc` (luego 3), 1, 2 | vuelve a pedir el dato; 3 | marca un ciclo infinito de pedir el primer numero | no |
| Caso propio 1 | 1,1,1 | los tres son iguales | los tres son iguales | si |
| Caso propio 2 | 2, 100, -900 | 100 | 100 | si |

## 11. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | que no marque el error con as letras de pedirlo otra vez infinitamente | nada | no |
| 2 | que acepte los decimales | usar leer decimal| si |

**Reto elegido (opcional):** _____

## 12. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| ninguna | nada |

## 13. Reflexión final

**¿Qué aprendí con esta práctica?**
a usar mejor el if else y else if

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
intentar sacar la receta en menos intentos

**¿Qué fue lo más difícil y cómo lo resolví?**
empezar a hacer la receta, basarme en recetas pasada

**¿Qué pregunta me quedó sin responder?**
porque me marca el error del usar letras, repitiendo lo de poner el primer numero infinitamente

**¿Qué fue más fácil para mí: la Práctica 3 (receta propia con un paso de ejemplo), la 4 (receta ajena) o esta (todo desde cero)? ¿Por qué?**
receta ajena, porque ya solo lo tenia que plasmar en forma de codigo

**¿Pensé en los empates antes de programar o los descubrí al probar?**
si lo pense antes de empezar a programar

## 14. Lista de verificación antes de entregar (Fase 5)

- [ ] Llené las secciones 1 a 13 (no quedan `_____`)
- [ ] Escribí mi receta completa en `RECETA.md` antes de programar
- [ ] Cada bloque de `main.cpp` tiene su comentario `// Paso N`, de acuerdo con mi receta
- [ ] Mi programa compila sin advertencias
- [ ] Probé todos los casos de la tabla, incluidos los empates
- [ ] Hice los Experimentos A y B y dejé el código correcto al terminar
- [ ] No modifiqué `utilerias.h`
- [ ] Hice al menos 3 commits con mensajes claros
- [ ] Hice `git push` y verifiqué mi fork en GitHub
- [ ] Mi fork se llama `ulsa_ime_1_dp_numero_mayor` y el código está en `main.cpp`
- [ ] Entregué el enlace de mi fork en Classroom