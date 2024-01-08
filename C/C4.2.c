#include <stdio.h>

int main() {
    //	Модифицирај го програмот p04_02.c така да наместо да е предефинирана вредноста на променливата counter, треба на корисникот да му се овозможи тој да внесе колку ученици има во класот.
    int counter;
    int grade;
    int total;
    int average;
    int n;

    total = 0;
    counter = 1;

    scanf("%d",&n);

    while ( counter <=  n) {
        printf( "Vnesi ocena: " );
        scanf( "%d", &grade );
        total = total + grade;
        counter = counter + 1;
    }
    average = total / n;

    printf( "Srednata vrednost na klasot e %d\n", average );

    return 0;
}
