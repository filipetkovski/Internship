#include <stdio.h>

int main() {
    //Напиши програма која за внесени десет броја, го пресметува нивниот производ.

    int proizvod = 1;
    int n;
    for(int i=0;i<10;i++) {
        scanf("%d",&n);
        proizvod *= n;
    }
    printf("%d",proizvod);

    return 0;
}
