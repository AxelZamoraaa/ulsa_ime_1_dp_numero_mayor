# Práctica: El mayor de tres números

## Sobre esta práctica

**Problema:** escribir un programa en C++ que pida tres números y muestre cuál de los tres es el mayor.

**Lo que vas a practicar:** decisiones (`if`, `else if`, `else`), operadores de comparación (`>`, `>=`, `==`) y operadores lógicos (`&&`, `||`), el manejo de empates y, sobre todo, **recorrer tú solo el proceso completo**: entender, diseñar, implementar, probar y publicar.

**Idea central:** en la Práctica 3 diseñaste tu receta a partir de un primer paso de ejemplo. En la Práctica 4 programaste a partir de una receta ajena. **Esta vez vuelves a diseñar tu propia receta, y además el análisis y el código son tuyos.** El problema parece muy sencillo, y precisamente por eso es un buen ejercicio: la dificultad no está en el código, sino en pensar en todos los casos *antes* de programar. ¿Qué pasa si dos números son iguales? ¿Y si los tres lo son?

**Repositorio base:** https://github.com/narizwallace/ulsa_ime_1_dp_numero_mayor

**Entregable:** el enlace a tu repositorio, publicado en Google Classroom.

**El proceso que vas a seguir:**

| Fase | Qué haces | ¿Quién la hace? |
|---|---|---|
| 0 | Preparar tu entorno (fork y clonar) | Tú |
| 1 | Entender el problema | Tú |
| 2 | Diseñar la receta | Tú |
| 3 | Implementar | Tú |
| 4 | Probar y mejorar | Tú |
| 5 | Publicar en GitHub | Tú |

**Cómo usar el `README.md`:** ya viene en el repositorio base, con espacios en blanco (`_____`) en todas sus secciones. Los vas llenando fase por fase; cada fase de esta guía te indica qué secciones llenar. No es necesario que uses el archivo README.md, también puedes copiar el contenido y hacerlo en un editor de texto de tu elección. Solo asegúrate de subir el archivo equivalente a tu repositorio.


## Fase 0. Preparar tu entorno

1. Entra al repositorio base: https://github.com/narizwallace/ulsa_ime_1_dp_numero_mayor
2. Haz clic en **Fork** (arriba a la derecha) para crear tu propia copia en tu cuenta de GitHub.
3. En tu fork, haz clic en **Code**, copia la URL y clónalo en tu computadora.

Estos son los comandos para clonar un repositorio desde tu terminal o línea de comando:
```bash
git clone <URL-de-tu-fork>
cd ulsa_ime_1_dp_numero_mayor
```
También puedes hacer el clone desde GitHub Desktop como lo hemos hecho antes.


4. Abre la carpeta en tu editor y revisa los archivos:

```
ulsa_ime_1_dp_numero_mayor/
├── README.md      ← tú llenas todas las secciones
├── PRACTICA.md    ← este documento
├── RECETA.md      ← solo trae el primer paso: tu receta completa va aquí
├── main.cpp       ← punto de partida de tu programa (casi vacío)
├── utilerias.h    ← funciones de apoyo para leer números (no lo modifiques)
├── .vscode/       ← configuración del editor (no lo modifiques)
└── .gitignore     ← evita subir el ejecutable
```

**Todo tu trabajo va dentro de esta carpeta.**

> **Nota técnica: sin autocompletado.**
> En este proyecto el editor no te sugiere código: lo escribes todo tú para aprender la sintaxis. Copilot Chat sí está disponible para resolver dudas, y los errores se siguen marcando en rojo mientras escribes.

> **Nota técnica: ¿qué función de `utilerias.h` necesitas?**
> `utilerias.h` trae las dos funciones que ya conoces: `leerEntero`, que solo acepta enteros, y `leerDecimal`, que acepta decimales. Esta vez **tú decides** cuál usar.
> **Pregunta guía:** ¿el problema dice que los números sean enteros? ¿Qué pasaría si el usuario quiere comparar 2.5, 2.7 y 2.6?

---

## Fase 1. Entender el problema

*Aquí no se escribe código. Llena las secciones 1 a 4 de tu `README.md`.*

**Preguntas guía**

1. Explica el problema con tus palabras, en una o dos frases.
2. ¿Cuáles son las entradas? ¿Cuántas son y de qué tipo de dato?
3. ¿Cuál es la salida? ¿Muestras **el valor** del mayor (`7`) o **cuál** de los tres fue (`el segundo`)? Decide y justifícalo.
4. ¿Entiendes el problema? Compruébalo: explícaselo a un compañero en 1 minuto, sin mirar tus notas.
5. ¿Dónde aparece este problema en mecatrónica? (el sensor con la lectura más alta, el motor más caliente de tres, la mayor de tres mediciones para detectar un pico...).

**Restricciones: ¿qué debe cumplirse?**

- ¿Hay algún número que **no** sea válido para este problema? ¿El 0? ¿Un negativo? En la Práctica 3 validaste el rango de las medidas; ¿aquí hace falta? ¿Por qué?
- ¿Qué haces si dos números son iguales y son los mayores? ¿Y si los tres son iguales?
- ¿Quién detecta cada error: la función de `utilerias.h` o tu programa?

**Resuelve a mano al menos 5 casos:** el mayor en primera posición, en segunda, en tercera, uno con empate y uno con negativos. Los usarás como pruebas más adelante.

> **Nota técnica: un problema "fácil" no es un problema sin casos.**
> Los errores más comunes de los programadores no están en la idea principal, sino en los casos que nadie pensó: empates, negativos, ceros, valores repetidos. Antes de diseñar, haz la lista de casos *raros*. Si tu receta los resuelve a mano, tu código tiene muchas más probabilidades de resolverlos también.

---

## Fase 2. Diseñar la receta

*Escribe tu receta completa en `RECETA.md`. Llena las secciones 3 y 5 de tu `README.md`.*

> **Nota técnica: casi una hoja en blanco.**
> `RECETA.md` solo trae el primer paso, para recordarte el formato. Todo lo demás lo decides tú: qué pedir, cómo comparar, qué hacer con los empates y qué mostrar. Usa lo que aprendiste en las prácticas 3 y 4. Recuerda que tu primera versión no tiene que ser la final.

**Preguntas que te ayudan a construir la receta**

- ¿Qué es lo primero que ve el usuario al ejecutar el programa?
- ¿Qué datos pides y en qué orden?
- ¿Cuántas comparaciones necesitas para saber cuál es el mayor? ¿Podrías hacerlo con menos?
- ¿Comparas cada número contra los otros dos, o vas revisando los números uno por uno? **Hay más de una forma correcta de resolverlo.** ¿Cuál se te ocurre primero? ¿Se te ocurre otra?
- Si tu receta revisa los números uno por uno, ¿necesitas una variable extra? ¿Para qué?
- ¿Qué hace tu receta cuando dos números son iguales? Recórrela a mano con 7, 7, 3. ¿Muestra algo?
- ¿Qué muestras al final y con qué mensaje?

**Vocabulario de pseudocódigo** (úsalo como referencia, no es una receta):

```
MOSTRAR "mensaje"                LEER variable
variable ← expresión             variable ← leerDecimal("mensaje")
SI condición ENTONCES ... SINO ... FIN SI
SI condición ENTONCES ... SINO SI condición ENTONCES ... SINO ... FIN SI
condición Y condición            condición O condición
MIENTRAS condición HACER ... FIN MIENTRAS
REPETIR ... HASTA QUE condición
```

**¿Cómo sé si mi receta es buena?** Revísala con estas preguntas:

- ¿Otra persona podría seguirla sin preguntarte nada?
- ¿Cada paso hace una sola cosa?
- ¿Cubre qué pasa con un dato inválido?
- ¿Tiene un inicio y un fin claros?
- ¿Siempre muestra un resultado, sin importar los números que escriba el usuario?

> **Nota técnica: la invariante en una decisión.**
> En las prácticas anteriores la invariante vivía en un ciclo. Aquí también puedes encontrar una.
> **Pregunta guía:** justo antes de mostrar el resultado, ¿qué es seguro sobre el valor que vas a mostrar respecto a los tres números? Si tu receta revisa los números uno por uno, ¿qué es siempre cierto después de revisar cada uno? Escríbelo como una frase que siempre se cumple.

**Prueba tu receta a mano** con tus 5 casos. Anota cómo cambia cada variable paso a paso. Si algo no cuadra, corrige la receta ahora, no el código después.

---

## Fase 3. Implementar

*Trabaja sobre `main.cpp`. Llena las secciones 7, 8, 9 y 12 de tu `README.md`.*

**Preguntas guía**

- ¿Qué variables necesitas y de qué tipo será cada una? ¿Con qué valor empiezan?
- ¿Cada paso de tu receta tiene su línea (o líneas) de código? Si no, ¿qué falta?
- ¿Tu código hace **exactamente** lo que dice tu receta, ni más ni menos?

**Así se ve tu punto de partida en `main.cpp`:**

```cpp
// Práctica 5: El mayor de tres números
// Traduce TU receta de RECETA.md a C++, paso por paso.
// Deja el comentario "// Paso N" sobre cada bloque, con la numeración de TU receta.

// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿Qué función de utilerias.h vas a usar? ¿Por qué esa y no la otra?
#include "utilerias.h"

int main() {
    // Variables (siempre inicializadas)
    // TODO: ¿cuántas necesitas? ¿De qué tipo? ¿Necesitas alguna además de los tres números?

    // Paso 1: mensaje de bienvenida
    // TODO

    // TODO: el resto de tu receta, paso por paso.
    //       ¿Tu decisión necesita una cadena if / else if / else o varios if independientes?
    //       ¿Qué pasa con tu código si dos números son iguales?

    // ¿Qué significa return 0;?
    return 0;
}
```

**Construye en pasos pequeños.** Compila, prueba y haz un commit después de cada uno:

1. Muestra la bienvenida, lee los tres números y muéstralos de vuelta, sin comparar nada.
2. Agrega la decisión y prueba con tres números distintos.
3. Haz los Experimentos A y B.
4. Prueba los empates y corrige lo que haga falta.

**Para compilar y ejecutar:**

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o numero_mayor
./numero_mayor
```

**Traza tu receta en tu código.** Deja un comentario `// Paso N` sobre cada bloque, con la numeración de tu receta. Al terminar, llena la sección 8 de tu `README.md`: para cada paso de tu receta, la instrucción de C++ que lo implementa. Si un paso no tiene código, o hay código que no corresponde a ningún paso, algo no cuadra.

> **Nota de C++: operadores de comparación y lógicos.**
> `>`, `<`, `>=`, `<=`, `==` (igual) y `!=` (distinto) comparan dos valores y devuelven `true` o `false`. Para unir condiciones se usan `&&` (y: deben cumplirse las dos), `||` (o: basta con que se cumpla una) y `!` (no: invierte la condición).
> `if (a >= b && a >= c)` se lee "si `a` es mayor o igual que `b` **y** mayor o igual que `c`".

> **Nota de C++: `if`, `else if` y `else`.**
> Con una cadena `if` / `else if` / `else` el programa elige **un solo camino**: en cuanto una condición se cumple, las demás ya no se revisan, y si ninguna se cumple se ejecuta el `else`. Con varios `if` independientes se revisan **todos**, así que podrían ejecutarse varios a la vez, o ninguno.
> ```cpp
> if (condicion1) {
>     // ...
> } else if (condicion2) {
>     // ...
> } else {
>     // ...
> }
> ```
> **Pregunta guía:** ¿tu receta necesita una cadena `else if` o `if` independientes? ¿Por qué?

> **Nota de C++: el compilador también te habla.**
> **Experimento A (obligatorio):** escribe temporalmente `if (a > b > c)` y compila. Lee con atención la advertencia. Después ejecuta con 3, 2 y 1. ¿Qué pasó? En C++, `a > b > c` **no** significa lo que significa en matemáticas: primero calcula `a > b` (que da `true` o `false`, es decir 1 o 0) y luego compara ese resultado con `c`. Escribe la forma correcta con `&&`. Compilar con `-Wall -Wextra` sirve justamente para esto: una advertencia no detiene la compilación, pero casi siempre señala un error real.

> **Nota de C++: `>` contra `>=`.**
> **Experimento B (obligatorio):** si tu programa usa `>=` en sus comparaciones, cámbialas temporalmente a `>` (o al revés si usa `>`) y prueba con 7, 7, 3 y con 5, 5, 5. ¿Cambió el resultado? ¿El programa mostró algo? Un solo carácter puede hacer que un caso de empate desaparezca. Al terminar, deja la versión que funciona en todos los casos.

> **Nota de C++: `=` no es `==`.**
> **Experimento C (opcional):** escribe `if (a = b)` en lugar de `if (a == b)` y compila. ¿Qué te dice el compilador? Ejecuta con 3, 8 y 5, y muestra después el valor de `a`. ¿Qué le pasó? `=` **asigna**; `==` **compara**. Es uno de los errores más clásicos de C y C++. Vuelve a dejar tu código correcto.

> **Nota de C++: comparar decimales con `==`.**
> Con `double`, `0.1 + 0.2 == 0.3` es **falso**, por la forma en que la computadora guarda los decimales. En esta práctica no te afecta, porque comparas números que el usuario escribe directamente, pero tenlo presente: comparar con `==` decimales que salen de un cálculo es peligroso.

> **Nota de C++: buenas prácticas.**
> - Usa siempre llaves `{ }` en `if`, `else if` y `else`, aunque el bloque tenga una sola línea.
> - Usa nombres claros (`mayor`, no `m` ni `x`).
> - Inicializa siempre tus variables.
> - Si una condición se vuelve muy larga, probablemente hay una forma más simple de escribirla.
> - Comenta el *porqué* de lo que haces, no lo obvio. Los comentarios `// Paso N` son la excepción: sirven para rastrear la receta.

**Bitácora de dudas:** ¿qué dudas quieres cubrir con el profesor? Anótalas en la sección 12 de tu `README.md`, junto con lo que ya intentaste para resolverlas.

---

## Fase 4. Probar y mejorar

*Llena las secciones 10 y 11 de tu `README.md`.*

**Tabla de pruebas** (en tu `README.md` completa las columnas "Obtenido" y "¿Pasó?"):

| Caso | Entradas | Resultado esperado |
|---|---|---|
| Mayor primero | 9, 4, 2 | 9 |
| Mayor en medio | 4, 9, 2 | 9 |
| Mayor al final | 2, 4, 9 | 9 |
| Empate arriba (1.º y 2.º) | 7, 7, 3 | 7 |
| Empate arriba (1.º y 3.º) | 7, 3, 7 | 7 |
| Empate abajo | 8, 3, 3 | 8 |
| Los tres iguales | 5, 5, 5 | 5 |
| Todos negativos | -4, -1, -9 | -1 |
| Con cero | -2, 0, -5 | 0 |
| Decimales cercanos | 2.5, 2.7, 2.6 | 2.7 |
| Texto | `abc` (luego 3), 1, 2 | vuelve a pedir el dato; 3 |

Los resultados esperados muestran el **valor** del mayor. Si decidiste mostrar también **cuál** de los tres fue, ajusta tu columna "Esperado" antes de probar. **Agrega al menos 2 casos propios.**

**Preguntas guía**

- ¿Por qué hay tres casos "Mayor primero / en medio / al final" si el mayor es siempre 9? ¿Qué parte de tu código prueba cada uno?
- En "Todos negativos", ¿alguna parte de tu programa asumía que los números eran positivos? Pista: ¿con qué valor inicializaste tus variables?
- En los empates, ¿tu programa mostró el resultado una vez, dos veces o ninguna?
- ¿Alguna prueba falló? ¿El error estaba en tu código, en tu receta o en el resultado esperado?

**Ciclo de mejora:** identifica → cambia una sola cosa → vuelve a probar **todo**. Registra cada cambio en tu bitácora de mejoras. Si el error estaba en tu receta, corrígela también en `RECETA.md`.

**Retos opcionales (para tu insatisfacción positiva):**

Si haces un reto, agrega primero los pasos nuevos a tu receta en `RECETA.md` y después prográmalos.

1. Muestra también **cuál** fue el mayor (primero, segundo o tercero) y, si hay empate, avísalo.
2. Muestra también el **menor** de los tres.
3. Muestra los tres números **ordenados** de mayor a menor.
4. **Generaliza:** encuentra el mayor de **N** números guardados en un arreglo (recuerda la Práctica 2). ¿Cuál de las dos formas de resolver el problema se generaliza mejor? ¿Por qué?
5. Curiosidad: investiga `std::max` de `<algorithm>`. ¿Cómo lo usarías con tres números? ¿Por qué vale la pena haberlo resuelto primero a mano?

---

## Fase 5. Publicar en GitHub

1. Verifica que tu `README.md` esté completo, sin `_____` pendientes, que tu receta final esté en `RECETA.md` y que tu programa compile sin advertencias.
2. Sube tus cambios a tu fork. Debes tener **al menos 3 commits** hechos durante el trabajo, uno por cada paso pequeño de la Fase 3, con mensajes que digan qué cambió, por ejemplo: `Lee y muestra los tres numeros`, `Agrega decision del mayor`, `Corrige el manejo de empates`.

Con los siguientes comandos puedes hacer un commit y publicarlo desde tu terminal o línea de comando:

```bash
git add .
git commit -m "Corrige el manejo de empates"
git push origin main
```
También puedes usar GitHub Desktop como lo hemos hecho antes.

3. Abre tu repositorio en GitHub y comprueba que ahí aparezcan tu código, tu receta y tu `README.md` actualizados. Tu fork tiene esta forma:
   `https://github.com/<tu-usuario>/ulsa_ime_1_dp_numero_mayor`
4. Entrega en Google Classroom el enlace a **tu fork**.

> **Nota técnica: commits pequeños.**
> Cada commit es un punto al que puedes volver si algo sale mal. Confirma cambios cada vez que completes un paso pequeño que funcione, como los de la Fase 3. Te será especialmente útil en los experimentos: si algo se rompe, puedes regresar al último commit.

---

## Cierre y reflexión

*Llena la sección 13 de tu `README.md` antes de entregar.*

1. ¿Qué aprendiste con esta práctica?
2. Ahora que la terminaste, ¿qué cambiarías de tu proceso?
3. ¿Qué fue lo más difícil y cómo lo resolviste?
4. ¿Qué pregunta te quedó sin responder?
5. ¿Qué fue más fácil para ti: la Práctica 3 (receta propia con un paso de ejemplo), la 4 (receta ajena) o esta (todo desde cero)? ¿Por qué?
6. ¿Pensaste en los empates antes de programar o los descubriste al probar?

---

## Lista de verificación antes de entregar

- [ ] Llené las secciones 1 a 13 de mi `README.md` (no quedan `_____`)
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