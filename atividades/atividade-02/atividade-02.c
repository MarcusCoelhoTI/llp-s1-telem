/*Atividade-02
Faça um programa usando a linguagem C que realiza a seguinte tarefa:
1) Use uma estrutura de repetição para mostrar na saída números inteiros pares entre 1 e 50.

Pode ser feito em Dupla. 
Mas deve ser registrado no GitHub de cada aluno envolvido.
Para evidenciar a entrega da atividade no Classroom deve ser postado o link da Atividade-02 no Github.*/

#include <stdio.h>

int main (void){

    printf("Numeros pares entre 1 e 50: \n");
    for(int i=1; i<=50; i++){
        if(i % 2 == 0){
            printf("%d \n", i);
        }
    }
    return 0;
}