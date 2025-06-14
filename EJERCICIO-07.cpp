/*7. Juego de Dados por Turnos: Desarrolla un programa que simule un juego entre dos jugadores que 
lanzan un dado por turnos. Cada dado genera un número aleatorio entre 1 y 6. El jugador que 
obtenga el número mayor gana la ronda. El primero en ganar 3 rondas será el ganador del juego. 
Muestra el resultado de cada ronda y el marcador acumulado. Usa funciones y números aleatorios 
(rand de cstdlib).*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int NumeroAzar(){
	int NUMERO_ALEATORIO;
	NUMERO_ALEATORIO= rand()%6+1;
	return NUMERO_ALEATORIO;
}


int main(){
	char RESPUESTA;
	char RESPUESTA1;
	int JUGADOR_A, JUGADOR_B;
	int VICTORIAS_A=0, VICTORIAS_B=0;
	srand(time(0));
	
	do{
		cout<<endl;
		cout<<"-----------------------------------------------------"<<endl;
		cout<<"JUGADOR A, DIGITE CUALQUIER LETRA PARA GIRAR EL DADO."<<endl;
		cin>>RESPUESTA;
		JUGADOR_A= NumeroAzar();
		
		cout<<"JUGADOR B, DIGITE CUALQUIER LETRA PARA GIRAR EL DADO."<<endl;
		cin>>RESPUESTA1;
		JUGADOR_B = NumeroAzar();
		
		cout<<"JUGADOR_A SACO: "<<JUGADOR_A<<endl;
		cout<<"JUGADOR_B SACO: "<<JUGADOR_B<<endl;
		
		if(JUGADOR_A<JUGADOR_B){
			cout<<"EL JUGADOR B GANO ESTA RONDA."<<endl;
			VICTORIAS_B +=1;
		}else if(JUGADOR_A > JUGADOR_B){
			cout<<"EL JUGADOR A GANO ESTA RONDA."<<endl;
			VICTORIAS_A +=1;
		}else{
			cout<<"ES UN EMPATE.";
		}
		
		cout<<endl;
		cout<<endl;
		cout<<"*****EL PUNTAJE DE JUGADOR A ES***** "<<endl;
		cout<<"                 "<<"["<<VICTORIAS_A<<"]"<<endl;
		cout<<endl;
		cout<<"*****EL PUNTAJE DE JUGADOR B ES***** "<<endl;
		cout<<"                 "<<"["<<VICTORIAS_B<<"]"<<endl;
		cout<<endl;
		
		
	}while(VICTORIAS_A <3 && VICTORIAS_B <3);
	
	if(VICTORIAS_A==3){
		cout<<"FELICIDADES, GANO EL JUGADOR A."<<endl;
	}else{
		cout<<"FELICIDADES, GANO EL JUGADOR B."<<endl;
	}
	
	
	
	return 0;
} 
