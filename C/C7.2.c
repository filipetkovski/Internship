#include <stdio.h>

int vreme(int hour, int minute, int second) {
    if (hour < 12)
        return (11 - hour) * 3600 + (59 - minute) * 60 + (60 - second);
    else if (hour == 12)
        return 23*3600 + (59 - minute) * 60 + (60 - second);
    else
        return (23 - (hour-12)) * 3600 + (59 - minute) * 60 + (60 - second);
}


int main() {
    //	Напиши програма која на функцијата vreme и доделува три целобројни
    //	аргументи, час, минута и секунда и како резултат го враќа бројот на секунди до 12 часот.

    int hour, minute, second;
    scanf("%d%d%d", &hour,&minute,&second);
    printf("Ostanato vreme do 12 casot: %d sekundi.\n", vreme(hour, minute, second));
    return 0;
}
