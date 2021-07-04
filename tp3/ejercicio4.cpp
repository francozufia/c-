#include <iostream>
# include <time.h>
using namespace std;
int main(){
	srand(time(NULL));
	int vector1[3],vector2[3],i,vector3[3];
	
	cout<<" vector 1 : "<<endl;
	for(i=0;i<3;i++){
		vector1[i]=rand()%11;
		cout<<"   "<<vector1[i];
	}
	cout<<endl;
	cout<<" vector 2 : "<<endl;
	for(i=0;i<3;i++){
		vector2[i]=rand()%11;
		cout<<"   "<<vector2[i];
	}
	cout<<endl;
	cout<<" suma de los vectores : "<<endl;
	for(i=0;i<3;i++){
		vector3[i]=vector1[i]+vector2[i];
		cout<<"   "<<vector3[i];
	}

	return 0;
}
