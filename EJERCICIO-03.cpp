/*3. Cálculo de la Hipotenusa: Crea un programa que calcule la hipotenusa de un triángulo rectángulo 
utilizando la fórmula de Pitágoras. Solicita al usuario los valores de los catetos y utiliza la función 
sqrt de cmath para calcular la raíz cuadrada de la suma de los cuadrados de los catetos. Muestra el 
resultado de la hipotenusa calculada.*/

//H^2=c^2+c^2

#include<iostream>
#include<cmath>

using namespace std; 


float calculodeHIPOTENUSA(int cateto1, int cateto2){
	float HIPOTENUSA;
	HIPOTENUSA=sqrt((pow(cateto1,2))+(pow(cateto2,2)));
	return HIPOTENUSA;
}


void bienvenida(){
	cout<<"-----------------------"<<endl;
	cout<<"BIENVENIDO AL PROGRAMA."<<endl;
	cout<<"-----------------------"<<endl;
}


int main(){
	float cateto1,cateto2,H;
	
	bienvenida();
	cout<<"                                                           "<<endl;
	
	//no hay lados del triangulo negativos tampoco lados del triangulo ceros.
	cout<<"Digite el primer cateto del triangulo rectangulo : "; cin>>cateto1;
	while(cateto1<=0){
		cout<<"Digite nuevamente el primer cateto del triangulo: ";
		cin>>cateto1;
	}
	
	
	cout<<"Digite el segundo cateto del triangulo rectangulo: "; cin>>cateto2;
	while(cateto2<=0){
		cout<<"Digite nuevamente el segundo cateto del triangulo: ";
		cin>>cateto2;
	}
	
	
	H=calculodeHIPOTENUSA(cateto1,cateto2);
	cout<<"La hipotenusa del triangulo rectangulo es "<<H;
	
	return 0;
}
