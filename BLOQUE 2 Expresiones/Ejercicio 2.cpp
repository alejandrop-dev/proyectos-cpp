//Ejercicio 2: Escribe la siguiente expresión como expresión en C++: (a+b)/(c+d)
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	cout<<"\tThis program va a realizar la siguiente expresion:(a+b)/(c+d)"<<endl;
    
	double na,nb,nc,nd,result;
	
	cout<<"Ingrese el valor de a:";   cin>>na;
	cout<<"Ingrese el valor de b:";   cin>>nb;
	cout<<"Ingrese el valor de c:";   cin>>nc;
	cout<<"Ingrese el valor de d:";   cin>>nd;
	
	result = (na+nb)/(nc+nd);
	cout.precision(2);
	
	cout<<"Datos ingresados:"<<"("<<na<<"+"<<nb<<")"<<"/"<<"("<<nc<<"+"<<nd<<")="<<result<<endl;


	system("pause");
	return 0;
}
