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
    float promedio=0.0;
    float suma=0.0;
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
    for(int i=0;i<10;i++){
        alumno_1.suma=alumno_1.notas[i]+alumno_1.suma;
        
    }
    alumno_1.promedio=alumno_1.suma/10;

    cout<<"el promedio es :"<<alumno_1.promedio<<endl;
    if(alumno_1.promedio>=6){
        cout<<"true"<<endl;
    }
    else if(alumno_1.promedio<=5.9){
       cout<<"false"<<endl;
    }
    
    return 0;
}


