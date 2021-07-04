#include <iostream>
#include <time.h>
using namespace std;

void arreglo(int n,int vector[]);

int main(){
    int n;
    cout<<"Ingrese el tamaño del arreglo : ";
    cin>>n;
    int vector[n];
    system ("clear");
    arreglo(n,vector);
    return 0;
}
void arreglo(int n,int vector[]){
    srand(time(NULL));
    int cont=0,num;
    for(int i = 0; i <n;i++){
        vector[i] = rand()%6;
    }
    for(int i=0;i<n;i++){
        cout<<vector[i]<<endl<<endl; 
    }
    cout<<"ingrese que numero desea buscar : ";
    cin>>num;
    for(int i = 0; i <n;i++){
        if(vector[i]==num){
            cout<<"Se encontro el numero "<<num<<" en la posicion : "<<i<<endl;
            cont=cont+1;
        }
        else if(num>5){
            cout<<"Ese numero esta fuera del array "<<endl;
            break;
        }
    }
    cout<<"Hubo "<<cont<<" coincidencias "<<endl;

}    
