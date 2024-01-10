#include <stdio.h>
#include <stdlib.h>

struct lista {
    int broj;
    char karakter;
    struct lista *nextPtr;
};
typedef struct lista Lista;
typedef Lista *ListNodePtr;

void insert( ListNodePtr *sPtr, int broj, char karakter ) {
    ListNodePtr newPtr;
    ListNodePtr previousPtr;
    ListNodePtr currentPtr;

    newPtr = malloc(sizeof(Lista));

    if(newPtr != NULL) {
        newPtr->broj = broj;
        newPtr->karakter = karakter;

        previousPtr = NULL;
        currentPtr = *sPtr;

        while(currentPtr != NULL && broj > currentPtr->broj) {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        if(previousPtr == NULL) {
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        } else {
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
}

void pecati(ListNodePtr *sPtr) {
    ListNodePtr currentPtr = *sPtr;

    if (currentPtr == NULL) {
        return;
    } else {
        pecati(&currentPtr->nextPtr);
        printf("%d,%c\n", currentPtr->broj, currentPtr->karakter);
    }
}

int main()
{
    //Напиши функција pecatiListaNanazad која рекурзивно ги печати елементите од листа наназад. Елементите на листата се состојат од едно целоборјно поле broj и еден карактер кој се вика karakter.
    ListNodePtr startPtr = NULL;

    int choice = 1,broj;
    char karakter;

    printf( "? " );
    scanf( "%d", &choice );

    while ( choice != 3 ) {

        printf( "Vnesi karakter: \n" );
        scanf("%d",&broj);
        scanf(" %c",&karakter);
        insert( &startPtr,broj,karakter );

        printf( "? " );
        scanf( "%d", &choice );
    }

    pecati(&startPtr);

    return 0;
}
