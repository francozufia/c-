#include <time.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	srand(time(NULL));
	int vendedores[5][10];
	int i,j,total=0,sumaA=0,sumaB=0,sumaC=0,sumaD=0,sumaE=0,mayor=0,menor=100,empleado,empleadoB;				//empleado la uso para saber quien  hizo mas ventas cuando busco el mayor// 
	for(i=0;i<5;i++){																																														//rmpleadoB la uso para saber quien hizo menos ventas cuando busco el menor//
		for(j=0;j<10;j++){
			vendedores[i][j]=rand()%10;
			total=total+vendedores[i][j];
		}
	}
	for(i=0;i<5;i++){
		cout<<"---------------------------------------"<<endl;
		for(j=0;j<10;j++){
			cout<<vendedores[i][j]<<" | ";
		}
		cout<<endl<<endl;
	}
	cout<<"---------------------------------------"<<endl;
	for(j=0;j<10;j++){
		sumaA=sumaA+vendedores[0][j];
		sumaB=sumaB+vendedores[1][j];
		sumaC=sumaC+vendedores[2][j];
		sumaD=sumaD+vendedores[3][j];
		sumaE=sumaE+vendedores[4][j];
	}
	cout<<" vendedor 1 recaudo : "<<sumaA<<" pesos "<<endl;
	cout<<" vendedor 2 recaudo : "<<sumaB<<" pesos "<<endl;
	cout<<" vendedor 3 recaudo : "<<sumaC<<" pesos "<<endl;
	cout<<" vendedor 4 recaudo : "<<sumaD<<" pesos "<<endl;
	cout<<" vendedor 5 recaudo : "<<sumaE<<" pesos "<<endl;
	cout<<endl;

	cout<<" el total es de : "<<total<<endl;
	cout<<endl;
	
	//En esta parte vemos el mayor
	if (sumaA > mayor ){
		mayor =sumaA ;
		empleado=1;
	}
	if (sumaB > mayor ){
		mayor =sumaB ;
		empleado=2;
	}
	if (sumaC > mayor ){
		mayor =sumaC ;
		empleado=3;
		
	}
	if (sumaD > mayor ){
		mayor =sumaD ;
		empleado=4;
		
	}
	if (sumaE > mayor ){
		mayor =sumaE ;
		empleado=5;
		
	}
	
	//En esta parte vemos el menor	
	if (sumaA < menor ){
		menor =sumaA ;
		empleadoB=1;
	}
	if (sumaB < menor ){
		menor = sumaB ;
		empleadoB=2;
	}
	if (sumaC < menor ){
		menor =sumaC ;
		empleadoB=3;
	}
	if (sumaD < menor ){
		menor =sumaD ;
		empleadoB=4;
	}
	if (sumaE < menor ){
		menor =sumaE ;
		empleadoB=5;
	}	
	
	cout <<" el vendedor "<<empleado<<" fue el que mas vendio , ganando: "<<mayor<<" pesos ."<<endl;
	cout <<" el vendedor "<<empleadoB<<" fue el que menos vendio , ganando : "<<menor<<" pesos . "<<endl;
	
	return 0;
}
