#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void procedimiento1(int notas[],int i);
void procedimiento2(int notas[],int i);

int main(){
    int notas[10],i;

    procedimiento1(notas,i);

    procedimiento2(notas,i);

    return 0;
}

void procedimiento1(int notas[],int i){
    
    for(i=0;i<10;i++){
        do{
        cout<<" ingrese la nota "<<i+1<<" : ";
        cin>>notas[i];
        
        }while(notas[i]>10 || notas[i]<0);
    }
}
void procedimiento2(int notas[],int i){

    int j;

    for(i=0;i<10;i++){
        for(j=notas[i];j<10;j++){
           
            cout<<"notas superiores a :"<<notas[i]<<" son "<<j+1<<endl; 
            }  
        }
    }     


