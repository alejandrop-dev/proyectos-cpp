/* Escribe un programa que lea de la entrada estándar un vector de números y muestre en la salida estándar 
los numeros del vector con sus indices asociados.*/
#include<iostream>
#include<vector>
#include<limits>
using namespace std;
int main (){
	
	cout<<"\tEste programa le pedira una cantidad de arreglos y se los mostrara con su indice "<<endl;
	int n;
	vector<int>numeros;
	cout<<"\nIngrese la cantidad de arreglos"<<endl;
	while(true){
		cout<<"\nCantidad:";
		cin>>n;
		    if(cin.fail()){
		    	cout<<"El dato ingresado es invalido"<<endl;
		    	cin.clear();
		    	cin.ignore(numeric_limits<streamsize>::max(),'\n');
			}
			else if(n<=0){
				cout<<"El numero ingresado no puede ser 0"<<endl;
				cin.clear();
		    	cin.ignore(numeric_limits<streamsize>::max(),'\n');
			}
			else{
				break;
			}
		
	}	
	cout<<"ingrese los "<<n<<" numeros "<<endl;	
	numeros.resize(n);
	
	for(int i=0;i<n;i++){
		while(true){
		
		cout<<"Ingresa un numero #"<<(i+1)<<": ";
		cin>>numeros[i];
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
	
	cout<<"\nIndice de los numeros con sus valores: "<<endl;
	
	for(int i=0;i<n;i++){
		cout<<i<<"-> "<<numeros[i]<<endl;
	}
		
		
		
		
		
	cout<<"\nPress enter to exit...";
	cin.ignore();
	cin.get();
	return 0;
}
