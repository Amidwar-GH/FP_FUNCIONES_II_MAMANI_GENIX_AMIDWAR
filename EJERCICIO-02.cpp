/*2. Generador de Números Aleatorios: Crea un programa que genere y muestre una serie de números 
aleatorios entre 0 y un número máximo especificado por el usuario. El programa solicitará al usuario 
la cantidad de números aleatorios que desea generar y el valor máximo permitido. Utiliza la función 
rand de la librería cstdlib para generar los números aleatorios.*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	int limite,NumeroAleatorio;
	srand(time(0));
	
	
	NumeroAleatorio=rand()%limite+1;
	cout<<NumeroAleatorio;
	
	
	
	
	
	return 0;
}
