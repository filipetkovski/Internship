#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    //Напиши програм кој чита датум во обликот 14/06/2005 и враќа датум во обликот 14 juni 2005. Корисникот да има можност да внесува колку што сака датуми кои треба да бидат конвертирани во другиот излез.
    char *months[] = {"januari", "februari", "mart", "april", "maj", "juni",
                      "juli", "avgust", "septemvri", "oktomvri", "noemvri", "dekemvri"};

    int year,month,day;
    char c = 'y';
    while(c == 'y') {
        scanf("%d%*[^0-9]%d%*[^0-9]%d", &day, &month, &year);
        printf("%d %s %d godina.\n",day, months[month-1], year);
        printf("Do you want ot continue? y/n ");
        scanf("%s",&c);
    }
    return 0;
}
