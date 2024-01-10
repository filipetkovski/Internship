#include <stdio.h>
#include <math.h>

int main() {
    //Да се најдат сите растечки поднизи во низата броеви [ai]n. (Растечка подниза е онаа во која секој елемент е поголем од претходниот.)

    int niza[] = {1,6,4,8,4,87,56,34,65,86,665,752,4123,5464,3,4123,42133,66666,66667,77776};
    int length = sizeof(niza) / sizeof(niza[0]);
    for(int i=1;i<length;i++) {
        if(niza[i] < niza[i-1]) {
            printf("\n");
        }
        printf("%d ",niza[i]);
    }

    return 0;
}
