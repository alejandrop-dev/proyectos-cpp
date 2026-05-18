//1. Escribe la siguiente expresión como expresión en c++: a/b + 1
#include<iostream>
#include<stdlib.h>
using namespace std;
int main (){
	float n1,n2, result=0;
	 cout<<"\t This program va a realizar la siguiente expresion:  (a/b)+ 1"<<endl;
	 cout<<"Ingrese the valor de a: ";   cin>>n1;
	 cout<<"Ingrese the valor de b: ";   cin>>n2;
	 result= (n1/n2)+1;
	 cout.precision(2); /* Esta linea de codigo nos sirve para redondear "  cout.precision " y el (x) es la cantidad 
	 de numeros que quieres que se redonde. Y se pone antes de imprimir el resultado  */
	  
	 cout<<"Resultado"<<endl;
	 cout<<"("<<n1<<"/"<<n2<<")"<<"+1= "<<result<<endl;
	 system("pause");
	return 0;
}
