#include <stdio.h>
int main (){
	
	float dinero;
	int dospesos;
	int unopesos;
	int cicuentacentavos;
	int veinticincocentavos;
	int diezcentavos;
	int cincocentavos;
	
	printf("ingrese la cantidad de monedas de dos pesos\n");
	scanf("%d",&dospesos);
	
	printf("ingrese la cantidad de monedas de un peso\n");
	scanf("%d",&unopesos);
	
	printf("ingrese la cantidad de monedas de cicuentacentavos\n");
	scanf("%d",&cicuentacentavos);
	
	printf("ingrese la cantidad de monedas de veinticincocentavos\n");
	scanf("%d",&veinticincocentavos);
	
	printf("ingrese la cantidad de monedas de diezcentavos\n");
	scanf("%d",&diezcentavos);
	
	printf("ingrese la cantidad de monedas de cincocentavos\n");
	scanf("%d",&cincocentavos);
	
	
	dinero = dospesos*2 + unopesos + cicuentacentavos*0.50 + veinticincocentavos*0.25 + diezcentavos*0.10 + cincocentavos *0.05;
	
	printf("el total de dinero en la sucursal es PESOS: $  %f " , dinero);
	
	return 0;

}
