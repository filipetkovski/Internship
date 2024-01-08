#include <stdio.h>

int main() {
    //Напиши програма која ја пресметува сумата на броевите од 1 до десет.

    int sum =0;
    for(int i=1;i<11;i++) {
        sum += i;
    }
    printf("%d",sum);

    return 0;
}
