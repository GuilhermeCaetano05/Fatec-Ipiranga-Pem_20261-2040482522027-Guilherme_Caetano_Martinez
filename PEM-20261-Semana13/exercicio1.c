#include <stdio.h>

int main() {
    int i = 10;
    float f = 5.5;
    char c = 'A';

    int *pi = &i;
    float *pf = &f;
    char *pc = &c;

    printf("Inteiro: Valor: %d, Endereco: %p, No Ponteiro: %p, Via Ponteiro: %d\n", i, (void*)&i, (void*)pi, *pi);
    printf("Float:   Valor: %.2f, Endereco: %p, No Ponteiro: %p, Via Ponteiro: %.2f\n", f, (void*)&f, (void*)pf, *pf);
    printf("Char:    Valor: %c, Endereco: %p, No Ponteiro: %p, Via Ponteiro: %c\n", c, (void*)&c, (void*)pc, *pc);

    return 0;
}
