#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int i;
	char cadena[10] , copia[10];
	cout<<"ingrese palabra:"<<endl;
	cin>>cadena;
	
	for(i=(strlen(cadena)-1);i>=0;i--){
		copia[strlen(cadena)-1-i]=cadena[i];
	}
	copia[strlen(cadena)]='\0';
	
	if(strcmp(cadena,copia)==0){
		cout<<"la palabra es palindroma"<<endl;
	}
	else{
		cout<<"no es palindroma"<<endl;
	}
	
	return 0;
}
