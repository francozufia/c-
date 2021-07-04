#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	float n[20],acum,promedio;
	int i;
	acum=0;
	srand(time(NULL));
	
	for(i=0;i<20;i++){
		n[i]=rand()%100;
		printf("%f\n",n[i]);
		acum=acum+n[i];
	}
	promedio=acum/20;
	printf("el promedio es %f\n",promedio);
	
	return 0;
}

