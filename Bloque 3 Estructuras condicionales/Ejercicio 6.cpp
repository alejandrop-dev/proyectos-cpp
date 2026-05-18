/*Escriba un programa que lea de la entrada estándar un carácter e indique en la salida estándar si el carácter es una vocal 
minúscula, es una vocal mayúscula o no es una vocal.*/
#include<iostream>
#include<limits>
#include<cstring>
using namespace std;
int main (){
	cout<<"\tEste programa le va a pedir una vocal y le va a decir si es mayuscula o minuscula"<<endl;
	char caracter;
	
	cout<<"Ingrese la vocal: ";
	cin>>caracter;
	switch(caracter){
		case 'a':cout<<"\nLa vocal "<<caracter<<" es minuscula"<<endl;break;
		case 'e':cout<<"\nLa vocal "<<caracter<<" es minuscula"<<endl;break;
		case 'i':cout<<"\nLa vocal "<<caracter<<" es minuscula"<<endl;break;
    	case 'o':cout<<"\nLa vocal "<<caracter<<" es minuscula"<<endl;break;
		case 'u':cout<<"\nLa vocal "<<caracter<<" es minuscula"<<endl;break;	
		case 'A':cout<<"\nLa vocal "<<caracter<<" es Mayscula"<<endl;break;		
		case 'E':cout<<"\nLa vocal "<<caracter<<" es Mayscula"<<endl;break;
		case 'I':cout<<"\nLa vocal "<<caracter<<" es Mayscula"<<endl;break;
		case 'O':cout<<"\nLa vocal "<<caracter<<" es Mayscula"<<endl;break;
		case 'U':cout<<"\nLa vocal "<<caracter<<" es Mayscula"<<endl;break;
	default:cout<<"\nEl dato ingresado no es vocal"<<endl;
	}
		
	cout<<"Press enter to exit...";
	cin.ignore();
	cin.get();
	return 0;
}
