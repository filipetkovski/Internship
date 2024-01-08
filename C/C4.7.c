#include <stdio.h>

int main() {
    //Напиши програма која пресметува сума на внесени броеви од тастатура се додека не се внесе -1.

    char n;
    int sum = 0;
    while(1) {
        scanf("%c",&n);
        if(n == 'n') {
            break;
        }
        sum += (int) n;
    }
    printf("%d",sum);

    return 0;
}
//
// Created by Filip Petkovski on 6.1.24.
//
