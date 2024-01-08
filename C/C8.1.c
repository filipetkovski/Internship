#include <stdio.h>

int main() {
    //	Напиши програм кој вчитува вредности за температури за секој ден од месецот и
    //	наоѓа средна месечна температура. Да се земе предвид дека различни
    //	месеци имаат различен број на денови.

    int months[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int month;

    scanf("%d",&month);
    int temp[months[month-1]];

    int sum = 0;
    for(int i=0;i<months[month-1];i++) {
        scanf("%d",&temp[i]);
        sum += temp[i];
    }

    printf("AVG: %f", (float)sum/months[month-1]);

    return 0;
}
