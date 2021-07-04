#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cstring>
using namespace std;

void tablero(char tabla[3][3]);
int main(){
char tabla[3][3];
tablero(tabla);
return 0;
}
void tablero(char tabla[3][3]){
    int x,y;
    int contador_x=0,contador_o=0; //cuenta las victorias del jugador x , o
    bool sigue;
    for(int x=1;x<4;x++){
        for(int y=1;y<4;y++){
        tabla[x][y]=' ';
        cout<<" | "<<tabla[x][y]<<" | ";
    }
    cout<<endl<<endl;
}
    sigue=true;
    while(sigue==true){ //puse esta condicion para que se repita indefinidamente y poder seguir jugando y cambiando la jugada
        cout<<" <     x    >"<<endl<<endl;
        cout<<"escriba la posicion de la fila que desea ocupar : ";
        cin>>x;
        cout<<"escriba la posicion de la columna que desea ocupar : ";
        cin>>y;
        tabla[x][y]='x';
        cout<<endl;
        for(int x=1;x<4;x++){
            for(int y=1;y<4;y++){
                cout<<" | "<<tabla[x][y]<<" | ";
            }
            cout<<endl<<endl;
        }
        if(tabla[x][1]=='x' && tabla[x][2]=='x' && tabla[x][3]=='x'){
            cout<<"Gano < x > "<<endl;
            contador_x=contador_x+1;
            cout<<"jugador < x > lleva "<<contador_x<<" partidas ganadas "<<endl<<endl;
        }
        if(tabla[1][y]=='x' && tabla[2][y]=='x' && tabla[3][y]=='x'){
            cout<<"Gano < x > "<<endl;
            contador_x=contador_x+1;
            cout<<"Jugador < x > lleva "<<contador_x<<" partidas ganadas "<<endl<<endl;
        }
        if(tabla[1][1]=='x' && tabla[2][2]=='x' && tabla[3][3]=='x'){
            cout<<"Gano < x > "<<endl;
            contador_x=contador_x+1;
            cout<<"jugador < x > lleva "<<contador_x<<" partidas ganadas "<<endl<<endl;
        }
        if(tabla[1][3]=='x' && tabla[2][2]=='x' && tabla[3][1]=='x'){
            cout<<"Gano < x > "<<endl;
            contador_x=contador_x+1;
            cout<<"jugador < x > lleva "<<contador_x<<" partidas ganadas "<<endl<<endl;
        }
        cout<<" <    o    >"<<endl<<endl;
        cout<<"escriba la posicion de la fila que desea ocupar : ";
        cin>>x;
        cout<<"escriba la posicion de la columna que desea ocupar : ";
        cin>>y;
        tabla[x][y]='o';
        cout<<endl;
        for(int x=1;x<4;x++){
            for(int y=1;y<4;y++){
            cout<<" | "<<tabla[x][y]<<" | ";
            }
            cout<<endl<<endl;
        }
        if(tabla[x][1]=='o' && tabla[x][2]=='o' && tabla[x][3]=='o'){
            cout<<"Gano < o > "<<endl;
            contador_o=contador_o+1;
            cout<<"jugador < o > lleva "<<contador_o<<" partidas ganadas "<<endl<<endl;
        }
        if(tabla[1][y]=='o' && tabla[2][y]=='o' && tabla[3][y]=='o'){
            cout<<"Gano < o > "<<endl;
            contador_o=contador_o+1;
            cout<<"jugador < o > lleva "<<contador_o<<" partidas ganadas "<<endl<<endl;
        }
        if(tabla[1][1]=='o' && tabla[2][2]=='o' && tabla[3][3]=='o'){
            cout<<"Gano < o > "<<endl;
            contador_o=contador_o+1;
            cout<<"jugador < o > lleva "<<contador_o<<" partidas ganadas "<<endl<<endl;
        }
        if(tabla[1][3]=='o' && tabla[2][2]=='o' && tabla[3][1]=='o'){
            cout<<"Gano < o > "<<endl;
            contador_o=contador_o+1;
            cout<<"jugador < o > lleva "<<contador_o<<" partidas ganadas "<<endl<<endl;
        } 
    }
}