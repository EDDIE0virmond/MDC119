#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]){

    FILE *tabulacao;

    tabulacao=fopen("tabulacao_de_dados.txt","w");
    if (tabulacao == NULL)    {
     printf("Problemas na abertura do arquivo sua tabulacao de arquivos, nao foi possivel\n");
     return 0;
     }
    char codigo[10];
    char nome[30];
    char horario[10];
    char nome_disciplina[30];

    printf("Digite o codigo de sua camada tabulada: ");
    memset(codigo, '\0', sizeof(codigo));
    scanf("%s",codigo);
    
    while(strcmp("0",codigo){
    printf("Digite nome : ");
    memset(nome, '\0', sizeof(nome));
    scanf("%s",nome);
    printf("Digite o horario: ");
    memset(horario, '\0', sizeof(horario));
    scanf("%s",horario);
    printf("Digite o nome da disciplina: ");
    memset(nome_disciplina, '\0', sizeof(nome_disciplina));
    scanf("%s",nome_disciplina);
    fprintf(tabulacao,"%10s\t%30s\t%10s\t%30s\n",codigo,nome,horario,nome_disciplina);
    printf("Digite o codigo : ");
    memset(codigo, '\0', sizeof(codigo));
    scanf("%s",codigo);
    }

fclose(tabulacao);
tabulacao= fopen("prova.txt", "r");
while (fscanf (tabulacao,"%10s\t%30s\t%10s\t%30s\n",codigo,nome,horario,nome_disciplina)!=EOF) {
    printf("%10s\t%30s\t%10s\t%30s\n",codigo,nome,horario,nome_disciplina);
}
fclose(tabulacao);
return 0;
} 
