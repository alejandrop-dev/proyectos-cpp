//Escribe un programa que defina un vector de números y calcule la suma de sus elementos.
#include<iostream>
#include<limits>
using namespace std;
int main (){
	
	cout<<"\tEste programa calculara la suma de los elementos de un vector"<<endl;
 
	int numeros[]={1,2,3,4,5};
	int suma=0;
	int tamano_vector= sizeof (numeros) / sizeof(numeros[0]);
	cout<<"Los elementos del vector son:"<<endl;
	
	for(int i=0;i<tamano_vector;i++){
		cout<<numeros[i]<<" ";
	}
	
	cout<<'\n';
	cout<<"\nLa suma de los vectores es:"<<endl;
	
	for(int i=0;i<tamano_vector;i++){
		suma+=numeros[i];
	}
	
	cout<<"Suma:"<<suma<<endl;
	
	
	cout<<"\nPress enter to exit...";
	cin.ignore();
	cin.get();
	return 0;
}
