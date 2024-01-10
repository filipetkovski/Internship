#include <stdio.h>
#include <math.h>

int main() {
    //	Да се најде обиколката и плоштината на правилен n-аголник.

    int n;
    float strana;
    scanf("%d%f", &n, &strana);

    printf("Obikolka: %.2f\n", n * strana);
    printf("Ploshina: %.2f\n", (n * strana * strana) / (4 * tan(M_PI / n)));

    return 0;
}
