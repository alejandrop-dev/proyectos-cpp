// Escriba un programa que calcule el valor de: 1+2+3+...+n
#include<iostream>
#include<limits>
using namespace std;
int main(){
	cout<<"\tEste programa va a calcular el valor de 1+2+3+...+n"<<endl;
	int n,suma=0;
	while(true){
		
		cout<<"Ingrese el valor de n: ";
		cin>>n;
		
		if(cin.fail()){
			cout<<"El dato ingresado es invaido"<<endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		
		else if(n<=0){
			cout<<"El numero debe ser mayor a 0"<<endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		
		else{
			break;
		}
	}
	
	cout<<"\nValor de n"<<endl;
	cout<<"n:"<<n<<endl;
	
	
	cout<<"\nOperacion:"<<endl;
	for(int i=1;i<=n;i++){
		
		cout<<i;
		suma+=i;
		if(i<n){
			cout<<"+";
		}
		
	}
	
	cout<<'\n';
	cout<<"\nResultado de la suma"<<endl;
	cout<<"Resultado: "<<suma<<endl;


	cout<<"\nPress enter to exit...";
	cin.ignore();
	cin.get();
	
	return 0;
}

