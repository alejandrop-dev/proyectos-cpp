/*Escribe un programa que lea de la entrada estándar tres números.
Después debe leer un cuarto número e indicar si el número coincide con alguno de los introducidos con anterioridad.*/
#include<iostream>
#include<limits>
using namespace std;
int main (){
	cout<<"\tEste programa le va a pedir 3 numeros y luego un cuarto numero e indicar si coincide con alguno introducido con anterioridad"<<endl;
	int numero[3];
	int numero4;
	for( int i=0;i<3;i++){
		while(true){
		cout<<"Ingrese el numero #"<<(i+1)<<": ";
		cin>>numero[i];
		if(cin.fail()){
			cout<<"El dato ingresado es invalido"<<endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else{
			break;
		}
	}	
}


    while(true){
	cout<<"Ingrese el cuarto numero para comparar: ";
	cin>>numero4;
	if(cin.fail()){
		cout<<"El dato ingresado es invalido"<<endl;
	}
	else{
		break;
	}
}
	cout<<"Los numeros que coinciden con el cuarto numero son:"<<endl;
	
	for(int i=0;i<3;i++){
		if(numero4 ==numero[i]){
			cout<<"Numero #"<<(i+1)<<": "<<numero[i]<<endl;
		}
	}
	
	cout<<"Press enter to exit...";
	cin.ignore();
	cin.get();
	
	return 0;
}
