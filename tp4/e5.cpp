#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <string.h>
using namespace std;

void cargarnombres(char nombres[20][14]);
void letramasrepetida(char nombres[20][14]);

int main(){

    char nombres[20][14];
    cargarnombres(nombres);
    letramasrepetida( nombres);
   
    return 0;
}

void cargarnombres(char nombres[20][14]){
    int i,j;
    for(i=0;i<20;i++){
        cout<<"ingrese el nombre numero :"<<i+1<<endl;          //al no usasr cin.getline no puedo poner espacio entre el nombre
        cin>>nombres[i];     
    }
} 

void letramasrepetida(char nombres[20][14]){
    int mayor = 0;
    int i,j;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,cont_i=0,cont_j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
    
    for(i=0;i<20;i++){
        for(j=0;j<14;j++){
            
            if(nombres[i][j]=='a'){
                a++;
            }
            if(nombres[i][j]=='b'){
                b++;
            }
            if(nombres[i][j]=='c'){
                c++;
            }
            if(nombres[i][j]=='d'){
                d++;
            }
            if(nombres[i][j]=='e'){
                e++;
            }
            if(nombres[i][j]=='f'){
                f++;
            }
            if(nombres[i][j]=='g'){
                g++;
            }
            if(nombres[i][j]=='h'){
                h++;
            }
            if(nombres[i][j]=='i'){
                cont_i++;
            }
            if(nombres[i][j]=='j'){
                cont_j++;
            }
            if(nombres[i][j]=='k'){
                k++;
            }
            if(nombres[i][j]=='l'){
                l++;
            }
            if(nombres[i][j]=='m'){
                m++;
            }
            if(nombres[i][j]=='n'){
                n++;
            }
            if(nombres[i][j]=='o'){
                o++;
            }
            if(nombres[i][j]=='p'){
                p++;
            }
            if(nombres[i][j]=='q'){
                q++;
            }
            if(nombres[i][j]=='r'){
                r++;
            }
            if(nombres[i][j]=='s'){
                s++;
            }
            if(nombres[i][j]=='t'){
                t++;
            }
            if(nombres[i][j]=='u'){
                u++;
            }
            if(nombres[i][j]=='v'){
                v++;
            }
            if(nombres[i][j]=='w'){
                w++;
            }
            if(nombres[i][j]=='x'){
                x++;
            }
            if(nombres[i][j]=='y'){
                y++;
            }
            if(nombres[i][j]=='z'){
                z++;
            }
        }
    }

    if(1<a++)
        cout<<"la letra A sale : " <<a++<<" veces"<<endl;
    if(1<b++)
        cout<<"la letra B sale : " <<b++<<" veces"<<endl;
    if(1<c++)
        cout<<"la letra C sale : " <<c++<<" veces"<<endl;
    if(1<d++)
        cout<<"la letra D sale : " <<d++<<" veces"<<endl;
    if(1<e++)
        cout<<"la letra E sale : " <<e++<<" veces"<<endl;  
    if(1<f++)
        cout<<"la letra F sale : " <<f++<<" veces"<<endl; 
    if(1<g++)
        cout<<"la letra G sale : " <<g++<<" veces"<<endl;
    if(1<h++)
        cout<<"la letra H sale : " <<h++<<" veces"<<endl;
    if(1<i++)
        cout<<"la letra I sale : " <<cont_i++<<" veces"<<endl;
    if(1<j++)
        cout<<"la letra J sale : " <<cont_j++<<" veces"<<endl;
    if(1<k++)
        cout<<"la letra K sale : " <<k++<<" veces"<<endl;
    if(1<l++)
        cout<<"la letra L sale : " <<l++<<" veces"<<endl;
    if(1<m++)
        cout<<"la letra M sale : " <<m++<<" veces"<<endl;
    if(1<n++)
        cout<<"la letra N sale : " <<n++<<" veces"<<endl;
    if(1<o++)
        cout<<"la letra O sale : " <<o++<<" veces"<<endl;
    if(1<p++)
        cout<<"la letra P sale : " <<p++<<" veces"<<endl;
    if(1<q++)
        cout<<"la letra Q sale : " <<q++<<" veces"<<endl;
    if(1<r++)
        cout<<"la letra R sale : " <<r++<<" veces"<<endl;
    if(1<s++)
        cout<<"la letra S sale : " <<s++<<" veces"<<endl;
    if(1<t++)
        cout<<"la letra T sale : " <<t++<<" veces"<<endl;
    if(1<u++)
        cout<<"la letra U sale : " <<u++<<" veces"<<endl;
    if(1<v++)
        cout<<"la letra V sale: " <<v++<<" veces"<<endl;
    if(1<w++)
        cout<<"la letra W sale : " <<w++<<" veces"<<endl;
    if(1<x++)
        cout<<"la letra X sale : " <<x++<<" veces"<<endl;
    if(1<y++)
        cout<<"la letra Y sale : " <<y++<<" veces"<<endl;
    if(1<z++)
        cout<<"la letra Z sale : " <<z++<<" veces"<<endl; 

}   




