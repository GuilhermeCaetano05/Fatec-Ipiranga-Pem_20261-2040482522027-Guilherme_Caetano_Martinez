#include <stdio.h>

int main() {
    int mat[4][4] = {{1,2,3,4},{5,60,7,8},{9,10,11,12},{13,14,15,16}};
    int *p = &mat[0][0];
    int maior = *p, pos = 0;

    for(int i=0; i<16; i++) {
        if(*(p + i) > maior) {
            maior = *(p + i);
            pos = i;
        }
    }
    printf("Maior: %d em [%d][%d]\n", maior, pos/4, pos%4);
    return 0;
}
