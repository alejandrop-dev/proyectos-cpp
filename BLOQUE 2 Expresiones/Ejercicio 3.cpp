//3. Escribe la siguiente expresion matematicas como expresion en c++: (a+(b/c))/(d+(e/f))
#include<iostream>
#include<stdlib.h>
using namespace std;
int main (){
	cout<<"\tThis program will perform the following expression: (a+(b/c))/(d+(e/f))"<<endl;
	
	float na,nb,nc,nd,ne,nf,result=0;
	cout<<"enter the value of a:";   cin>>na;
	cout<<"enter the value of b:";   cin>>nb;
	cout<<"enter the value of c:";   cin>>nc;
	cout<<"enter the value of d:";   cin>>nd;
	cout<<"enter the value of e:";   cin>>ne;
	cout<<"enter the value of f:";   cin>>nf;
	
	result=(na+(nb/nc))/(nd+(ne/nf));
	cout.precision(2);
	
	cout<<"Data entered:"<<"("<<na<<"+("<<nb<<"/"<<nc<<"))/("<<nd<<"+("<<ne<<"/"<<nf<<"))="<<result<<endl;
	
	
	system("pause");
	return 0;
}
