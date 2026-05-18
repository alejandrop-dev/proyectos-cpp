/*Ejercicio 4: Ejecute el programa del ejercicio anterior con entradas erróneas y observe los resultados. Por ejemplo, introduzca
 un dato de tipo carácter cuando se espera un dato de tipo entero.*/
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
