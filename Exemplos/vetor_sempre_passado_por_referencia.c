#include <stdio.h>
//Vetores, sempre é passado por referência.
//Vetor como parametro, sempre é passado por referência, mesmo sem o &.

void main()
{
	char x[50], y[50]];
	cadastro(x);
}

void cadastro(char nome[])
{
	nome[0] = 'A';
}
