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
	int JUGADA, VIDAS_DEL_USUARIO, VIDAS_DEL_CPU;
	srand(time(0)); //incializamos el gerador de numeros aleatorios
	int CPU = rand() % 3 + 1;
	cout<<"Digite un numero: "<<endl;
	cout<<"1. PIEDRA."<<endl;
	cout<<"2. PAPEL."<<endl;
	cout<<"3. TIJERA."<<endl;
	cin>>JUGADA;
	if(JUGADA){
		
	}
	cout<<CPU;
	
	
	
	return 0;
}
