/*1. C�lculo del �rea de un C�rculo: Implementa un programa que calcule el �rea de un c�rculo dado su 
radio. Utiliza la constante M_PI de la librer�a cmath para obtener el valor de pi. Solicita al usuario el 
radio del c�rculo y utiliza la funci�n pow de cmath para calcular el cuadrado del radio. Muestra el 
resultado del �rea calculada*/

#include<iostream>
#include<cmath>
using namespace std;

float FuncionCirculo(float r){
	float Area= M_PI*pow(r,2);
	return Area;
}

int main(){
	float r,Areadelcirculo;
	cout<<"Digite el radio del circulo: "; cin>>r;
	
	Areadelcirculo=FuncionCirculo(r);
	cout<<"El area del circulo es "<<Areadelcirculo<<endl;
	cout<<"PROGRAMA FINALIZADO.";
	return 0;
}
