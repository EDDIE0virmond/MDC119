#include<stdlib.h>
#include<stdio.h>
int main(int argc, char const *argv[])
{
FILE*infinito;
    

struct estrutura {
char calorias[5];
char temp[5];
char dados_salvos[30]
}dds;

memset(&dds, 0, sizeof(dds));



infinito=fopen("infinito.dat","w+b");

if (infinito == NULL) {

        printf("ERRO\n");

    }
printf("Paciente 1\n");
printf("caloria: ");
scanf("%s", dds.calorias);
while(strcmp("0", dds.calorias)){

printf("calorias: ");
scanf("%s", dds.calorias);
printf("tempo: ");
scanf("%s", dds.temp);
fwrite(&dds, sizeof(dds), 1, infinito);
i++;
printf("Paciente %d\n",i);
printf(" quantidades de calorias:  ");
scanf("%s", dds.calorias);
}
fclose(infinito);
return 0;

}
