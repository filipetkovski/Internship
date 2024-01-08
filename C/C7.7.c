#include <stdio.h>

void dzvezdi(int n) {
    for(int i=0;i<n;i++) {
        printf("* ");
    }
    printf("\n");
    if(n-1 > 0)
        dzvezdi(n-1);
}


int main() {
    //Напиши рекурзивна верзија на програма која за внесено n повикува
    // функција dzvezdi со параметар n која во зависност од n испечатува ѕвезди на следниот начин:

    int n;
    scanf("%d",&n);
    dzvezdi(n);

    return 0;
}
