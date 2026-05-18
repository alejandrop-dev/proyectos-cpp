/*Escribe un programa que defina un vector de numeros y muestre en la salida estándar el 
vector en orden inverso—del ultimo al primer elemento.*/

#include<iostream>
#include<vector>
#include<limits>
using namespace std;
int main (){
	cout<<"\tEste programa mostrara el orden inverso de los numeros que ingrese"<<endl;
	
	cout<<"Ingrese la cantidad de numeros que va a ingresar: ";
	int n;
	int auxiliar=0;
	vector<int>numeros;
	while(true){
		cout<<"\nCantidad: ";
    	cin>>n;
            if(cin.fail()){
            	cout<<"El dato ingresado es invalido"<<endl;
            	cin.clear();
            	cin.ignore(numeric_limits<streamsize>::max(),'\n');
			}
			else if(n<=0){
				cout<<"La cantidad ingresada no puede ser menor o igual a 0"<<endl;
				cin.clear();
            	cin.ignore(numeric_limits<streamsize>::max(),'\n');
			}
			else {
				break;
			}
	
	}
	numeros.resize(n);
	cout<<"\nIngreso de los numeros"<<endl;
	
	for(int i=0;i<n;i++){
		
		while(true){
		cout<<"Ingrese el numero #"<<(i+1)<<": ";
		cin>>numeros[i];
		if(cin.fail()){
            	cout<<"El dato ingresado es invalido"<<endl;
            	cin.clear();
            	cin.ignore(numeric_limits<streamsize>::max(),'\n');
			}
			else{
				break;
			}
		}
		
	}

	cout<<"Muestra de los numeros en inverso"<<endl;
	for(int i=n-1,numero=n;i>=0;i--,numero--){
		cout<<"Numero #"<<numero<<": "<<numeros[i]<<endl;
	}
	

		
		
		
	cout<<"\nPress enter to exit...";
	cin.ignore();
	cin.get();
	return 0;
}
