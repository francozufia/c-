#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
	int numero[15];
	int i,aux=0,j;
	srand(time(NULL));
	for(i=0;i<15;i++){								//lleno vector numeros aleatorios entre 0 y 100//
		numero[i]=rand()%101;
	}
	cout<<" numeros desordenados : "<<endl;
	for(i=0;i<15;i++){								//muestro el vector//
		cout<<numero[i]<<endl;
	}
	cout<<endl;
	cout<<"numeros ordenados ascendentemente :"<<endl;
	for(i=0;i<15;i++){
		for(j=0;j<15;j++){
			if(numero[j]>numero[j+1]){
				aux=numero[j];
				numero[j]=numero[j+1];
				numero[j+1]=aux;
			}
		}
	}
	for(i=0;i<15;i++){
		cout<<numero[i]<<endl;
	}
	cout<<endl;
	cout<<"numeros ordenados descendentemente :"<<endl;
	for(i=0;i<15;i++){
		for(j=0;j<15;j++){
			if(numero[j]<numero[j+1]){
				aux=numero[j+1];
				numero[j+1]=numero[j];
				numero[j+1]=aux;
			}
		}
	}
	for(i=0;i<15;i++){
		cout<<numero[i]<<endl;
	}
	
	return 0;
}
