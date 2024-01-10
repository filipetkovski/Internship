#include <stdio.h>
#include <math.h>

int sprotiven(int n) {
    int reversedNumber = 0;

    while (n != 0) {
        int digit = n % 10;
        reversedNumber = reversedNumber * 10 + digit;
        n /= 10;
    }

    return reversedNumber;
}

int main() {
    //Да се најдат природните броеви во интервалот [n1,n2], кои се деливи со својот спротивен број.

    int n,m;
    scanf("%d%d",&n,&m);

    for(int i=n;i<m;i++) {
        if(i%sprotiven(i) == 0) {
            printf("%d\n",i);
        }
    }
    return 0;
}
