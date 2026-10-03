# Receta: El mayor de tres números

<!-- Escribe aquí tu receta completa en pseudocódigo, ANTES de programar.
     El primer paso es solo un ejemplo del formato; el resto de la receta es completamente tuyo.
     Si la corriges después de probarla a mano, deja aquí la versión final. -->

``` text

1.MOSTRAR "Bienvenido al mayor de tres nuemor"
2. respuesta ← "si"
3. MIENTRAS respuesta = "si" HACER
      num1 ← leerDecimal("Primer numero: ")
      num2 ← leerDecimal("Segundo numero: ")
      num3 ← leerDecimal("Tercer numero: ")
      SI num1 = num2 Y num2 = num3 ENTONCES
          MOSTRAR "Los tres numeros son iguales"
      SI NO
          SI num1 >= num2 Y num1 >= num3 ENTONCES
              mayor ← num1
          SI NO SI num2 >= num1 Y num2 >= num3 ENTONCES
              mayor ← num2
          SI NO
              mayor ← num3
          FIN SI
          MOSTRAR "El mayor es:", mayor
      FIN SI
      respuesta ← leerTexto("Quieres otra vez? (si/no): ")
   FIN MIENTRAS
4. MOSTRAR "Gracias por usar el programa"
5. FIN