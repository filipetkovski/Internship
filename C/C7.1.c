#include <stdio.h>

int paren(int i) {
    if(i%2==0)
        return 1;
    return 0;
}

int main() {
    //	Напиши програма која внесува 10 цели броеви и и
    //	ги доделува на функцијата paren која враќа 1 ако бројот е парен и 0 ако бројот не е парен.

    for(int i=1;i<11;i++) {
        printf("%d\n",paren(i));
    }

    return 0;
}
