#include <stdio.h>
#include <string.h>
 typedef struct funcionario_t
 {
     char nome[50] ;
     double salario ;
     char admissao[10];

     /* data */
 };
 
 int main(int argc, char const *argv[])
 {
     int total = 0 ;
     struct funcionario_t funcionario[100];
     struct funcionario_t funcionario;
     scanf("%s",funcionario.nome);
     while (strcomp(funcionario.nome , "0"))
     {
    
     scanf("%lf",&funcionario.salario);
     scanf("%s",funcionario.admissao);
     funcionario[total] = funcionario;
     total++ ;
     }
     for (int i = 0; i < total; i++)
     {
         printf("%s, %.2lf ,%s" , funcionario.nome ,funcionario.salario,funcionario.admissao);
     }

     return 0;
 }
 