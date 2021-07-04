#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char cadena[30] ,subcadena[30];
	int i,longitud,verificacion;
	longitud=0;
	verificacion=1;

	cout<<"ingrese palabra:"<<endl;
	cin>>cadena;
	cout<<"ingrese la palabra para ver si esta contenida dentro de la cadena principal"<<endl;
	cin>>subcadena;
	
	for(i=0;subcadena[i];i++){
		longitud++;
	}
	for(i=0;i<longitud-1;i++){
		if(subcadena[i]==cadena[i]){
			verificacion=verificacion *1;
		}
		else{
			verificacion=verificacion*0;
		}
	}#
	if (verificacion==true){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	return 0;
}

