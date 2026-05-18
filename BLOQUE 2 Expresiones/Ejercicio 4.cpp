// Ejercicio 4: Escribe la siguiente expresión como expresión en C++: a + (b/(c-d))
#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
	cout<<"\tThis program will perform the following expression: a + (b/(c-d))"<<endl;
	
	double na,nb,nc,nd,result=0;
	cout<<"enter the value of a:";   cin>>na;
	cout<<"enter the value of b:";   cin>>nb;
	cout<<"enter the value of c:";   cin>>nc;
	cout<<"enter the value of d:";   cin>>nd;
	
	result= na+(nb/(nc-nd));
	cout.precision(2);
	
	cout<<"Data entered:"<<na<<"+("<<nb<<"/("<<nc<<"-"<<nd<<"))="<<result<<endl;
	
	
	system("pause");
	return 0;
}
