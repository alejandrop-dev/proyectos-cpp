//Comprobar si un número digitado por el usuario es positivo o negativo.
#include <iostream>
#include<limits>
using namespace std;
int main (){
	int numero;
	cout<<"\tEste programa le va a pedir un numero y le dira si es positivo o negativo"<<endl;
	while(true){
	
	cout<<"Ingrese un numero:";
	cin>>numero;
	if(cin.fail()){
		cout<<"El dato ingresado no es valido"<<endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
	}
	else{
		break;
	}
}
	
	if(numero==0){
		cout<<"El numero ingresado es 0"<<endl;
	}
	else if(numero>0){
		cout<<"El numero "<<numero<<" es positivo"<<endl;
	}
	else{
		cout<<"El numero "<<numero<<" es negativo"<<endl;	
	}
	
	cout<<"Press ester to exit...";
	cin.ignore();
	cin.get();
	return 0;
}
