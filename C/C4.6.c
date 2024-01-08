#include <stdio.h>

int main() {
    //Напиши програма која пресметува сума на внесени броеви од тастатура се додека не се внесе -1.

    int n=0;
    int sum = 0;
    while(n != -1) {
        sum += n;
        scanf("%d",&n);
    }
    printf("%d",sum);

    return 0;
}
