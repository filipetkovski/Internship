#include <stdio.h>

int main() {
    //Напиши програма која вчитува датуми во облик gg/mm/dd, gg-mm-dd и gg+mm+dd и
    // ги испечаува така да наместо бројот на месецот се испечати имато на месецот.

    char *months[] = {"januari", "februari", "mart", "april", "maj", "juni",
                      "juli", "avgust", "septemvri", "oktomvri", "noemvri", "dekemvri"};

    int year,month,day;

    scanf("%d%*[^0-9]%d%*[^0-9]%d", &year, &month, &day);
    printf("%d %s %d godina.\n",day, months[month-1], year);

    return 0;
}
