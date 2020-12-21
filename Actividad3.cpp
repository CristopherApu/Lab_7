#include <iostream>

#include <stdio.h>

int main(){
	
	int numero;
	
	printf("Por favor, ingrese un numero:\n");
	scanf("%d", &numero);
	
	for( int i = 1 ; 1 <= numero ; i = i++){
		if (numero % i == 0){
		printf("Son Divisores %d\n", i);
		}
	}
return 0;
}
