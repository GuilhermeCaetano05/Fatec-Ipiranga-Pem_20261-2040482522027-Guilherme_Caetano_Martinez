#include <stdio.h>

int main() {
    int v[5] = {1, 2, 3, 4, 5};
    int *p = v;

    printf("Antes: ");
    for(int i=0; i<5; i++) printf("%d ", v[i]);

    for(int i=0; i<5; i++) {
        *(p + i) *= 2; // Acessa o valor no endereço e multiplica
    }

    printf("\nDepois: ");
    for(int i=0; i<5; i++) printf("%d ", v[i]);
    printf("\n");
    return 0;
}
