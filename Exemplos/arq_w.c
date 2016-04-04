#include <stdio.h>
#include <stdlib.h>
// "w" vai sobreescrever, o "a" adiciona os novos registro nos arquivos.

struct registro{
                char nome[80];
                int idade;
               };

int main(int argc, char *argv[])
{
   struct registro ficha;
   FILE *arq;
   arq=fopen("C:/teste.bin","ab"); 
	if(arq == NULL){
		 printf("Erro ao abrir arquivo!!!\n");
		 exit(1);
 	   }
  else{
   	  printf("\nDigite o nome: ");
		  scanf("%s",&ficha.nome);
		  printf("\nDigite a idade: ");
		  fflush(stdin);
		  scanf("%d",&ficha.idade);
		  //sizeof = Verifica o tamanho da variavel em bytes.
		  fwrite(&ficha,sizeof(ficha),1,arq);
       }
       
  fclose(arq);
  
  system("PAUSE");	
  return 0;
}

