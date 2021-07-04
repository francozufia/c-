#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int i,dia[20],alumnos=20;
	
	for(i=0;i<alumnos;i++){
		do{
			cout<<"alumno : "<<i<<" ingrese el dia :"<<endl;
			cin>>dia[i];
			cout<<"------------------------"<<endl;
		}while(dia[i]>30);
	}
	system ("clear");
	for(i=0;i<alumnos;i++){
		cout<<" Al alumno : "<<i<<" le conviene el dia : "<<dia[i]<<" del presente mes"<<endl;
		cout<<"--------------------------------------------------------"<<endl;
	}
	return 0;
}
