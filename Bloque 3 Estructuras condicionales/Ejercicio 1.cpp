// 1.Escriba un programa que lea dos números y determine cuál de ellos es el mayor.
#include<iostream>
#include<limits>
using namespace std;
int main (){
	//title
	cout<<"\tEste programa va a leer dos numeros y le va a decir cual es mayor"<<endl;
	//variables
	int number1,number2;
	//proceso
	while(true){
		cout<<"Ingrese el primer numero:";
		cin>>number1;
		if(cin.fail()){
			cout<<"El dato ingresado es invalido, por favor ingrese un numero entero"<<endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else{
			break;
		}
	}
	while(true){
		cout<<"Ingrese el segundo numero:";
		cin>>number2;
		if(cin.fail()){
			cout<<"El dato ingresado es invalido, por favor ingrese un numero entero"<<endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else{
			break;
		}
	}
	if(number1==number2){
		cout<<"Ambos numeros son iguale"<<endl;
	}
	else if (number1>number2){
		cout<<"El numero mayor es el "<<number1<<endl;
	}
	else{
		cout<<"El numero mayor es el "<<number2<<endl;
	}
	
	

	cout<<"Press enter to exit...";
	cin.ignore();
	cin.get();
	return 0;
}
