//Realice un programa que calcule y muestre en la salida estándar la suma de los cuadrados de los 10 primeros enteros mayores que cero.
#include<iostream>
#include<limits>
using namespace std;
int main (){

cout<<"Este programa le mostrara la suma de los cuadrados de los 10 primeros numeros"<<endl;
int suma=0,resultado;
for(int i=1;i<=10;i++){
	resultado= i*i;
	suma+=resultado;
	
}
cout<<"\nLa suma de los 10 primeros numeros elevados al cuadrado es:"<<suma<<endl;


cout<<"Press enter to exit...";
	cin.ignore();
	cin.get();
	
	return 0;
}
