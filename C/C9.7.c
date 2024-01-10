#include <stdio.h>
void rekurzija(int n, int m) {
    if(m > 0) {
        for(int i=m;i<=n;i++) {
            printf("%d ",i);
        }
        printf("\n");
        rekurzija(n,m-1);
    }
    if(m>1) {
        for(int i=m;i<=n;i++) {
            printf("%d ",i);
        }
        printf("\n");
    }
}

int main() {
    // За даден природен број n да се испечатат следниве фигури со користење на рекурзија.

    int n;
    scanf("%d",&n);
    rekurzija(n,n);

    return 0;
}
