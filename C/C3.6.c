#include <stdio.h>

int main() {
    //Напишете програма која од стандардниот влез зема 5 букви и ги испечатува по следниот редослед: прво петтата, па третата, па втората, па првата, па четвртата буква.

    char l[5];
    for(int i=0;i<5;i++) {
        scanf("%c",&l[i]);
    }
    printf("%c%c%c%c%c",l[4],l[2],l[1],l[0],l[3]);

    return 0;
}
