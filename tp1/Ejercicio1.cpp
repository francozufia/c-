#include <stdio.h>

int main(){
	float iva = 1.21;
	float valordia;
	int cantidad;
	float frigobar = 1.33;

	printf("ingrese la cantidad de dìas que se alojaron\n");
	scanf("%d", &cantidad);

	printf("ingrese el valor del dìa\n");
	scanf("%f", &valordia);

	printf("El gasto con frigobar es: %f \n", ((cantidad * valordia) * frigobar));
	printf("El gasto con el recargo es de: %f \n" ,((cantidad * valordia) * iva ));
	
		
	
	return 0;
}
