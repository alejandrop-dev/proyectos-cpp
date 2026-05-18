/*Ejercicio 15: Realice un programa que solicite al usuario que piense un número entero entre el 1 y el 100. 
El programa debe generar un numero aleatorio en ese mismo rango[1-100],e indicarle al usuario si el numero que dígito es menor o mayor
 al numero aleatorio, así hasta que lo adivine. y por ultimo mostrarle el numero de intentos que le llevo.*/
#include<iostream>
#include<limits>
#include <ctime>
#include<cstdlib>
using namespace std;
int main (){
	
	int contador=0, dato, numero;
	
	srand(time(NULL));  //genera el numero aleatorio 
	dato= 1 + rand()% (100); 
	cout<<"\tEste programa generara un numero aleatorio y tendra que adivinarlo el rango es de [1-100]"<<endl;
	do{
		
		while(true){
		
		cout<<"Digite un numero:";
		cin>>numero;
		
			if(cin.fail()){
				cout<<"\nEl dato ingresado es invalido"<<endl;
				cin.clear(),
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
			}
			
			else if(numero<1 ){
				cout<<"\nEl numero ingresado no puede ser menor a 1"<<endl;
			}
			
			else if(numero>100 ){
				cout<<"\nEl numero ingresado no puede ser mayor a 100"<<endl;
			}
			
			else{
				break;
			}
		}
	
	if(numero>dato){
		cout<<"\nEl numero ingresado es muy alto"<<endl;
		contador+=1;
	}
	
	else if(numero<dato){
		cout<<"\nEl numero ingresado es muy bajo"<<endl;
		contador+=1;
	}
	
	else{
		cout<<"\nFelicidades!. Adivinastes el numero"<<endl;
		contador+=1;
	}
		
	
	}while(numero!=dato);
	
	cout<<'\n'<<"\tDatos"<<endl;
	cout<<"\nNumero aleatorio:"<<dato<<endl;
	cout<<"Numero de intentos: "<<contador<<endl;
	
	
	
	
	
	
	cout<<"\nPress enter to exit...";
	cin.ignore();
	cin.get();
	return 0;
}
