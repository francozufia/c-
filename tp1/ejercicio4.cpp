#include <stdio.h>
int main (){
	int entradacincuentapesos;
	int entradaveinticincopesos;
	int recaudaciona;
	int gastosa;
	int gananciasa;
	int recaudacionb;
	int gastosb;
	int gananciasb;
	int recaudaciontotal;
	int gastototal;
	int gananciatotal;
	
	
	printf("ingrese la cantida de entradas de cincuenta pesos que se  vendieron\n");
	scanf("%d",&entradacincuentapesos);
	
	printf("ingrese la cantida de entradas de venticinco pesos que se vendieron\n");
	scanf("%d",&entradaveinticincopesos);
	
	recaudaciona =(50 * entradacincuentapesos);
	printf("\nla recaudacion de las entradas de 50 pesos fue : %d" , recaudaciona);

	gastosa =(12 * entradacincuentapesos);
	printf("\nlos gastos de las entradas de 50 pesos fue : %d" , gastosa);

	gananciasa =(38 * entradacincuentapesos);
	printf("\nlas ganancias de las entradas de 50 pesos fue : %d" , gananciasa);
	
	recaudacionb =(25 * entradaveinticincopesos);
	printf("\n\nla recaudacion de las entradas de 25 pesos es de : %d" , recaudacionb);
	
	gastosb =(9* entradaveinticincopesos);
	printf("\nlos gastos de las entradas de 25 pesos es de : %d" , gastosb);
	
	gananciasb= (16* entradaveinticincopesos);
	printf("\nlas ganancias de las entradas de 25 pesos es de : %d" , gananciasb);

	
	recaudaciontotal = recaudaciona + recaudacionb;
	gastototal = gastosa + gastosb;
	gananciatotal = gananciasa + gananciasb;
	
	printf("\n\nla recaudaciòn total es de : %d" , recaudaciontotal);
	printf("\nel gasto total es de : %d" , gastototal);
	printf("\nla ganancia total es de : %d" , gananciatotal);
	
	
	return 0;
	
	}

