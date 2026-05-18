/*
switch (expresión) {
  case valor1:
    // Bloque de código a ejecutar si expresión == valor1
    break;
  case valor2:
    // Bloque de código a ejecutar si expresión == valor2
    break;
  default:
    // Bloque de código a ejecutar si ninguna de las condiciones anteriores se cumple
}
*/
#include<iostream>
using namespace std;
int main (){
	int numero;
	
	cout<<"Digite un numero del 1-5:";
	cin>>numero;
	
	switch (numero){
		case 1: cout<<"Es el numero 1"<<endl;break;
		case 2: cout<<"Es el numero 2"<<endl;break;
		case 3: cout<<"Es el numero 3"<<endl;break;
		case 4: cout<<"Es el numero 4"<<endl;break;
		case 5: cout<<"Es el numero 5"<<endl;break;
		default: cout<<"El dato ingresado no es valido"<<endl;break;
	}
		
	cout<<"Press ester to exit..."<<endl;
	cin.ignore();
	cin.get();
		
	return 0;
}
