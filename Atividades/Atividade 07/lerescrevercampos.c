#include<stdio.h>
int main(int argc, char const *argv[])
{//codigos de EDDIE0vIRMOND
FILE *arq;
int i =0;
char nome[30];
char mat[10];

char c;
arq = fopen("alunoss.txt","w");
if (arq == NULL)  
  {
     printf("arquivo nao foi achado no sistema\n");
     return 0 ;
}
printf("mat\n ");
memset(mat, '\0', sizeof(mat));
scanf("%s",mat);

while(strcmp("0", mat)){

     fprintf(arq,"%s\n",mat);
     printf("nome\n ");
     memset(nome, '\0', sizeof(nome));
     scanf("%s",nome);
     fprintf(arq,"%s\n",nome);
     printf("mat\n");
     memset(mat, '\0', sizeof(mat));
     scanf("%s",mat);

}
fclose(arq);
arq = fopen("alunoss.txt","r");
 while (fscanf (arq,"%10s\t%30s", mat, nome) != EOF) {
     printf("%s - %s\n",mat,nome);
}
fclose(arq);
return 0;
}