#include <stdio.h>

int main() {
    double v[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    double *p3 = &v[2];
    double *p8 = &v[7];

    printf("Diferenca (p8 - p3): %ld elementos\n", p8 - p3);

    /* EXPLICAÇÃO: O compilador subtrai os endereços e divide pelo tamanho do tipo 
    (sizeof(double)), resultando no número de elementos entre eles[cite: 86, 100].
    */
    return 0;
}
