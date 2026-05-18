// 2: Escriba un programa que lea tres números y determine cuál de ellos es el mayor.
#include<iostream>
#include<limits>
using namespace std;
int main (){
	//Title
	cout<<"\tEste programa le va a pedir que ingrese 3 numeros enteros y le va a decir cual es el mayor "<<endl;
	
	//variables
	double
	 number1,number2,number3;
	
	//Ingreso correcto del primer numero
	while(true){
		cout<<"Ingrese el primer numero:";
		cin>>number1;
		if(cin.fail()){
			cout<<"El dato ingresado es invalido"<<endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else{
			break;
		}
	}
	
	//Ingreso correcto del segundo numero 
	while(true){
		cout<<"Ingrese el segundo numero:";
		cin>>number2;
		if(cin.fail()){
			cout<<"El dato ingresado es invalido"<<endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else{
			break;
		}
	}
	
	//Ingreso correcto del tercer numero 
	while (true){
		cout<<"Ingrese el tercer numero:";
		cin>>number3;
		if(cin.fail()){
			cout<<"El dato ingresado es invalido"<<endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else{
			break;
		}
	}
	if(number1==0 && number2 ==0 && number3==0){
	     cout<<"Todos los numeros ingresados son 0"<<endl;
	 }
	else if(number1==number2 && number2==number3){
	   	 cout<<"Todos los numeros son iguales, el numero ingresado fue el:"<<number2<<endl;
	} 
	else if(number1>number2 && number1>number3){
		cout<<"El numero mayor es el "<<number1<<endl;
	}
	else if(number2>number1 && number2>number3){
		cout<<"El numero mayor es el "<<number2<<endl;
	}
	else if(number3>number1 && number3>number2){
		cout<<"El numero mayor es el "<<number3<<endl;
	}

	
	cout<<"Press enter to exit...";
	cin.ignore();
	cin.get();
	return 0;
}
