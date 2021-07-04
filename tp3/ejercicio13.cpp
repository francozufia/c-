#include <time.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main(){
	double arreglo[100],suma=0,menor=100,promedio,varianza=0,desviacion;						//use float para que sea mas preciso//
	int i;
	srand48(time(NULL));
	for(i=0;i<100;i++){
		arreglo[i]=drand48() * (50.0) ;
	}
		for(i=0;i<100;i++){
		cout<<arreglo[i]<<endl<<endl;
	}
	for(i=0;i<100;i++){
		suma=arreglo[i]+suma;
		if(arreglo[i]<menor){
			menor=arreglo[i];
		}
		varianza=varianza+pow(arreglo[i]-promedio,2);		//en esta linea me tira un error de compilacion pero funciona igualmente//
		varianza=varianza/100;														//el 100 es por el tamaño del arreglo//
		desviacion=sqrt(varianza);
	}
	promedio=suma/100;
	cout<<" el menor numero del array es : "<<menor<<endl;
	cout<<" la suma de los 100 elementos del arreglo es : "<<suma<<endl;
	cout<<" la media del arreglo es : "<<promedio<<endl;
	cout<<" la varianza es : "<<varianza<<endl;
	cout<<" la desviacion es : "<<desviacion<<endl;
	
	return 0;
}
