#include <stdio.h>

int main() {
    printf("Tamanho int*: %zu bytes\n", sizeof(int*));
    printf("Tamanho float*: %zu bytes\n", sizeof(float*));
    printf("Tamanho double*: %zu bytes\n", sizeof(double*));
    printf("Tamanho char*: %zu bytes\n", sizeof(char*));

    /* RESPOSTA: O tamanho NÃO varia com o tipo apontado.
    POR QUÊ? Porque o ponteiro armazena apenas um endereço de memória[cite: 19]. 
    O tamanho desse endereço é determinado pela arquitetura do computador (ex: 8 bytes em sistemas 64-bits), 
    seja ele o endereço de um char simples ou de um double complexo[cite: 37].
    */
    return 0;
}
