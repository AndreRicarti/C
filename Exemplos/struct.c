#include <stdio.h>
//struct - Registro
//� um tipo personalizado, n�o � uma vari�vel, � um tipo de variavel.

void main()
{
	struct ficha{
		char nome[50];
		int idade[50];
		float salario;
	};
	
	struct ficha pessoa; //struct ficha: Tipo de vari�vel //pessoa = nome da vari�vel
	pessoa.idade = 25;
	pessoa.salario = 30000;
	pessoa.nome[0] = 'G';
	pessoa.nome[1] = 'R';
	gets[pessoa.nome]; 
}





