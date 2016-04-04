#include <stdio.h>
#include <stdlib.h>

struct registro{
                char nome[80];
		     	char cargo[30];
                float salario;
                int idade;
               };

//É um apelido que da para o struct               
typedef struct registro tp_ficha;

void cadastra(tp_ficha v[],int n)
{  int i;
   for(i=0;i<n;i++)
   {
      printf("Digite o Nome ");
      fflush(stdin);
      //gets = Aqui é para pegar a string com espaço.
	  gets(v[i].nome);
	  
      printf("Digite o Cargo ");
      fflush(stdin);
	  gets(v[i].cargo);
	  
      printf("Digite a idade ");
	  scanf("%i",&v[i].idade);
	  
      printf("Digite o salario ");
	  scanf("%f",&v[i].salario);
   }
}

void exibe(tp_ficha v[],int n)
{  int i;
   for(i=0;i<n;i++)
   {
      printf("\n\n***********registro %i ***********",i);
      printf("\nNome : %s ",v[i].nome);
      printf("\nCargo : %s", v[i].cargo);
      printf("\nIdade : %i ",v[i].idade);
      printf("\nSalario : %f ",v[i].salario);
      printf("\n**********************************");
   }
}

void grava_arq(tp_ficha v[],int n)
{
   FILE *arq;
   int i;
   arq=fopen("C:/teste.bin","wb"); 
	if(arq == NULL){
		 printf("Erro ao abrir arquivo!!!\n");
		 exit(1);
 	   }
  else{
		for(i=0;i<n;i++)
		  fwrite(&v[i],sizeof(v[i]),1,arq);
       }
  fclose(arq);
}
void le_arq(tp_ficha v[],int *n)
{
   FILE *arq;
   int i=0;
   arq=fopen("C:/teste.bin","rb"); 
	if(arq == NULL){
		 printf("Erro ao abrir arquivo!!!\n");
		 exit(1);
 	   }
  else{
          while(fread(&v[i],sizeof(v[i]),1,arq))
           {
    	 	 i++;
           }
        }
  *n=i;
  fclose(arq);
}

void totalSalario(tp_ficha v[],int n){
	int i;
   	float salario;
	
	for(i=0;i<n;i++){
		salario += v[i].salario;
    }
    
    printf("\n\nTotal de Salario : %f ",salario);
}


int main(int argc, char *argv[])
{
   int n=0;
   struct registro ficha[100];
   	//cadastra(ficha,2);
   	//exibe(ficha,10);
   	//grava_arq(ficha,2); 
   	le_arq(ficha,&n);
   	//exibe(ficha,n);
	totalSalario(ficha, 2);
	
  system("PAUSE>>null");	
  return 0;
}

