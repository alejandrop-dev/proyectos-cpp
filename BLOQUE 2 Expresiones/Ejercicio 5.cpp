//Ejercicio 5: Escriba un fragmento de programa que intercambie los valores de dos variables.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main (){
	
	cout<<"\tThis program will exchange the values of the variables"<<endl;
	cout<<"Example:"<<endl;
	cout<<"x=15   y=50 "<<endl;
	cout<<"Exchange:"<<endl;
	cout<<"x=50   y=15"<<endl;
	
	int x,y, aux;
	cout<<"\nEnter a values of x:";   cin>>x;
	cout<<"Enter a values of y:";   cin>>y; 
	
	aux=x;
	x=y;
	y=aux;
	
	cout<<"\nThe exchanged values are as follows:"<<endl;
	cout<<"The new values of 'x' is "<<x<<endl;
	cout<<"The new values of 'y' is "<<y<<endl;
	
	
	system("pause");
	return 0;
}
