#include <stdio.h>
int main() {
FILE *queda;
queda = fopen("quedaBIN.bin","w+b");
if(queda == NULL){
    printf("Erro ao abrir o arquivo");
}
printf("precionar um arquivo......");
getchar();
if(!feof(queda)){
    printf("Fim do arquivo encontrado");
    return 1;

}
fclose(queda);

return 0;
}