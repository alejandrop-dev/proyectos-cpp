//Mostrar los meses del año, pidiéndole al usuario un número entre (1-12), y mostrar el mes al que corresponde.
#include<iostream>
#include<limits>
using namespace std;
int main (){
	cout<<"\tEste programa le va a pedir un numero entre 1-12 y le mostrara el mes al que corresponde"<<endl;
	int numero;
	while(true){
		cout<<"Ingrese un numero:";
		cin>>numero;
		if(cin.fail()){
			cout<<"El dato ingresdo es invalido"<<endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else if(numero<1 || numero>12){
			cout<<"El numero ingresado no esta en el rango"<<endl;
		}
		else{
			break;
		}
	}
	switch(numero){
		case 1: cout<<"El numero "<<numero<<" corresponde al mes de Enero";break;
		case 2: cout<<"El numero "<<numero<<" corresponde al mes de Febrero";break;
		case 3: cout<<"El numero "<<numero<<" corresponde al mes de Marzo";break;
		case 4: cout<<"El numero "<<numero<<" corresponde al mes de Abril";break;
		case 5: cout<<"El numero "<<numero<<" corresponde al mes de Mayo";break;
		case 6: cout<<"El numero "<<numero<<" corresponde al mes de Junio";break;
		case 7: cout<<"El numero "<<numero<<" corresponde al mes de Julio";break;
		case 8: cout<<"El numero "<<numero<<" corresponde al mes de Agosto";break;
		case 9: cout<<"El numero "<<numero<<" corresponde al mes de Septiembre";break;
		case 10: cout<<"El numero "<<numero<<" corresponde al mes de Octubre";break;
		case 11: cout<<"El numero "<<numero<<" corresponde al mes de Noviembre";break;
		case 12: cout<<"El numero "<<numero<<" corresponde al mes de Diciembre";break;
	}

	cout<<"\nPress enter to exit...";
	cin.ignore();
	cin.get();
	return 0;
}
