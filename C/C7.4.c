#include <stdio.h>

int nzd(int broj1, int broj2) {
    while (broj2 != 0) {
        int temp = broj2;
        broj2 = broj1 % broj2;
        broj1 = temp;
    }
    return broj1;
}


int main() {
    //Напиши програма во која дефинираш функција nzd за пресметување на
    // најголемиот заеднички делител на два броја.

    int broj1, broj2;
    scanf("%d%d", &broj1, &broj2);
    printf("NZD na %d i %d е: %d\n", broj1, broj2, nzd(broj1, broj2));


    return 0;
}
