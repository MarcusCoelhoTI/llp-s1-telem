/*
Faça um programa que leia a pontuação obtida por um jogador em um jogo de sinuca. 
deve atender os criterios definidos
0 -| 10 -> Insuficiente
10 -| 40 -> Regular
40 -| 70 -> Bom
70 -| 90 -> Otimo
90 -| 100 -> Excelente
O valor a ser avaliado deve ser armazenado em uma variavel inteira chamada x
Usar o comando if e else para exibir a mensagem.
@Author Marcus Victor dos Santos Coelho | Telematica
*/
#include <stdio.h>

int main(void) {
  int x;
  printf("Digite a pontuação obtida: ");
  scanf("%d", &x);
  if(x >= 0 && x < 10){
    printf("Insuficiente");
    }else if(x >= 10 && x < 40){
      printf("Regular");
      }else if(x >= 40 && x < 70){
        printf("Bom");
        }else if(x >= 70 && x < 90){
          printf("Otimo");
          }else if(x >= 90 && x <= 100){
            printf("Excelente");
          }
  return 0;
}