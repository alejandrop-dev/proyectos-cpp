// Realice un programa que calcule la descomposición en factores primos de un número entero.
#include<iostream>
#include<limits>
using namespace std;
int main (){
	
	cout<<"\tEste programa calculara la descomposición en factores primos de un número entero"<<endl;
	
	int numero,divisor=2,numero_original;
	while(true){
		
		cout<<"\nIngrese un numero entero: ";
	    cin>>numero_original;
	    	if(cin.fail()){
	    		cout<<"El dato ingresado es invalido"<<endl;
	    		cin.clear();
	    		cin.ignore(numeric_limits<streamsize>::max(),'\n');
			}
			
			else if(numero_original<=0){
				cout<<"El numero ingresado no puede ser menor o igual a 0"<<endl;
				cin.clear();
	    		cin.ignore(numeric_limits<streamsize>::max(),'\n');
			}
			
			else if(numero_original==1){
				cout<<"El numero ingresado tiene que ser mayor a 1"<<endl;
				cin.clear();
	    		cin.ignore(numeric_limits<streamsize>::max(),'\n');
			}
			else{
				break;
			}
	
	}
	
	numero=numero_original;
	cout<<"\nDescomposición en factores primos de "<<numero<<endl;
	
	cout<<'\n';
	cout<<numero_original<<"= ";
	
	bool primer_factor= true;
	while(numero>1){
		
		while(numero % divisor== 0){
			
			if (!primer_factor){
				cout<<"*";
			}
			cout<<divisor;
			primer_factor=false;
			numero= numero / divisor;
		}
		
		divisor ++;
		
	}
	
	
	cout<<'\n';
	cout<<"\nPress enter to exit...";
	cin.ignore();
	cin.get();
	return 0;
}
