#include <stdio.h>
void main()
{
	int soma, sub, mul,div;
	
	calc(5,6, &soma,&sub, &mul, &div); //Passa como par�metro para fun��o, qunado colocar &soma, passa como refer�ncia.
	
	printf("A soma: %d, substracao: %d, multiplicacao: %d, divisao: %d", soma, sub, mul, div);
}

void calc(int a, int b, int *sm, int *sb, int *m, int *d) // * significa que esta passando como refer�ncia. 
{
	*sm = a + b;
	*sb = a - b;
	*m = a * b;
	*d = a / b;
}
