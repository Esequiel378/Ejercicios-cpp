/*

El programa debe leer de un archivo llamado "vector.txt" un vector de N números
 reales. Donde el valor N debe ser determinado durante la lectura del archivo.
 El archivo contiene una única fila con números separados por espacios. El
 primer número es el valor del entero N, los siguientes N números son los
 valores del vector.


 Ejemplo del contenido del archivo vector.txt:


 5  7.25  -2.165  3.25  1.75  4.425


 El número 5 no pertenece al vector de datos sino que únicamente indica la
 cantidad de números del vector. El vector de datos correspondiente al ejemplo
 del archivo anterior sería: 7.25  -2.165  3.25  1.75  4.425


 El tamaño máximo del vector esta indicado por la constante entera
 MAX=50. La lectura del vector debe realizarse desde el programa
 principal llamando a la función leer_vector cuyo prototipo es:


 int leer_vector(double vector[MAX]);


 Dicha función carga en el vector llamado "vector" los números del archivo
 excepto el primer número y retorna un entero indicando la cantidad de números
 en el vector. El programa debe verificar que la cantidad de números no supere a
 MAX (si lo supera, deberá usar solo los primeros MAX números).


 Luego de leer el archivo, el programa debe mostrar el vector en pantalla
 siguiendo el formato de impresión del ejemplo de ejecución del programa
 llamando a la función


 void mostrar_vector(double vector[MAX], int N);
*/
