#include <stdio.h>

int main() {
//    Напиши програм кој внесува петцифрен број, ги распределува сите цифри на бројот во посебни променливи и ги печати секоја од цифрите со растојание една од дуга од три празни места.
//Прмер. Нека корисникот внел 42139. Програмот треба да испечати:
//4   2   1   3   9
    int number;
    int divisor = 100000;
    printf("Vnesi 6 cifren broj.\n");
    scanf("%d",&number);

    while(number > 0) {
        printf("%d\t",(number / divisor));
        number %= divisor;
        divisor /= 10;
    }

    return 0;
}
