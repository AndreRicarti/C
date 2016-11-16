/*
	Fatorial
    @author Son182
    @Date : 15/11/2016
*/

#include <stdio.h>
#include <locale.h>

int Fatorial(int n){
	int i;
	i = n -1;
	for (i; i!=1; i--){
		n = n * i;
	}
	return n;
}

main(){
	int n;
	
	scanf("%i", &n);
	
	setlocale(LC_ALL, "Portuguese");
	printf("Fatorial de %i é = %i", n, Fatorial(n));
	
}
