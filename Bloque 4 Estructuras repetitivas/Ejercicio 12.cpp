//Hacer un programa que calcule el resultado de la siguiente expresion: 1-2+3-4+5-6...n
#include<iostream>
#include<limits>
using namespace std;
int main (){
	
	cout<<"\tEste programa va a realizar lo siguiente: 1-2+3-4+5-6...n"<<endl;
	
	int n,suma=0;
	
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
	for(int i=1;i<=n;i++){
		cout<<i;
		
		if(i<n){
			
			if(i%2==0){
			cout<<"+";
		//	suma+=i;
			}
			
			
			else if(i%2!=0){
			cout<<"-";
		//	suma-=i;
			}
		}
		
		
		if(i<=n){
			
			if(i%2==0){
		//	cout<<"+";
			suma-=i;
			}
			
			
			else if(i%2!=0){
		//	cout<<"-";
			suma+=i;
			}
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
