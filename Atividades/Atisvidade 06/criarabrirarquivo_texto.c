#include <stdio.h>
 int main(int argc, char const *argv[])
 {
     //codigos de EDDIE0vIRMOND
 
FILE *voar;
voar = fopen("arquivo.txt","a+");
if(voar == NULL){
    printf("Erro ao abrir o arquivo");
    return 0;
}
printf("precionar um arquivo......");
getchar();
fclose(arquivo);
return 0;
}