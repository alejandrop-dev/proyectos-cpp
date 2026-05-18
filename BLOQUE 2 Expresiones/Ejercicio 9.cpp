/*9. Realice un programa que calcule el valor que toma la siguiente función para unos valores dados de
 x e y: f(x,y) = sqrt(x) / (pow(y,2)-1)*/
#include<iostream>
#include<cmath>
using namespace std;
int main (){
	
	//Title
	cout<<"\tEste programa va a realizar la siguiente funcion:"<<endl;
	cout<<"\tf(x,y)=vx / y^2 - 1"<<endl;
	
	//Variables 
	double x,y,resultado=0;
	
	//variables para lo opcional 
	double x_raiz=0,y_elevacion=0;
	cout<<"Digite el valor de x:";
	cin>>x;
	cout<<"digite el valor de y:";
	cin>>y;
	
	//Operacion del resultado 
	resultado= (sqrt(x))/(pow(y,2)-1);
	
	//Operacion opionales
	x_raiz=sqrt(x);
	y_elevacion=pow(y,2);
	
	//Mostrar datos al usuario
	cout<<"\nDatos:"<<endl;
	cout<<"La raiz cuadrada de "<<x<<" es:"<<x_raiz<<endl;
	cout<<"La elevacion al cuadrado de "<<y<<" es:"<<y_elevacion<<endl;
	cout<<"\nDatos ingresados a la funcion:"<<endl;
	cout<<"F("<<x<<","<<y<<")= raiz "<<x<<"/"<<y<<"^2-1"<<endl;
	cout<<"\nResultado de la funcion:"<<endl;
	cout<<"F("<<x<<","<<y<<")="<<x_raiz<<"/"<<y_elevacion<<"-1 ="<<resultado<<endl;
	
	//To prevent the program from closing automatically.
	cout<<"Press enter to exit...";
	cin.ignore();
	cin.get();

	
	return 0;
}
