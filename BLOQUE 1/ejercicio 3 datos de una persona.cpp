/*Ejercicio 3: Realice un programa que lea de la entrada estándar los siguientes datos de una persona:
 Edad: dato de tipo entero.
 Sexo: dato de tipo carácter.
 Altura en metros: dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida estándar.*/
#include<iostream>
using namespace std;
int main (){
	cout<<"\tThis program va a mostrar your years old,sex and su height "<<endl;
	float edad=0,height=0;
	char sex[20];
	cout<<"Ingrese su edad: ";   cin>>edad;
	cout<<"Ingrese su sexo: ";   cin>>sex;
	cout<<"Ingrese su altura: ";   cin>>height;	
	
	cout<<"\nDatos personales"<<endl;
	cout<<"Su edad es: "<<edad<<endl;
	cout<<"Su sexo es: "<<sex<<endl;
	cout<<"Su altura es: "<<height<<endl;
	
	
	return 0;
}
