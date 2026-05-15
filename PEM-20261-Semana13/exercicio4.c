#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    float media;
};

int main() {
    struct Aluno a = {"Joao", 123, 8.5};

    printf("Endereco Nome: %p\n", (void*)&a.nome);
    printf("Endereco Matricula: %p\n", (void*)&a.matricula);
    printf("Endereco Media: %p\n", (void*)&a.media);

    /* EXPLICAÇÃO: Os endereços são geralmente consecutivos (ou muito próximos) porque 
    o struct é alocado como um bloco contíguo na memória RAM[cite: 58].
    */
    return 0;
}
