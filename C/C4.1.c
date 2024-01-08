#include <stdio.h>

int main() {
    //Напиши програм кој како влез зема два цели броја и ги споредува.
    // Потоа го испечатува поголемиот број проследен со коментарот e pogolem od и го испечатува и помалиот број.
    // Ако броевите се еднакви, програмот треба да испечати Broevite se ednakvi.

    int num1, num2;
    scanf("%d%d",&num1,&num2);
    if(num1 > num2) {
        printf("%d e pogolem od %d",num1, num2);
    } else if (num1 < num2) {
        printf("%d e pogolem od %d",num2, num1);
    } else {
        printf("Broevite se ednavki");
    }
    return 0;
}
