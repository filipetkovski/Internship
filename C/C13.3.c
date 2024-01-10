#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Напиши програм кој внесува линија текст и користи стек за да се испечати текстот во обратен дерослед.
// Текстот да содржи и празни места.


struct stackNode {
    char data;
    struct stackNode *nextPtr;
};

typedef struct stackNode StackNode;
typedef StackNode *StackNodePtr;


void push( StackNodePtr *topPtr, char info );
int pop( StackNodePtr *topPtr );
int isEmpty( StackNodePtr topPtr );
void printStack( StackNodePtr currentPtr );
void instructions( void );

int main()
{
    StackNodePtr stackPtr = NULL;
    int choice;
    char value;
    char string[100];

    printf("Vnesi string: ");
    scanf(" %[^\n]", string);

    for (int i = 0; i < strlen(string); i++) {
        push(&stackPtr, string[i]);
    }

    for (int i = 0; i < strlen(string); i++) {
        printf("%c",pop(&stackPtr));
    }

    return 0;
}

void instructions( void )
{
    printf( "Vnesi izbor:\n"
            "1 za stavanje vrednost na stek\n"
            "2 za vadenje vrednost od stek\n"
            "3 za kraj na programot\n" );
}

void push( StackNodePtr *topPtr, char info )
{
    StackNodePtr newPtr;

    newPtr = malloc( sizeof( StackNode ) );

    if ( newPtr != NULL ) {
        newPtr->data = info;
        newPtr->nextPtr = *topPtr;
        *topPtr = newPtr;
    }
    else {
        printf( "%c ne e vnesen. Nema dovolno memorija.\n", info );
    }

}

int pop( StackNodePtr *topPtr )
{
    StackNodePtr tempPtr;
    char popValue;

    tempPtr = *topPtr;
    popValue = ( *topPtr )->data;
    *topPtr = ( *topPtr )->nextPtr;
    free( tempPtr );

    return popValue;

}

void printStack( StackNodePtr currentPtr )
{

    if ( currentPtr == NULL ) {
        printf( "Stekot e prazen.\n\n" );
    } /* kraj if */
    else {
        printf( "Stekot e:\n" );

        while ( currentPtr != NULL ) {
            printf( "%c --> ", currentPtr->data );
            currentPtr = currentPtr->nextPtr;
        }

        printf( "NULL\n\n" );
    }

}

int isEmpty( StackNodePtr topPtr )
{
    return topPtr == NULL;

}

