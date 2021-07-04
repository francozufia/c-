#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char vectorA[20],vectorB[20];
	int i,j,longitud;
	bool equivalente;
	equivalente=false;
	
	cout<<"ingrese los elementos de la primera cadena:"<<endl;
	cin>>vectorA;
	longitud=strlen(vectorA);
	cout<<"ingrse los elementos de la segunda cadena:"<<endl;
	cin>>vectorB;
	
	for(i=0;i<longitud;i++){
		if(vectorA[i]==vectorB[0]){
		
			for(j=0;j<longitud;j++){
				if(vectorA[i]!=vectorB[j]){
					equivalente=false;
				}	
				else{
				equivalente=true;
				}
				i++;
				if(i>longitud-1){
					i=0;
				}
			}
		}	
	}
	if(equivalente==true){
		cout<<"el vector A :[ "<<vectorA<<" ] es equivalente al vector B: ["<<vectorB<<"]"<<endl;
	}
	else{
		cout<<"el vector A :[ "<<vectorA<<" ] no es equivalente al vector B: ["<<vectorB<<"]"<<endl;
	}
	return 0;
}	

	
