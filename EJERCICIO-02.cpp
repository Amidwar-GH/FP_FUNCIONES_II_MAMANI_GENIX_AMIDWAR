/*2. Generador de N�meros Aleatorios: Crea un programa que genere y muestre una serie de n�meros 
aleatorios entre 0 y un n�mero m�ximo especificado por el usuario. El programa solicitar� al usuario 
la cantidad de n�meros aleatorios que desea generar y el valor m�ximo permitido. Utiliza la funci�n 
rand de la librer�a cstdlib para generar los n�meros aleatorios.*/

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
