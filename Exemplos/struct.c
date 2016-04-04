#include <stdio.h>
//struct - Registro
//É um tipo personalizado, não é uma variável, é um tipo de variavel.

void main()
{
	struct ficha{
		char nome[50];
		int idade[50];
		float salario;
	};
	
	struct ficha pessoa; //struct ficha: Tipo de variável //pessoa = nome da variável
	pessoa.idade = 25;
	pessoa.salario = 30000;
	pessoa.nome[0] = 'G';
	pessoa.nome[1] = 'R';
	gets[pessoa.nome]; 
}





