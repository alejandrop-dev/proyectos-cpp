/*1. Escribe un programa que lea de la entrada estandar dos numeros y muestre 
 en la salida estandar su suma, resta, multiplicacion y division */
 #include<iostream>
 using namespace std;
 int main(){
 	float n1,n2,suma=0,resta=0,multiplicacion=0,division=0;
 	
 	cout<<"\tEste programa va a realizar las operaciones basicas de matematicas"<<endl;
 	
 	cout<<"Digite un numero:";   cin>>n1;
 	cout<<"Digite otro numero:";   cin>>n2;
 	
 	suma=n1+n2;
 	resta=n1-n2;
 	multiplicacion=n1*n2;
 	division=n1/n2;
 	
 	cout<<"\nLas operaciones matematicas de "<<n1<<" y "<<n2<<" son:"<<endl;
    cout<<"La suma es:"<<suma<<endl;
	cout<<"La resta es:"<<resta<<endl;
	cout<<"La muliplicacion es:"<<multiplicacion<<endl;
	cout<<"La division es:"<<division<<endl; 	
 	

 return 0;	
 }
