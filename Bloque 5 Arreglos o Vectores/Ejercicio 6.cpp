/*Escribe un programa que defina un vector de numeros y calcule si existe algun numero en el vector cuyo valor
 equivale a la suma del resto de numeros del vector.*/
#include<iostream>
#include<vector>
#include<limits>
using namespace std;
int main (){
	int n,numero_actual,suma=0,j=0;
	vector<int>numeros;
	cout<<"\tEste programa le dira que numeros hacen una suma en los numeros de su vector"<<endl;
	
	while(true){
	cout<<"\nIngrese la cantidad de numeros: ";
	cin>>n;
	if(cin.fail()){
		cout<<"El dato ingresado es invalido"<<endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
	}
	else if(n<=0){
		cout<<"La cantidad de los numeros no puede ser menor o igual a 0"<<endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
	}
	else{
		break;
	}	
	}
	numeros.resize(n);
	cout<<'\n';
	cout<<"\nIngreso de los numeros"<<endl;
	cout<<'\n';
	for(int i=0;i<n;i++){
		cout<<"Ingrese el numero #"<<(i+1)<<": ";
		cin>>numeros[i];
	}
	//Messaje temporal para ver si se suma correctamente todo 
	cout<<"\nSuma de los elemementos"<<endl;
	for(int i=0;i<n;i++){
		suma+=numeros[i];
		cout<<"Suma del "<<(i+1)<<" numero: "<<suma<<endl;
	}
	cout<<"\nResultado de la suma en conjunto: "<<suma<<endl;
	cout<<"\nVerificacion de resultados:"<<endl;
	
	bool encontrado=false;
	int numero_encontrado;
	
	for(int i=0;i<n;i++){
		if(numeros[i]==(suma-numeros[i])){
			encontrado=true;
			numero_encontrado=numeros[i];
			break;
		}
	
	}
	
	if(encontrado){
		cout<<"\nSi el numero "<<numero_encontrado<<" equivale a la suma del resto"<<endl;
	}
	else{
		cout<<"\nNo existe ningun numero que cumpla la condicion"<<endl;
	}
	

	cout<<"\nPress enter to exit...";
	cin.ignore();
	cin.get();
	return 0;
}
