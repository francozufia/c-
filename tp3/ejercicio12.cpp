#include <time.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	srand(time(NULL));
	int asientos[20][4];    			     
	int i;
	for(i=0;i<19;i++){
		asientos[i][0]=rand()%2;
		asientos[i][1]=rand()%2;
		asientos[i][2]=0;
		if (i==4 || i==5 ||  i==6 ){
			asientos[i][3]=0;
		}
		else{
			asientos[i][3]=rand()%2;
		}
	}
	
	for(i=0;i<19;i++){
		cout<<"    "<<asientos[i][0];
		cout<<"    "<<asientos[i][1];
		cout<<"    "<<" PASILLO ";
		if (i==4 ||  i==5 ||  i==6 ){
			cout<<"     "<<" ESC "<<endl;
		}
		else{
			cout<<"     "<<asientos[i][3]<<endl;
		}
		cout<<endl;
	}
	
	return 0;
}
