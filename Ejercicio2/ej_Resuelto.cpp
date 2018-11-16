/*

 Realizar un programa que sea capaz de leer datos de un archivo llamado "precios.txt", y almacenarlos en un vector de enteros con 
un maximo de hasta 10 elementos
 
 Mostrar por pantalla:
 
 * los elementos del vector ordenados de menor a mayor
 * la suma de todos los elementos pares y la cantidad de los mismos
 * la suma de todos los elementos impares y la cantidad de los mismos
 
  El programa debe implementar el siguiente prototipo:
 
void leer (int vector[NMAX], int& N);
void ordenar (int vector[NMAX], int N);

 Donde NMAX, es el numero maximo de elementos que puede almacenar el vector, para ello, no se permite
utilizar variables globles, en su lugar utilizar constantes.

////////////////////////////////////////////////// Salida por consola

9 11 12 15 20 30 55
Suma de elementos pares: 62

Cantidad de elementos pares: 3

Suma de elementos impares: 90

Cantidad de elementos impares: 4

//////////////////////////////////////////////////

*/

#include <iostream>
#include <fstream>

using namespace std;

// Constantes
const int NMAX = 10;

// Prototipos
void leer (int vector[NMAX], int& N);
void ordenar (int vector[NMAX], int N);

int main(){
	
	// Declaraciones
	int N = 0; // Cantidad de elemento del vector
	
	int sPares = 0, sImpares = 0;
	int cPares = 0, cImpares = 0;
	
	int vector[NMAX];
	
	// Llamado a funciones
	leer(vector, N);
	ordenar(vector, N);
	
	// Mostramos la informacion por pantalla
	// Bucle que recorre el vector
	for (int i = 0; i < N; i++){
		
		cout << vector[i] << " "; // Mostramos los elementos del vector por pantalla
		
		if (vector[i]%2 == 0){ // Comprobamos si elemento del vector es par
			
			sPares += vector[i];
			cPares++;
			
		}else{ // En caso contrario, es impar
			
			sImpares += vector[i];
			cImpares++;
		}
	}
	
	cout << "\nSuma de elementos pares: " << sPares << endl;
	cout << "\nCantidad de elementos pares: " << cPares << endl;
	
	cout << "\nSuma de elementos impares: " << sImpares << endl;
	cout << "\nCantidad de elementos impares: " << cImpares << endl;
			
	return 0;
}

void leer (int vector[NMAX], int& N){
	
	ifstream arch; // Creamos el objeto arch
	
	arch.open("precios.txt"); // Abrimos el archivo precios.txt
	
	if(arch.fail()) // Verificamos si el archivo no se pudo abrir
		cout << "Error!";
		
	// Bucle que recorre NMAX veces el archivo
	for (int i = 0; i < NMAX; i++){
		
		if(arch.eof()) // Comprobamos si se llego al final del archivo
			break; // Salimos del bucle en caso de que haya menos de 10 elemento a leer
		
		arch >> vector[i]; // Guardamos en el vector lo que se encuentre en el archivo
		N++; // Incrementamos N
	}
	
	arch.close(); // Cerramos el archivo precios.txt
}

void ordenar (int vector[NMAX], int N){
	
	// Bucle que recorre el vector
	for (int i = 0; i < N; i++){
		for (int j = N - 1; j > i; j--){ // Bucle que recorre el vector de atras hacia adelante
			
			if(vector[i] > vector[j]){ // Verificamos si i > j
				
				// Realizamos un cambio de posiciones
				int aux = vector[i];
				vector[i] = vector[j];
				vector[j] = aux;
			}			
		}
	}
}
