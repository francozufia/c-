#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int vec1[6]={3,4,5,6,7,8 }, vec2[6]={25,26,27,28,29,30 },i,aux=0;
	
	cout<<"primer vector : "<<endl;
	for(i=0;i<6;i++){
		aux=vec1[i];
		cout<<aux<<endl;
	}
	cout<<"segundo vector : "<<endl;
	for(i=0;i<6;i++){
		aux=vec2[i];
		cout<<aux<<endl;
	}	
	cout<<"mezcla de los vectores :"<<endl;
		for(i=0;i<6;i++){
		if(vec2[i]%2==1){
			aux=vec1[i];
			cout<<aux<<endl;
		}
		if(vec1[i]%2==0){
			aux=vec2[i];
			cout<<aux<<endl;
		}
	}
	for(i=0;i<6;i++){	
		 if (vec1[i]%2==1){
			aux=vec2[i];
			cout<<aux<<endl;
		}
		if (vec2[i]%2==0){
			aux=vec1[i];
			cout<<aux<<endl;
		}
	}	
	return 0;
}
