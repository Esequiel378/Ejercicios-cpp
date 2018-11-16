/*

 Realizar un programa que solicite al usuario un numero N, el cual sera el tamaño de un vector de numeros entero,
el mismo debe estar comprendido entre 5 y 50.

 Luego, solicitar al usuario ingresar los N elementos del vector. Antes de finalizar, el programa, debe guardar
en un archivo llamado "numeros.txt", los elementos del vector ordenados de mayor a menor.

 El programa debe implementar los siguientes prototipos:
 
void ingresar (int vector[NMAX], int N);
void ordenar (int vector[NMAX], int N);
void escribir (int vector[NMAX], int N);

 Donde NMAX, es el numero maximo de elementos que puede almacenar el vector, para ello, no se permite
utilizar variables globles, en su lugar utilizar constantes.


*/

#include <iostream>
#include <fstream>

using namespace std;

// Constante
const int NMAX = 50;

// Prototipos
void ingresar (int vector[NMAX], int N);
void ordenar (int vector[NMAX], int N);
void escribir (int vector[NMAX], int N);

int main(){
	
	// Declaraciones
	int N; 
	
	cout << "Ingrese el tamaño del arreglo: ";
	cin >> N;
	
	int vector[N];
	
	ingresar (vector, N);
	ordenar (vector, N);
	escribir (vector, N);
	
	return 0;
}

void ingresar (int vector[NMAX], int N){
	
	// Bucle que recorre el arreglo
	for (int i = 0; i < N; i++){
		
		cout << "Ingrese un nuevo elemento: ";
		cin >> vector[i]; // Ingreso de datos por teclado
	}
		
	
}

void ordenar (int vector[NMAX], int N){
	
	// Bucle que recorre el arreglo
	for (int i = 0; i < N; i++){
		for (int j = N; j > i; j--){ // Recorremos el arreglo de atras hacia adelante
			
			if (vector[i] < vector[j]){ // Comprobamos si el elemento de i < j
				
				// Realizamnos el cambio de posicion
				int aux = vector[i];
				vector[i] = vector[j];
				vector[j] = aux;
			}
			
		}
	}
	
}

void escribir (int vector[NMAX], int N){
	
	ofstream arch; // Creamos el objero arch
	
	arch.open("numeros.txt"); // Creamos el archivo numeros.txt
	
	if(arch.fail()) // Verificamos si el archivo se abrio correctamente
		cout << "Error!" << endl;
		
	for (int i = 0; i < N; i++)	// Escribimos los elementos del vector en el archivo
		arch << vector[i] << " ";
		
	arch.close(); // Cerramos el archivo numeros.txt

}
