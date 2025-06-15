/*4. Cálculo de Raíces de una Ecuación Cuadrática: Crea un programa que calcule las raíces de una 
ecuación cuadrática utilizando la fórmula general. Utiliza la función sqrt de la librería cmath para 
calcular la raíz cuadrada. Solicita al usuario los coeficientes de la ecuación (a, b, c) y muestra las 
raíces obtenidas. Considera los casos en los que las raíces son reales o complejas.*/

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
 
