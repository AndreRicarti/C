/*
	Aprendendo a usar ponteiro
	https://www.youtube.com/watch?annotation_id=annotation_282521&feature=iv&src_vid=r7f-aR7vgg0&v=AdyGxhYWhoM
    @author Son182
    @Date : 15/11/2016
*/

#include <stdio.h>

main(void){
	int x;
	x = 10;
	
	int *ponteiro;
	//* Ele aponta para o inteiro;
	
	ponteiro = &x;
	//ponteiro vai receber o endere�o de mem�ria de x
	
	printf("%i", *ponteiro);
	//Ele apresenta o valor de x porque ele esta apontando para o endere�o de mem�ria x
	
	//printf("%i", &x);
	//& Ele apresenta(acessa) o endere�o da mem�ria
	//Sem o & ele acessa o valor da vari�vel
}
