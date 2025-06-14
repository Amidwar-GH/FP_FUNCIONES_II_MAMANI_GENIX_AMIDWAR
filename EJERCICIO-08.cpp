/*8. Simulaci�n de Tragamonedas Simple: Crea un programa que simule una m�quina tragamonedas. 
El usuario inicia con 100 monedas y puede apostar entre 1 y 10 por turno. Se generan tres n�meros 
aleatorios entre 1 y 5. Si los tres son iguales, gana 10 veces su apuesta. Si hay dos iguales, gana el 
doble. Si forman una escalera (por ejemplo como 2-3-4 o 4-3-2), gana 5 veces su apuesta. En 
cualquier otro caso, pierde lo apostado. El juego contin�a hasta que el jugador se quede sin monedas 
o decida salir. Usa funciones y n�meros aleatorios*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int GeneradordeNUMEROS(){
	return rand()%5+1;
}



int main(){
	char CONTINUAR;
	int MONEDAS=100,Primernumero,Segundonumero,Tercernumero,APUESTA;
	srand(time(0));
	
	cout<<"*************MONEDA LOOOKA***********"<<endl;
	cout<<endl;
	cout<<"BIENVENIDO, SOY AMIDWAR SU ANFITRION."<<endl;
	cout<<endl;
	cout<<"<Monedas actuales = 100>"<<endl;
	cout<<endl;
	
	do{
		cout<<"---------------------------------------------"<<endl;
		do{
			cout<<"Puedes apostar entre 1 y 10 monedas por ronda."<<endl;
			cout<<"�Cuantas monedas deseas apostar?"<<endl;
			cin>>APUESTA;
			cout<<endl;
			if(APUESTA<1 || APUESTA>10 || APUESTA>MONEDAS){
				cout<<"Apuesta invalida, digite una apuesta nuevamente."<<endl;
			}
		}while(APUESTA<1 || APUESTA>10 || APUESTA > MONEDAS);
		
		
		
		cout<<"El primer numero que se te genero es ";
		Primernumero=GeneradordeNUMEROS();
		cout<<"["<<Primernumero<<"]"<<endl;
		
		
		cout<<"El segundo numero que se te genero es ";
		Segundonumero=GeneradordeNUMEROS();
		cout<<"["<<Segundonumero<<"]"<<endl;
		
		
		cout<<"El tercer numero que se te genero es ";
		Tercernumero=GeneradordeNUMEROS();
		cout<<"["<<Tercernumero<<"]"<<endl;
		
		if(Primernumero == Segundonumero && Segundonumero == Tercernumero){
			cout<<"Felicidades, acertaste en 3 numeros iguales."<<endl;
			cout<<"Tu apuesta se multiplica x10"<<endl;
			MONEDAS = MONEDAS+APUESTA*10;
			
			
		}else if(Primernumero == Segundonumero || Primernumero == Tercernumero || Segundonumero==Tercernumero){
			cout<<"Felicidades, acertaste 2 numeros iguales."<<endl;
			cout<<"Tu apuesta se multiplica x2"<<endl;
			MONEDAS = MONEDAS+APUESTA *2;
			
			
		}else if((Primernumero==Segundonumero+1 && Segundonumero==Tercernumero+1)|| (Primernumero==Segundonumero-1 && Segundonumero==Tercernumero-1)){
			cout<<"Felicidades, hiciste una escalera."<<endl;
			cout<<"Tu apuesta se multiplica x5"<<endl;
			MONEDAS = MONEDAS+APUESTA*5;
			
			
		}else{
			cout<<"NO HUBO NINGUNA COMBINACION, INTENTALO DENUEVO.";
			MONEDAS=MONEDAS-APUESTA;
		}
		
		cout<<endl;
		cout<<"-------------------------"<<endl;
		cout<<"<Monedas actuales ="<<MONEDAS<<">"<<endl;
		cout<<"-------------------------"<<endl;
		
		if(MONEDAS<=0){
			cout<<"Lastima, te quedaste sin monedas."<<endl;
			break;	
		}
		
		cout<<"Desea continuar? (S/N): "; cin>>CONTINUAR;
		
	}while((CONTINUAR =='S'|| CONTINUAR == 's') && MONEDAS>0);
	
	cout<<endl<<endl;
	cout<<"Gracias por jugar"<<endl;
	
	return 0;
}
