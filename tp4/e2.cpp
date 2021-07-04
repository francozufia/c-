#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void arreglo (int vec[],int i);
void calcularpromedio(int vec[],int i);

int main(){
    int vec[20],i=0,suma=0;
    float promedio=0;
    arreglo(vec,i); 
    calcularpromedio(vec,i);
    return 0;
}

void arreglo (int vec[],int i){
    srand(time(NULL));
    
    for(i=0;i<20;i++){
        vec[i]=rand()%20;
    }
    for(i=0;i<20;i++){
        cout<<vec[i]<<endl;
    }
}  

void calcularpromedio(int vec[],int i){
    float promedio=0;
    int suma=0;
    for(i=0;i<20;i++){
        suma=suma+vec[i];
    }
    promedio=suma/20;
    cout<<"el promedio de los vectores es:"<<promedio<<endl;
}
