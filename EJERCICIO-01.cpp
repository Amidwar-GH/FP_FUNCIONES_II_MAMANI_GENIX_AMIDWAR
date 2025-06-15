/*1. Cálculo del Área de un Círculo: Implementa un programa que calcule el área de un círculo dado su 
radio. Utiliza la constante M_PI de la librería cmath para obtener el valor de pi. Solicita al usuario el 
radio del círculo y utiliza la función pow de cmath para calcular el cuadrado del radio. Muestra el 
resultado del área calculada*/

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
