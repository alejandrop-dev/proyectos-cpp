//Escriba un programa que lea de la entrada estándar un carácter e indique en la salida estándar si el carácter es una vocal minúscula o no.
#include<iostream>
#include<limits>
#include<cstring>
using namespace std;
int main (){
	cout<<"\tEste programa le va a pedir una vocal y le va a decir si es minuscula o no lo es "<<endl;
	char caracter;
	
	cout<<"Ingrese la vocal: ";
	cin>>caracter;
	switch(caracter){
		case 'a':cout<<"\nLa vocal "<<caracter<<" es minuscula"<<endl;break;
		case 'e':cout<<"\nLa vocal "<<caracter<<" es minuscula"<<endl;break;
		case 'i':cout<<"\nLa vocal "<<caracter<<" es minuscula"<<endl;break;
    	case 'o':cout<<"\nLa vocal "<<caracter<<" es minuscula"<<endl;break;
		case 'u':cout<<"\nLa vocal "<<caracter<<" es minuscula"<<endl;break;	
	default:cout<<"\nEl dato ingresado no es una vocal minuscula"<<endl;
	}
		
	cout<<"Press enter to exit...";
	cin.ignore();
	cin.get();
	return 0;
}
