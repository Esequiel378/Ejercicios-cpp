/*
**************************************************************
MATERIA : INFORMATICA
EXAMEN : Especificaci�n de Algoritmos - Noviembre 2017
NOMBRES : 
MATRICULA : 
CARRERA : 
COMISION : 
**************************************************************
TABLA DE CALIFICACION:
--------------------------------------------------------------
/15 Principal (main) 
/15 Leer vector
/5 Mostrar vector
/15 Calcular suma frac
/15 Calcular rango
/15 Cantidad de numeros mayores que X y menores que Y
/15 Calcular Matriz
/05 Comentarios, sem�ntica y presentaci�n
--------------------------------------------------------------
/100 Total 
**************************************************************

Realice un programa en C++ con las siguientes caracter�sticas:

El programa debe leer de un archivo llamado "datos.txt" un vector de N n�meros
reales positivos. Donde el valor N debe ser determinado durante la lectura del
archivo. El archivo contiene una �nica fila con n�meros reales separados por
espacios. El final del archivo se reconoce por la presencia de un n�mero
negativo. Por ejemplo, el archivo podr�a contener lo siguientes n�meros:

Ejemplo del contenido del archivo datos.txt:

1.25 3.125 7.25 4.75 34.125 -1.0

El n�mero -1.0 no pertenece al vector de datos sino que �nicamente
indica el final del vector. El vector de datos correspondiente al
ejemplo del archivo anterior ser�a: 1.25 3.125 7.25 4.75 y 34.125

El tama�o m�ximo del vector esta indicado por la constante entera
MAX=50. La lectura del vector debe realizarse desde el programa
principal llamando a la funci�n leer_vector cuyo prototipo es:

int leer_vector(double vector[MAX]);

Dicha funci�n carga en el vector llamado "vector" los n�meros del
archivo excepto el numero negativo y retorna un entero indicando la
cantidad de n�meros en el vector. El programa debe verificar que la
cantidad de n�meros no supere a MAX.

Luego de leer el archivo, el programa debe mostrar el vector en
pantalla llamando a la funci�n

void mostrar_vector(double vector[MAX], int N);

A continuaci�n, el programa debe calcular la suma de las partes fraccionarias
de los n�meros (es decir sin tener en cuenta la parte entera) y el rango del
vector llamando dentro del main a las funciones cuyos prototipos son:

double calcular_suma_frac(double vector[MAX], int N);

double calcular_rango(double vector[MAX], int N);

por ejemplo, la suma fraccionaria de los n�meros 1.23 y 3.2 es 0.23+0.2 = 0.43
y el rango es la diferencia entre el m�ximo numero del vector y el m�nimo n�mero
del vector.

Luego de retornar de la funciones calcular_suma_frac y calcular_rango
el programa debe imprimir por pantalla dichos valores seg�n se
muestra en el ejemplo que est� mas abajo. Dicha impresi�n por
pantalla debe realizarse en el main y no dentro de las funciones.

Posteriormente, dentro del main, el programa debe pedirle al usuario que
ingrese dos n�meros reales X e Y (donde X<Y). Una vez ingresados los valores de
X e Y el programa debe llamar a la funci�n cuyo prototipo es:

int cantidad_de_numeros_entre_x_e_y(double vector[MAX], int N, double X, double Y);

la cual calcula y retorna la cantidad de n�meros del vector que son mayores que
X y menores que Y. En el main debe imprimir por pantalla dicha cantidad seg�n
se muestra en el ejemplo de m�s abajo.

Por �ltimo el programa llama a la funci�n cuyo prototipo es:

void calcular_matriz(double vector[MAX], int N, double matriz[MAX][MAX]);

la cual debe calcular los valores de la matriz (de dimensiones NxN) tal que el
elemento de la fila 'k' y columna 'n' sea igual al mayor valor entre el
elemento 'k' y el elemento 'n' del vector.

Posteriormente el programa principal debe imprimir la matriz siguiendo el
formato del ejemplo de ejecuci�n del programa.

-------------------------------------------------------------------
Ejemplo de la ejecuci�n del programa:
El vector original es:

1.25 3.125 7.25 4.75 34.125

La suma fraccionaria es: 1.5
El rango es: 32.875

Ingrese el valor de X: 3

Ingrese el valor de Y: 6

La cantidad de numeros entre X e Y es: 2

La matriz es:


1.2500 3.1250 7.2500 4.7500 34.1250
3.1250 3.1250 7.2500 4.7500 34.1250
7.2500 7.2500 7.2500 7.2500 34.1250
4.7500 4.7500 7.2500 4.7500 34.1250
34.1250 34.1250 34.1250 34.1250 34.1250


------------------------------------------------------------------- 
*/
