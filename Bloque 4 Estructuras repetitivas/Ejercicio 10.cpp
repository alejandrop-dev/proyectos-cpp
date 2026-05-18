//Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factoriales).
#include<iostream>
#include<limits>
using namespace std;
int main (){
	
	cout<<"\tEste programa va a realizar lo siguiente: 1!+2!+3!+...+n! (suma de factoriales)"<<endl;
	
	int n,suma=0,factorial=1;
	
	while(true){
		
		cout<<"ingrese el numero de n:";
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
	
	cout<<"Operacion"<<endl;
	for(int i=1;i<=n;i++){
		
		cout<<i<<"!";
		factorial*=i;
		suma+=factorial;
		
		if(i<n){
			cout<<"+";
		}
	}
	
	cout<<endl;
	cout<<"\nSuma de factoriales"<<endl;
	cout<<"Resultado:"<<suma<<endl;
	
	
	
	cout<<"\nPress enter to exit...";
	cin.ignore();
	cin.get();
	
	return 0;
}
