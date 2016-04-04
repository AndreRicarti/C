#include <stdio.h>
#include <stdlib.h>

struct registro{
                char nome[80];
                int idade;
               };


int main(int argc, char *argv[])
{
   struct registro ficha[10];
   FILE *arq;
   int i = 0, n;
   arq=fopen("C:/teste.bin","rb"); 
   
	 if(arq == NULL){
		 printf("Erro ao abrir arquivo!!!\n");
		 exit(1);
 	   }
 	   
    while(fread(&ficha[i],sizeof(ficha[i]),1,arq))
       {   	  
		  i++;
      	}
    
	n = i;  
    
	for(i=0; i<n;i++){
    	printf("\nNome digitado: %s", ficha[i].nome);
		printf("\nIdade: %d", ficha[i].idade);	
	}  
      
   fclose(arq);
  
  system("PAUSE>>null");	
  
  return 0;
}

