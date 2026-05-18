//Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo.
#include<iostream>
#include<vector>
#include<limits>
using namespace std;
int main (){
	
	cout<<"Este programa va a leer 5 numeros y los va a multiplicar por dos"<<endl;
	
	vector<int>numero_original(5);
	vector<int>numeros(5);
	vector<int>vector2(5);
	for(int i=0;i<5;i++){
		
	    while(true){
		cout<<"\nIngrese el numero #"<<(i+1)<<": ";
		cin>>numeros[i];
		
		    if(cin.fail()){
		    	cout<<"El valor ingresado es invalido"<<endl;
		    	cin.clear();
		      	cin.ignore(numeric_limits<streamsize>::max(),'\n');
		    
	    	}
	    	else{
	    		numero_original[i]=numeros[i];
	    		break;
			}
		}
		
	}
	
	for(int i=0;i<5;i++){
		vector2[i]=numeros[i]*2;
	}
	
	cout<<"\nNumeros ingresados multiplicados por 2"<<endl;
	
	for(int i=0;i<5;i++){
	cout<<"#"<<(i+1)<<": "<<numero_original[i]<<" * "<<"2 : "<<vector2[i]<<endl;
	}
	
	
	
	cout<<"\nPress enter to exit...";
	cin.ignore();
	cin.get();
	
	return 0;
}
