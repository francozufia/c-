#include <time.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int i,j,contadorUDA=0,contadorVIS=0,contadorEMP=0;		
	float suma=0,promedio;		
	srand(time(NULL));	
	int resultados[50][2];
	for(i=0;i<50;i++){															//	le asigna los valores aleatorios a la matriz//
		for(j=0;j<2;j++){
			resultados[i][j]=rand()%7;									//use un 7 para el random,asi el resultado maximo llega a 6//
		}
	}
	cout<<"      uda          visitante "<<endl;					// muestra los valores aleatorios en una tabla//
	for(i=0;i<50;i++){
		for(j=0;j<2;j++){
			cout<<"   |  "<<resultados[i][j]<<"    |    ";
			suma=suma+resultados[i][j];
		}
		cout<<endl<<endl;
	}
	promedio=suma/100;
	cout<<"el promedio de goles es de : "<<promedio<<endl;
	cout<<"---------------------------------"<<endl;
	for(i=0;i<50;i++){															
		if (resultados[i][0] ==6){
			cout<<"partido : "<<i<< " UDA hizo mas goles "<<endl;
		}
		if(resultados[i][1] == 6){
			cout<<"partido : "<<i<< " UDA recibio mas goles"<<endl;
		}
	}
	for(i=0;i<50;i++){															
		if (resultados[i][0] > resultados [i][1]){
			contadorUDA=contadorUDA+1;
		}
		if(resultados[i][0] == resultados [i][1]){
			contadorEMP=contadorEMP+1;
		}
		if(resultados[i][0] <resultados [i][1]){
			contadorVIS=contadorVIS+1;
		}		
	}
	cout<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"la uda gano : "<<contadorUDA<<" partidos "<<endl;
	cout<<"el visitante gano : "<<contadorVIS<<" partidos "<<endl;
	cout<<"hubo : "<<contadorEMP<<" empates "<<endl;
	cout<<"---------------------------------"<<endl;
	
	return 0;
}
