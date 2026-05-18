// Escriba un programa que solicite una edad (un entero) e indique en la salida estándar si la edad introducida está en el rango [18-25].
#include<iostream>
#include<limits>
using namespace std;
int main (){
	cout<<"\tEste programa le va a solicitar una edad y le va a decir si esta en el rago de [18-25]"<<endl;
	int edad;
	while(true){
		cout<<"Ingrese su edad: ";
		cin>>edad;
		if(cin.fail()){
			cout<<"El dato ingresado es invalido"<<endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else{
			break;
		}
	}
	
	if(edad>=18 && edad<= 25){
		cout<<"La edad de "<<edad<<" si esta en el rango"<<endl;
	}
	else{
		cout<<"La edad de "<<edad<<" no esta en el rango"<<endl;
	}

	cout<<"Press enter to exit...";
	cin.ignore();
	cin.get();
	return 0;
}
