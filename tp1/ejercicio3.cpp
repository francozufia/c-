#include <stdio.h>
 int main(){
	float Kms;
	int Bultos;
	float Total;
	
	printf("Ingrese la cantidad de km recorridos\n");
	scanf("%f",&Kms);
	
	printf("Ingrese la cantidad de bultos\n");
	scanf("%d",&Bultos);
	
	Total = ((Kms* 0.20) + (Bultos*0.40)) * 1.21;
	
	printf("La persona debera pagar la suma: %f" , Total);
		
	
	return 0;
	}

