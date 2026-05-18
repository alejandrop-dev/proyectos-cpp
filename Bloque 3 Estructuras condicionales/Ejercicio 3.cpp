// 3: Realice un programa que lea un valor entero y determine si se trata de un número par o impar.
#include<iostream>
#include<limits>
using namespace std;
int main (){
	//title
	cout<<"\tEste programa le va a pedir que ingrese un numero entero y le va a decir si es par o impar"<<endl;
	//variables
	int numero;
	//Entrada correcta del numero
	while(true){
		cout<<"Ingrese un numero:";
		cin>>numero;
		if(cin.fail()){
			cout<<"El numero ingresado es invalido"<<endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else{
			break;
		}
	}
	//Toma de decicion
	if(numero%2==0){
		cout<<"El numero "<<numero<<" es par"<<endl;
	}
	else{
		cout<<"El numero "<<numero<<" es impar"<<endl;
	}
	
	//Fin correcto del programa
	cout<<"Press enter to exit...";
	cin.ignore();
	cin.get();
	
	
	return 0;
}
