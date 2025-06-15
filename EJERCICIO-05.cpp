/*5. Función calcularRaices: Amplía el ejercicio anterior definiendo una función void llamada 
calcularRaices que reciba los coeficientes de la ecuación (a, b, c) por valor y las variables donde 
se almacenarán las raíces por referencia. Además, incluye una variable por referencia que indique si 
las raíces son reales o complejas. La función debe calcular las raíces utilizando la fórmula general y 
actualizar las variables correspondientes.*/

#include<iostream>
#include<cmath>
using namespace std;

void calcularRaices(int a,int b,int c,double &r1, double &r2, bool &reales){
	double Discriminante = pow(b,2)-(4*a*c);
	if(Discriminante<0){
		reales = false;
	}else{
		r1=(-b+(sqrt(Discriminante)))/(2*a);
		r2=(-b-(sqrt(Discriminante)))/(2*a);
	}
}


int main(){
	int a,b,c;
	double r1,r2;
	bool reales;
	
	cout<<"FORMA DE LA ECUACION ACUADRATICA"<<endl;
	cout<<"           ax^2+bx+c"<<endl;
	cout<<endl;
	cout<<"Digite el coeficiente del termino cuadratico [a]: "; cin>>a;
	cout<<"Digite el coeficiente del termino lineal [b]: "; cin>>b;
	cout<<"Digite el termino independiente [c]: "; cin>>c;
	
	//llamamos a la funcion
	calcularRaices(a,b,c,r1,r2,reales);
	
	reales = true;
	if(reales == true){
		cout<<endl;
		cout<<"La primera raiz es "<<r1<<endl;
		cout<<"La segunda raiz es "<<r2<<endl;
	}else{
		cout<<"Tiene raices complejas."<<endl;
	}
	
	//finalizacion de programa.
	cout<<"PROGRAMA FINALIZADO.";
	
	return 0;
}
