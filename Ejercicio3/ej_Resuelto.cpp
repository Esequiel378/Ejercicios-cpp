/*

El programa debe leer de un archivo llamado "vector.txt" un vector de N n�meros
 reales. Donde el valor N debe ser determinado durante la lectura del archivo.
 El archivo contiene una �nica fila con n�meros separados por espacios. El
 primer n�mero es el valor del entero N, los siguientes N n�meros son los
 valores del vector.


 Ejemplo del contenido del archivo vector.txt:


 5  7.25  -2.165  3.25  1.75  4.425


 El n�mero 5 no pertenece al vector de datos sino que �nicamente indica la
 cantidad de n�meros del vector. El vector de datos correspondiente al ejemplo
 del archivo anterior ser�a: 7.25  -2.165  3.25  1.75  4.425


 El tama�o m�ximo del vector esta indicado por la constante entera
 MAX=50. La lectura del vector debe realizarse desde el programa
 principal llamando a la funci�n leer_vector cuyo prototipo es:


 int leer_vector(double vector[MAX]);


 Dicha funci�n carga en el vector llamado "vector" los n�meros del archivo
 excepto el primer n�mero y retorna un entero indicando la cantidad de n�meros
 en el vector. El programa debe verificar que la cantidad de n�meros no supere a
 MAX (si lo supera, deber� usar solo los primeros MAX n�meros).


 Luego de leer el archivo, el programa debe mostrar el vector en pantalla
 siguiendo el formato de impresi�n del ejemplo de ejecuci�n del programa
 llamando a la funci�n


 void mostrar_vector(double vector[MAX], int N);

*/

#include <iostream>
#include <fstream>

#define MAX 50

using namespace std;

int leer_vector(double vector[MAX]);
void mostrar_vector(double vector[MAX], int N);

int main(){
	
	double vector[MAX];
	int N;
	
	N = leer_vector(vector);
	mostrar_vector(vector, N);
	
	return 0;
}

int leer_vector(double vector[MAX]){
	
	int N;
	ifstream arch;
	
	arch.open("vector.txt");
	
	if(arch.fail())
		cout << "Error al abrir el archivo" << endl;
		
	arch >> N;
	
	for (int i = 0; i < N; i++){
		
		arch >> vector[i];
	}
	
	return N;
}

void mostrar_vector(double vector[MAX], int N){
	
	cout << N << " ";
	
	for (int i = 0; i < N; i++){
		
		cout << vector[i] << " ";
	}
}
