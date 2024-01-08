#include <stdio.h>

int main() {
    //Модифицирај го претходниот програм (вежба 2) така да просекот се пресметува како децимален број со точност од 3 децимали.
    int counter;
    int grade;
    int total;
    float average;
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
    average = (float) total / n;

    printf( "Srednata vrednost na klasot e %.3f\n", average );

    return 0;
}
