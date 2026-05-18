//Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n
#include<iostream>
#include<limits>
#include<cmath>
using namespace std;
int main (){
	
	cout<<"\tEste programa va a realizar lo siguiente: 2^1+2^2+2^3+...+2^n"<<endl;
	
	int n,base=2,suma=0,elevacion=0;
	
	while(true){
		
		cout<<"Ingrese el valor de n:";
		cin>>n;
		
		if(cin.fail()){
			cout<<"El dato ingresado es invalido"<<endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		
		else if(n<=0){
			cout<<"El valor de n no puede ser menor o igual a 0"<<endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		
		else{
			break;
		}
	}
	cout<<"\nValor de n"<<endl;
	cout<<"n:"<<n<<endl;
	
	cout<<"\nOperacion"<<endl;
	for(int i=1;i<=n;i++){   //base=2,suma=0,elevacion=0
		
		cout<<base<<"^"<<i;
		elevacion=pow(base,i);
		suma+=elevacion;
		    if(i<n){
		    cout<<"+";
			}
			
	}
	cout<<endl;
	
	cout<<"\nResultado de la operacion"<<endl;
	cout<<"Resultado:"<<suma<<endl;
	
	
	
	
	
	
	cout<<"\nPress enter to exit...";
	cin.ignore();
	cin.get();
	return 0;
}
