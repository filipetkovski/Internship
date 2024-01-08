#include <stdio.h>
#include <math.h>

int main() {
    //	Да се напише програма која ќе пресметува Питагорини броеви до 100.
    //	Тоа се броеви кои го исполнуваат следниот услов a2+b2=c2.

    int c_2, c;
    for(int a=0;a<=100;a++) {
        for(int b=0;b<=100;b++) {
            c_2 = a*a + b*b;
            c = (int) sqrt(c_2);
            if(c <= 100 && c * c == c_2) {
                printf("%d^2 + %d^2 = %d^2\n", a, b, c);
            }
        }
    }
    return 0;
}
