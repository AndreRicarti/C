/*
	Ponteiro usando passagem por referência
    @author Son182
    @Date : 15/11/2016
*/

#include <stdio.h>

void calc(int x, int y, int *s){
	*s = x + y;
}

main(){
	int soma;
	
	calc(5,6,&soma);
	
	printf("A soma de 5 + 6 = %i", soma);	
}
