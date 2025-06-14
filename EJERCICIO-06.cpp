/* 6. Juego de Piedra, Papel y Tijeras: Desarrolla un programa que simule el juego de piedra, papel y 
tijeras contra la computadora. El usuario elegirá su jugada (piedra, papel o tijeras) y la computadora 
generará su jugada de forma aleatoria. El programa determinará el ganador de cada ronda según las 
reglas del juego. El juego continuará hasta que el usuario o la computadora gane 3 rondas. Muestra el 
resultado final indicando el ganador del juego.*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	int JUGADA,CPU, VICTORIAS_DEL_USUARIO = 0, VICTORIAS_DEL_CPU = 0;
	char NOMBRE[50];
	cout<<"DIGITE SU NOMBRE: "; cin>>NOMBRE;
	srand(time(0)); //incializamos el gerador de numeros aleatorios
	
	do{
		cout<<NOMBRE<<" digite el numero de su jugada."<<endl;
		cout<<"1. PIEDRA."<<endl;
		cout<<"2. PAPEL."<<endl;
		cout<<"3. TIJERA."<<endl;
		cin>>JUGADA;
		
		while(JUGADA<1 || JUGADA >3){
			cout<<"JUGADA INVALIDA, DIGITE DENUEVO UNA JUGADA: "; cin>>JUGADA;
		}
		
		CPU = rand() % 3 + 1;
		
	}while( VICTORIAS_DEL_USUARIO<3 && VICTORIAS_DEL_CPU<3);
	
	
	
	return 0;
}
