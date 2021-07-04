#include <iostream>
#include  <time.h>
using namespace std;
int main(){
	int numeros[15];
	int i,contador=0;
	srand (time(NULL));
	
	for(i=0;i<15;i++){
		numeros[i]=rand()%6;
		cout<<numeros[i]<<endl<<endl;
	}
	
	for(i=0;i<15;i++){
		if(numeros[i]==numeros[i+1]){
			contador=numeros[i];
		}
	}
	cout<<"el numero que mas aparece es: "<<contador<<endl;
	
	return 0;
}
