#include <stdio.h>

int main() {
//Напиши 4 начини за да ја зголемиш вредноста на променливата x за 1.

    int num = 1;
    printf("%d",++num);
    printf("%d",num++);
    printf("%d",num+=1);
    printf("%d",num = num + 1);
    return 0;
}
