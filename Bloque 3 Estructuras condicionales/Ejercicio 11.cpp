//Hacer un programa que simule un cajero automático con un saldo inicial de 1000 Dólares.
#include<iostream>
#include<limits>
using namespace std;
int main (){
	cout<<"\tBienvenido a tu cajero virtual"<<endl;
	
	float saldo_inicial=1000,retiro,restante,deposito;
	int opc;
	cout<<"1. Retirar dinero"<<endl;
	cout<<"2. Revisar el monto actual"<<endl;
	cout<<"3. Ingresar dinero a la cuenta"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<"Opcion:";
	
	while(true){
	cin>>opc;	
	
	if(cin.fail()){
		cout<<"\nEl dato ingresado es invalido"<<endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout<<"Ingrese una nueva opcion:";
	}
	
	else if(opc<1 || opc>4){
		cout<<"\nLa opcion no esta en el rango"<<endl;
		cout<<"Ingrese una nueva opcion:";
	}
	
	else{
		break;
	}
}
    switch(opc){
    	case 1:
    		
    		while(true){
    		cout<<"\nIngrese la cantidad que quiere retirar: $";
    		cin>>retiro;
    		
    		if(cin.fail()){
    			cout<<"Dato invalido"<<endl;
    			cin.clear();
    			cin.ignore(numeric_limits<streamsize>::max(),'\n');
    		}
    		
    		else if(retiro<=0){
				cout<<"Los retiros no pueden ser menor o igual a 0"<<endl;
			}

			else{
				break;
			}
			
		}
    		if(retiro>saldo_inicial){
    			cout<<"Usted no dispone de esa cantidad de dinero, su monto actual es: $"<<saldo_inicial<<endl;break;
			}
			
				else{
					restante= saldo_inicial-retiro;
					cout<<"Retiro exitoso"<<endl;
					cout<<"Saldo anterior: $"<<saldo_inicial<<endl;
					cout<<"Monto a retirar: $"<<retiro<<endl;
					cout<<"Monto restante: $"<<restante;break;
				}
		case 2:
			
			cout<<"Revision de su monto actual"<<endl;
			cout<<"Monto actual: $"<<saldo_inicial;break;
		
		case 3:
			cout<<"Deposito a la cuenta"<<endl;
			
			while(true){
			cout<<"Ingrese el monto a depositar: $";
			cin>>deposito;
			
			if(cin.fail()){
				cout<<"Dato invalido"<<endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
			}
			
			else if(deposito<=0){
				cout<<"Los depositos no pueden ser menor o igual a 0"<<endl;
			}
			
			else{
				break;
			}
			
		}
		    restante=saldo_inicial+deposito;
		    cout<<"Deposito exitoso"<<endl;
		    cout<<"Saldo anterior: $"<<saldo_inicial<<endl;
		    cout<<"Monto a depositar: $"<<deposito<<endl;
		    cout<<"Monto total: &"<<restante<<endl;break;
		    
		case 4:
	    	cout<<"Usted ha salido de nuestro banco virtual"<<endl;break;    
	}
	    cout<<"Press enter to exit...";
	    cin.ignore();
	    cin.get();

	return 0;
}
