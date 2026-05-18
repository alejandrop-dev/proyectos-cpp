//Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sin utilizar la función pow.
#include<iostream>
#include<limits>
using namespace std;
int main(){
	int x,y,resultado;
	cout<<"\tEste programa va a calcular X^Y, los dos valores deberan ser enteros "<<endl;
	
	while(true){
	cout<<"Ingrese el valor de x: ";
	cin>>x;
	
    	if(cin.fail()){
    	cout<<"Dato invalido"<<endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');	
    	}
    	
    	else if(x<=0){
    	cout<<"El valor de x debe ser mayor a 0"<<endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');	
    	}	
    	
    	else{
    		break;
		}
	}
	
	resultado=x;
	
	while(true){
	
	cout<<"Ingrese el valor de y: ";
	cin>>y;
	    if(cin.fail()){
    	cout<<"Dato invalido"<<endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');	
    	}
    	
    	else if(y<=0){
    	cout<<"El valor de y debe ser mayor a 0"<<endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');	
    	}
    	
    	else{
    		break;
		}
	}
	
	cout<<"\nValores definidos"<<endl;
    cout<<"Valor de x: "<<x<<endl;
    cout<<"Valor de y: "<<y<<endl;
    cout<<endl;
    
    

	for(int i=1;i<y;i++){
	 	resultado*=x;
	
	}
	cout<<"Operacion:"<<endl;
	cout<<x<<"^"<<y<<"= "<<resultado<<endl;
	
	
	cout<<"\nPress enter to exit...";
	cin.ignore();
	cin.get();
	
	return 0;
}

