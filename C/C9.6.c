#include <stdio.h>
#include <math.h>

int main() {
    //Да се најдат сите пилести поднизи во низата броеви [ai]n. (Пилеста подниза е онаа во која претходниот и следниот елемент на секој елемент се помали (поголеми) од него.)
    int niza[] = {1,6,4,8,4,87,56,34,65,86,665,752,4123,5464,3,4123,42133,66666,66667,77776};
    int length = sizeof(niza) / sizeof(niza[0]);
    for(int i=1;i<length-1;i++) {
        if(niza[i] < niza[i-1] && niza[i] < niza[i+1] || niza[i] > niza[i-1] && niza[i] > niza[i+1]) {
            printf("%d %d %d\n",niza[i-1],niza[i],niza[i+1]);
        }
    }

    return 0;
}
