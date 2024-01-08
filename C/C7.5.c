#include <stdio.h>

int fib(int n) {
    if (n <= 1) {
        return n;
    }

    int fibN_2 = 0;
    int fibN_1 = 1;
    int fibN = 0;

    for (int i = 2; i <= n; ++i) {
        fibN = fibN_2 + fibN_1;
        fibN_2 = fibN_1;
        fibN_1 = fibN;
    }

    return fibN;
}

int main() {
    //Напиши итеративна верзија на функцијата за фибоначиеви броеви.
    int n;
    scanf("%d", &n);
    printf("%d",fib(n));

    return 0;
}
