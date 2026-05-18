//Realice un programa que solicite de la entrada estándar un entero del 1 al 10 y muestre en la salida estándar su tabla de multiplicar.
#include<iostream>
#include<limits>
using namespace std;
int main (){
	//title
	cout<<"\tEste programa le va a pedir el numero de la tabla de multiplicar que quieras ver y hasta que numero deseas multiplicar"<<endl;
	
	int num_tabla,num_multipli,resultado;
	
	while(true){
		
	cout<<"Ingrese el numero de la tabla de multiplicar:";
	cin>>num_tabla;
	
	if(cin.fail()){
		cout<<"El dato ingresado es invalido"<<endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
	}
	
	else{
		break;
	}
	
}

    while(true){
		
	cout<<"Ingrese hasta que numero quiere multiplicar:";
	cin>>num_multipli;
	
	if(cin.fail()){
		cout<<"El dato ingresado es invalido"<<endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
	}
	
	else{
		break;
	}
	
}
    
    for(int i=1;i<=num_multipli;i++){
    	
    	resultado=num_tabla * i;
    	cout<<num_tabla<<" * "<<i<<" = "<<resultado<<endl;
	}


	
	cout<<"Press enter to exit...";
	cin.ignore();
	cin.get();
	
	return 0;
}
