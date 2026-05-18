/*
La sentencia if-else
if(condcion){
  instruccion 1;
}
else {
instruccion 2;
}
*/
#include<iostream>
#include<limits>
using namespace std;
int main(){
	//variables
	int numero=0,dato=6;
	
	//Titulo del program
	cout<<"\tEste programa le va a pedir que adivine un numero que esta en el rango de 1-10"<<endl<<endl;	
	
	//proceso
	while(numero != dato){
	
	cout<<"\nIngrese su numero:";
	cin>>numero;
	if(cin.fail()){
		cout<<"Entrada invalida. Por favor ingrese un numero:";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
	}
	
	else if(numero == dato){
		cout<<"Adivinastes, si era el numero "<<dato;
	}
	else {
		cout<<"Fallastes, no era el numero "<<numero<<endl;
		cout<<"Intenta de nuevo"<<endl;
	}
	
	
}

	cout<<"\nPress enter to exit...";
	cin.ignore();
	cin.get();
	
	return 0;
}
