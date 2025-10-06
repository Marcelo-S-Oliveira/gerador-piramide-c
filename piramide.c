#include <stdio.h>

int main(){
	
	int linhas;
	int i, j, k;
	
	printf("Entre com um numero de linhas para montar uma piramide: ");
	scanf("%d", &linhas);
	
	for(i = 0; i <= linhas; i++){
		for(j = 0; j < linhas - i; j++){

			printf(" ");
			
		}
		
		for(k = 0; k < 2 * i - 1; k++){
			
			printf("*");
	
		}
		printf("\n");
	}	
	
	return 0;
	
}
