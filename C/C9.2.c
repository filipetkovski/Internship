#include <stdio.h>
#include <math.h>
int sprotiven(int n) {
    int sprotivenBroj;

    while (n > 0) {
        int cifra = n % 10;
        sprotivenBroj = sprotivenBroj * 10 + cifra;
        n /= 10;
    }

    return sprotivenBroj;
}

int main() {
    //	Да се најде спротивен број на природниот број n. (Тоа е природниот број што ги има истите цифри со n, напишани во спротивен редослед.)

    int n;
    scanf("%d",&n);
    printf("%d", sprotiven(n));

    return 0;
}
