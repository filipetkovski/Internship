#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int palindrom(char *string) {
    for(int i=0;i< strlen(string)/2;i++) {
        if(string[i] != string[strlen(string)-1-i])
            return 0;
    }
    return 1;
}

int main() {
    //	Палиндроми се низи од букви што се читаат исто и оддесно на лево и одлево на десно.
    //	На пример зборот “radar” е палиндром. Да се напише програм во кој внесуваме низа од карактери.
    //	Треба да имаме функција palindrom која враќа вредност 1 ако стрингот е палиндром или 0 инаку.
    char string[100];
    scanf("%s", string);
    if(palindrom(string) == 1)
        printf("palindrom");
    else
        printf("ne e palindrom");
    return 0;
}
