#include <stdio.h>

#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 5

void moverBispo() {
    printf("Movimentos do Bispo (diagonal superior direita):\n");
    for (int i = 1; i <= BISPO_MOV; i++) {
        printf("movimento %d -> (%d, %d)\n", i, i, i);
    }
    printf("\n");
}

void moverTorre(){
    printf("Movimentos da torre (para direita): \n");
    for (int i = 1; i < TORRE_MOV; i++)
    {
        printf("Movimento %d -> (%d, %d)\n", i, i, i);
    }
    printf("\n");
}
    
void moverRainha(){
    printf("Movimentos da Rainha (para esquerda): \n");
    for (int i = 1; i < RAINHA_MOV; i++)
    {
        printf("Movimento %d -> (%d, %d)\n", i, i, i);
    }
    printf("\n");
}


int main (){

moverBispo();
moverTorre();
moverRainha();

return 0; 

}
