#include <stdio.h>
int main(){
	int i=1;	
	printf("%d\n",i);
	for(i=1;i<=96; ++i ){		
		i=i+4;
		printf ("%d\n",i); 
		i= i-2;
		printf("%d\n",i);
	}	
	return 0;
}


