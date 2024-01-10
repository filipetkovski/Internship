#include <stdio.h>
#include <math.h>

int presmetajSumaNaDeliteli(int num) {
    int suma = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            suma += i;
        }
    }
    return suma;
}

void najdiSovrsheniBroevi(int n) {
    for (int i = 2; i < n; i++) {
        if (i == presmetajSumaNaDeliteli(i)) {
            printf("%d ", i);
        }
    }
}

int main() {
    //	Да се најдат совршените броеви помали од природниот број n.
    int n;
    scanf("%d", &n);
    najdiSovrsheniBroevi(n);
    return 0;
}
