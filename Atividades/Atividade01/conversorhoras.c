#include<stdio.h>
 int main() {
    
     int segundos; 

     printf("digite o numero a ser convertido ");
     scanf("%i",&segundos);
  
     int horas = segundos/3600;
     segundos = segundos%3600;
     int minutos = segundos/60;
     minutos = segundos%60;

    
     printf("horas:%i" , horas);
     printf("\nminutos:%i" , minutos);


     return 0;
} 