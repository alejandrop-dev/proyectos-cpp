/*Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero. 
En ese momento el programa debe terminar y mostrar en la salida estándar el número de valores mayores que cero leídos.*/
#include<iostream>
#include<limits>
using namespace std;
int main (){
	
	cout<<"\tEste programa cuenta los números mayores que cero que ingreses. Ingresa '0' para terminar."<<endl;
	int numeros,i=0,a=0;
	
	do{
		
	while(true){
		cout<<"Inresar numero #"<<a<<": ";
		cin>>numeros;
		
	    	if(cin.fail()){
			cout<<"Dato invalido"<<endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
	    	}
	    	
		    else{	
		    a++;
	    	break;
	    	}
	}

	if(numeros>0){
	i++;	
	}	
	
		
	}while(numeros!=0);

	cout<<"Los numeros ingresados mayores a 0 son: "<<i<<endl;
	
	
	cout<<"Press enter to exit...";
	cin.ignore();
	cin.get();
	
	return 0;
}
