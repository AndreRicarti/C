#include <stdio.h>
//Vetores, sempre � passado por refer�ncia.
//Vetor como parametro, sempre � passado por refer�ncia, mesmo sem o &.

void main()
{
	char x[50], y[50]];
	cadastro(x);
}

void cadastro(char nome[])
{
	nome[0] = 'A';
}
