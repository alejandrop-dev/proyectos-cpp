//Escribe un programa que defina un vector de números y calcule la multiplicación acumulada de sus elementos.
#include<iostream>
#include<vector>
using namespace std;
int main (){
	
	cout<<"\tEste programa multiplicara los valores del vector"<<endl;
	
	int numeros[]={1,2,3,4,5};
	long long  multiplicacion=1;
	int limite_vector= sizeof(numeros)/sizeof(numeros[0]);
	
	cout<<"Valores del vector:"<<endl;
	cout<<"\nValores:";
	for(int i=0;i<limite_vector;i++){
		cout<<numeros[i]<<" ";
	}
	cout<<"\nOperacion:";
	for(int i=0;i<limite_vector;i++){
		cout<<numeros[i];
		if(i<limite_vector - 1){
			cout<<"*";
		}
		multiplicacion*=numeros[i];
	}
	cout<<"\nResultado:"<<multiplicacion<<endl;
	
	
	
	
	
	
	cout<<"\nPress enter to exit...";
	cin.ignore();
	cin.get();
	return 0;
}
