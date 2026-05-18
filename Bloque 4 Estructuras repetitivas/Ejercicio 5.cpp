/*Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o se introduzca el valor 0.
 El programa debe entregar la suma de los valores mayores a 0 introducidos.
*/
#include<iostream>
#include<limits>
using namespace std;
int main(){
	cout<<"\tEste programa va a sumar los numeros enteros mayores a 0 hasta que introduzca un valor en el rango de[20-30] y 0"<<endl;
	int numero=0,suma=0;
	
	do{
		if(numero>0){
		suma=suma+numero;
		}
			
	    while(true){
    	cout<<"Introduzca un numero: ";
    	cin>>numero;
    
        	if(cin.fail()){
    		cout<<"Dato ingresado invalido"<<endl;
    		cin.clear();
    		cin.ignore(numeric_limits<streamsize>::max(),'\n');
    		}
    		
    		else{
    			break;
			}
			
		}	
			
		
	}while((numero<20 || numero>30) && numero!=0);
	
	cout<<"\nLa suma de los numeros "<<endl;
	cout<<"Suma: "<<suma<<" numeros"<<endl;
	
	
	
	
	
	
	cout<<"\nPress enter to exit...";
	cin.ignore();
	cin.get();
	
	return 0;
}
