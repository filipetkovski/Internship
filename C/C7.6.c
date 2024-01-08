#include <stdio.h>

int nzd(int broj1, int broj2) {
    if (broj2 == 0) {
        return broj1;
    } else {
        return nzd(broj2, broj1 % broj2);
    }
}


int main() {
    //Напиши рекурзивна верзија на функцијата за пресметување најголем заеднички делител.

    int broj1, broj2;
    scanf("%d%d", &broj1, &broj2);
    printf("NZD na %d i %d е: %d\n", broj1, broj2, nzd(broj1, broj2));

    return 0;
}
