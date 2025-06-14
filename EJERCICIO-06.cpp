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
		
		cout<<"Elegiste: ";
		if(JUGADA == 1){
			cout<<"PIEDRA";
		}else if(JUGADA == 2 ){
			cout<<"PAPEL";
		}else if(JUGADA == 3){
			cout<<"TIJERA";
		}
		cout<<endl;
			
		cout<<"CPU eligio: ";
		if(CPU == 1){
			cout<<"PIEDRA";
		}else if(CPU == 2 ){
			cout<<"PAPEL";
		}else if(CPU == 3){
			cout<<"TIJERA";
		}
		cout<<endl;
		
		if(JUGADA == CPU){
			cout<<"EMPATE"<<endl;
		}else if(JUGADA == 1 && CPU == 3){
			cout<<"FELICIDADES, GANASTE ESTA RONDA."<<endl;
			VICTORIAS_DEL_USUARIO += 1;
		}else if(JUGADA == 2 && CPU == 1){
			cout<<"FELICIDADES, GANASTE ESTA RONDA."<<endl;
			VICTORIAS_DEL_USUARIO += 1;
		}else if(JUGADA == 3 && CPU == 2){
			cout<<"FELICIDADES, GANASTE ESTA RONDA."<<endl;
			VICTORIAS_DEL_USUARIO += 1;
		}else{
			cout<<"PERDISTE ESTA RONDA."<<endl;
			VICTORIAS_DEL_CPU +=1;
		}
		
		cout<<endl;
		cout<<NOMBRE<<" tu puntaje es "<<VICTORIAS_DEL_USUARIO<<endl;
		cout<<"El puntaje del CPU es "<<VICTORIAS_DEL_CPU<<endl;
		cout<<endl;
		
		
	}while( VICTORIAS_DEL_USUARIO<3 && VICTORIAS_DEL_CPU<3);
	
	
	if(VICTORIAS_DEL_USUARIO == 3 ){
		cout<<"FELICIDADES, GANASTE EL JUEGO."<<endl;
	}else{
		cout<<"SUERTE PARA LA PROXIMA. ";
	}
	
	return 0;
}
