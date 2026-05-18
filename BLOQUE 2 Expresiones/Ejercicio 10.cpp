/*10: Escriba un programa que calcule las soluciones de una ecuación de segundo grado de la forma 
ax^2 + bx + c = 0, teniendo en cuenta que: (-b+sqrt(pow(b,2)-4*a*c))/(2*a) y (-b-sqrt(pow(b,2)-4*a*c))/(2*a)*/
#include<iostream>
#include<cmath>
#include<limits>
using namespace std;
int main(){
	//title
	cout<<"\tEste programa va a mostrar los resultados de la formula general"<<endl;
	
	//Variables
	double a,b,c,resultado1,resultado2,discriminante=0;
	
	//Entrada de resultados a
	while(true){
	cout<<"Ingrese el valor de a:";
	cin>>a;
	if(cin.fail()){
		cout<<"Entrada invalida. Por favor ingrese un numero para a:";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
	}
	else{
		break;
	}
	}
	//Entrada de resultados b
	while(true){
		cout<<"Ingrese el valor de b:";
		cin>>b;
		if(cin.fail()){
			cout<<"Entrada invalida. Por favor ingrese un numero para b:";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else{
			break;
		}	
	}
	
	//Entrada de resultados de c
	while(true){
		cout<<"Ingrese el valor de c:";
		cin>>c;
		if(cin.fail()){
			cout<<"Entrada invalida. Por favor ingrese un numero para c:";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else{
			break;
		}
	}

	
	//Condiciones para que se llegue a la formula general 
	if(a==0){
		cout<<"Error: El valor de 'a' no puede ser cero para una ecuacion de segundo grado."<<endl;
		cout<<"Este programa no puede calcular las soluciones para esta ecuacion." << endl;
		cout<<"Press to enter to exit...";
    	cin.ignore();
     	cin.get();
		return 0;
	}
	
	discriminante=pow(b,2)-4*a*c;
	if (discriminante<0){
		cout<<"El discriminante es negativo, no existen soluciones reales"<<endl;
	cout<<"Press to enter to exit...";
    cin.ignore();
    cin.get();
	return 0;
	}
	else if(discriminante==0){
		resultado1=-b/(2*a);
		cout<<"Existe una unica solucion real:"<<resultado1<<endl;
	}
	else if(discriminante>0){
		resultado1=(-b+sqrt(discriminante))/(2*a);
		resultado2=(-b-sqrt(discriminante))/(2*a);
		cout<<"El primer resultado es:"<<resultado1<<endl;
		cout<<"El segundo resultado es:"<<resultado2<<endl;
	}
	
	cout<<"Press to enter to exit...";
    cin.ignore();
    cin.get();
	return 0;
}

