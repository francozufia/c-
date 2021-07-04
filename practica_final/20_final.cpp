#include <iostream>
#include <stdlib.h>
using namespace std;

void playa(int estacionamiento[]);
void rellenado_playa(int estacionamiento[]);

int main(){
    int estacionamiento[15];
    playa(estacionamiento);
    rellenado_playa(estacionamiento);
    return 0;
}
void playa(int estacionamiento[]){
    for(int i=0 ;i<15;i++){
        estacionamiento[i]=0;
        cout<<"| "<<estacionamiento[i]<<" |";
    }
    cout<<endl<<endl;
}
void rellenado_playa(int estacionamiento[]){
    int i,decision,cont=0;      /* i: posicion para estacionarse */
    bool continuar=true;
    while(continuar==true){
        cout<<" 1 : Ingreso auto   2 : Salida de auto    3 : Fin del dia  ---> ";
        cin>>decision;
        cout<<endl;
        switch(decision){
            case 1:
                cout<<"ingrese en que lugar desea estacionarse : ";
                cin>>i;
                if(estacionamiento[i]==1){
                    cout<<endl;
                    cout<<"lugar ocupado "<<endl;
                    cont=cont-1;
                }
                if(estacionamiento[i]==0){
                    estacionamiento[i]=1;
                }
                cout<<endl;
                for(i=0;i<15;i++){
                    cout<<"| "<<estacionamiento[i]<<" |";   
                }
                cout<<endl<<endl;
                cont=cont+1;
            break;
            case 2:
                cout<<"ingrese en que lugar del que se irá : ";
                cin>>i;
                estacionamiento[i]=0;
                cout<<endl;
                for(i=0;i<15;i++){
                    cout<<"| "<<estacionamiento[i]<<" |";   
                }
                cout<<endl<<endl;
            break;
            case 3:
                playa(estacionamiento);
                cout<<"En la playa ingresaron : " <<cont<<" autos "<<endl; 
                continuar=false;
            break;
        }
    }
}