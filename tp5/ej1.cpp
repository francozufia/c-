#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
using namespace std;

struct talalumno{
    int alumno=0;
    char sexo;
    float notas[10];
    bool pasa;
    
}alumno_1;

int main(){
    cout<<"alumno :"<<endl;
    cin>>alumno_1.alumno;

    cout<<"sexo :"<<endl;
    cin>>alumno_1.sexo;
    
    for(int i=0;i<10;i++){
        do{
            cout<<"ingrese la nota"<<" "<<i+1<<endl;
            cin>>alumno_1.notas[i];
        }while(alumno_1.notas[i]<1 || alumno_1.notas[i]>10);
    }    
    cout<<"pasa :"<<endl;
    cin>>alumno_1.pasa;

    return 0;
}
