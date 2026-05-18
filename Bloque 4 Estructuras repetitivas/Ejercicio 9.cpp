//Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)
#include<iostream>
#include<limits>
using namespace std;
int main (){

    int n,resultado=1;
 
    cout<<"\tEste programa va a calcular 1*2*3*...*n (factorial)"<<endl;

    while(true){

    cout<<"Ingrese el valor de n:";
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
    cout<<"\nValor de n"<<endl;
    cout<<"n:"<<n<<endl;
    cout<<endl;
    
    cout<<"Factorial"<<endl;
    for(int i=1;i<=n;i++){
    cout<<i;
    resultado*=i;
        if(i<n){
        cout<<"*";
        }
        
    }
    cout<<endl;
    cout<<"\nResultados del factorial"<<endl;
    cout<<"Resultado:"<<resultado<<endl;
    
    cout<<"\nPress enter to exit...";
    cin.ignore();
    cin.get();

}
