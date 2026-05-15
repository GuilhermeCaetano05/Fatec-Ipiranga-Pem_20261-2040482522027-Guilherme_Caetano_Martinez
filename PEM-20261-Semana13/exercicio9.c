#include <stdio.h>

void inverter(int *arr, int n) {
    int *inicio = arr;
    int *fim = arr + n - 1;
    while(inicio < fim) {
        int temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++; fim--;
    }
}

int main() {
    int v[7] = {10, 20, 30, 40, 50, 60, 70};
    inverter(v, 7);
    for(int i=0; i<7; i++) printf("%d ", v[i]);
    return 0;
}
