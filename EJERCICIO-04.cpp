/*4. C�lculo de Ra�ces de una Ecuaci�n Cuadr�tica: Crea un programa que calcule las ra�ces de una 
ecuaci�n cuadr�tica utilizando la f�rmula general. Utiliza la funci�n sqrt de la librer�a cmath para 
calcular la ra�z cuadrada. Solicita al usuario los coeficientes de la ecuaci�n (a, b, c) y muestra las 
ra�ces obtenidas. Considera los casos en los que las ra�ces son reales o complejas.*/

#include<iostream>
#include<cmath>
using namespace std;

void ENTRADA(){
	cout<<"----------------------"<<endl;
	cout<<"BIENVENIDO AL PROGRMA."<<endl;
	cout<<"----------------------"<<endl;
}

int main(){
	float a,b,c,DISCRIMINANTE,R1,R2;
	
	
	ENTRADA();
	cout<<endl;
	
	cout<<"Digite el coeficiente  del termino cuadratico: "; cin>>a;
	cout<<"Digite el coeficiente del termino lineal: "; cin>>b;
	cout<<"Digite el termino independiente: "; cin>>c;
	
	DISCRIMINANTE= pow(b,2)-4*a*c;
	
	if(DISCRIMINANTE<0){
		cout<<"La ecuacion tiene raizes complejas.";
	}else{
		cout<<"La discriminante es "<<DISCRIMINANTE<<endl;
		R1=RAIZ1(a,b,c);
		cout<<"La primera raiz es "<<R1<<endl;;
		R2=RAIZ2(a,b,c);
		cout<<"La segunda raiz es "<<R2<<endl;
	}
	
	return 0;
}
 
