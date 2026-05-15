#include <stdio.h>

int main() {
    int arr[8] = {10, 20, 5, 15, 30, 25, 40, 35};
    int *p = arr;
    int soma = 0, maior = *p, menor = *p;

    for(int i=0; i<8; i++) {
        int val = *(p + i);
        soma += val;
        if(val > maior) maior = val;
        if(val < menor) menor = val;
        printf("End: %p | Val: %d\n", (void*)(p + i), val);
    }

    printf("\nSoma: %d, Media: %.2f, Maior: %d, Menor: %d\n", soma, (float)soma/8, maior, menor);
    return 0;
}
