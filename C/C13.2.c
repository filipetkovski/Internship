#include <stdio.h>
#include <stdlib.h>

struct lista {
    int number;
    struct lista *nextPtr;
};
typedef struct lista Lista;
typedef Lista *ListNodePtr;

void insert( ListNodePtr *sPtr, int number ) {
    ListNodePtr newPtr;
    ListNodePtr previousPtr;
    ListNodePtr currentPtr;

    newPtr = malloc(sizeof(Lista));

    if(newPtr != NULL) {
        newPtr->number = number;

        previousPtr = NULL;
        currentPtr = *sPtr;

        while(currentPtr != NULL) {
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
        printf("%d ---> ", currentPtr->number);
    }
}

void sortMaxToMin(ListNodePtr *sPtr) {
    ListNodePtr currentPtr, nextNode, temp;
    int swapped;

    if (*sPtr == NULL || (*sPtr)->nextPtr == NULL) {
        return;
    }

    do {
        swapped = 0;
        currentPtr = *sPtr;
        temp = NULL;

        while (currentPtr->nextPtr != NULL) {
            nextNode = currentPtr->nextPtr;

            if (currentPtr->number > nextNode->number) {
                if (temp == NULL) {
                    *sPtr = nextNode;
                } else {
                    temp->nextPtr = nextNode;
                }

                currentPtr->nextPtr = nextNode->nextPtr;
                nextNode->nextPtr = currentPtr;
                temp = nextNode;

                swapped = 1;
            } else {
                temp = currentPtr;
                currentPtr = currentPtr->nextPtr;
            }
        }
    } while (swapped);
}

void sortMinToMax(ListNodePtr *sPtr) {
    ListNodePtr currentPtr, nextNode, temp;
    int swapped;

    if (*sPtr == NULL || (*sPtr)->nextPtr == NULL) {
        return;
    }

    do {
        swapped = 0;
        currentPtr = *sPtr;
        temp = NULL;

        while (currentPtr->nextPtr != NULL) {
            nextNode = currentPtr->nextPtr;

            if (currentPtr->number < nextNode->number) {
                if (temp == NULL) {
                    *sPtr = nextNode;
                } else {
                    temp->nextPtr = nextNode;
                }

                currentPtr->nextPtr = nextNode->nextPtr;
                nextNode->nextPtr = currentPtr;
                temp = nextNode;

                swapped = 1;
            } else {
                temp = currentPtr;
                currentPtr = currentPtr->nextPtr;
            }
        }
    } while (swapped);
}

int main()
{
    //Напиши програма која внесува елементи со функцијата vnesi несортирано, на крајот на листата, ја користи функцијата sortOpagjanje која сортира елементи во опаѓачки редослед, функцијата sortRastenje која ги сортира елемнтите во растечки редослед, brisi која брише елемент со дадена содржина. Елементите на листата се целобројни елементи.
    ListNodePtr startPtr = NULL;

    int choice = 1;
    int number;

    while ( choice != 3 ) {

        printf( "Vnesi karakter: \n" );
        scanf("%d",&number);
        insert( &startPtr,number );

        printf( "? " );
        scanf( "%d", &choice );
    }

    sortMaxToMin(&startPtr);
    pecati(&startPtr);
    printf("\n");
    sortMinToMax(&startPtr);
    pecati(&startPtr);

    return 0;
}
