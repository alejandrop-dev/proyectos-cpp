/*Desarrolle un programa que lea de la entrada estándar un vector de enteros
y determine el mayor elemento del vector*/
#include<iostream>
#include<vector>
#include<limits>
using namespace std;
int main (){
	cout<<"\tEste programa le va a pedir una cantidad de nuemros y le dira que numero es el mayor"<<endl;
	int n,mayor,numero_posicion=1;
	vector<int>numeros;
	cout<<"Ingrese la cantidad de numeros que quiere ingresar:"<<endl;
	while(true){
		cout<<"\nNumero: ";
		cin>>n;
		   if(cin.fail()){
		   	cout<<"El dato ingresado es invalido"<<endl;
		   	cin.clear();
		   	cin.ignore(numeric_limits<streamsize>::max(),'\n');
		   }
		   else if(n<=0){
		   	cout<<"El numero igresado no puede ser menor o igual a 0"<<endl;
		   	cin.clear();
		   	cin.ignore(numeric_limits<streamsize>::max(),'\n');
		   }
		   else{
		   	break;
		   }
	}
	
	numeros.resize(n);
	cout<<"Ingrese los "<<n<<" numeros para determinar el mayor"<<endl;
	for(int i=0;i<n;i++){
		cout<<"Ingrese el numero #"<<(i+1)<<": ";
		cin>>numeros[i];
	}
	
	cout<<"El numero mayor de los "<<n<<" ingresados es:";
	mayor=numeros[0];
	
	for(int i=1;i<n;i++){
	
		if(mayor<numeros[i]){
			mayor=numeros[i];
			numero_posicion=i+1;
		}

		
	}
	
	cout<<"\nNumero #"<<numero_posicion<<": "<<mayor<<endl;
		
		
		
	cout<<"\nPress enter to exit...";
	cin.ignore();
	cin.get();
	return 0;
}
