/*Hacer un menú que considere las siguientes opciones:
  Caso 1: Cubo de un numero
  Caso 2: Numero par o impar
  Case 3: salir.*/
#include<iostream>
#include<limits>
#include<cmath>
using namespace std;
int main (){
	int opc,num,num_cub;
	cout<<"\tMenu matematico"<<endl;
	cout<<"1. Cubo de un numero"<<endl;
	cout<<"2. Numero par o impar"<<endl;
	cout<<"3. Salir"<<endl;
	
	while(true){
	cout<<"Opcion:";
	cin>>opc;
	if(cin.fail()){
		cout<<"Dato invalido"<<endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
	}
	else if(opc<1 || opc>3){
		cout<<"El numero ingresado no esta en el rango"<<endl;
	}
	else{
		break;
	}
}
	switch(opc){
		case 1:
			while(true){
			cout<<"\nIngrese el numero para elevarlo al cubo:";
			cin>>num;
			if(cin.fail()){
				cout<<"Dato invalido"<<endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
			}
			else if(num==0){
				cout<<"\nEl numero no puede ser 0"<<endl;
			}
			else{
				break;
			}
		}
		num_cub= pow(num,3);
		cout<<"";
		
		
		
		
	}
	
	
	
	
	cout<<"Press enter to exit...";
	cin.ignore();
	cin.get();
	return 0;
}
