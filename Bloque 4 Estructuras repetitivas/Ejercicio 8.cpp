//Escriba un programa que calcule el valor de: 1+3+5+...+2n-1
#include<iostream>
#include<limits>
using namespace std;
int main(){
	
	cout<<"\tEste programa le va a mostrar 1+3+5+...+2n-1"<<endl;
	int n,impar_actual=0,resultado=0;
	
	while(true){
		cout<<"\nIngrese el numero de n:";
		cin>>n;
		
		if(cin.fail()){
			cout<<"El dato ingresado es invalido"<<endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		
		else if(n<=0){
			cout<<"El numero ingresado no puede ser menor o igual a 0"<<endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		
		else{
			break;
		}
	}
	
	cout<<"\nValor seleccionado"<<endl;
	cout<<"n:"<<n<<endl;
	
	cout<<endl;
	for(int i=1;i<=n;i++){
		impar_actual=(2*i)-1;
		resultado+=impar_actual;
		cout<<impar_actual;
		if(i<n){
			cout<<"+";
		}
	}
	
	cout<<endl;
	cout<<"\nResultado de la suma"<<endl;
	cout<<"Resultado:"<<resultado<<endl;
	

	cout<<"\nPress enter to exit...";
	cin.ignore();
	cin.get();
	
	return 0;
}
