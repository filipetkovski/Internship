#include <stdio.h>

//A)
//void sort(int niza[]) {
//    int min;
//    for(int i=0;i<11;i++) {
//        min = i;
//        for(int j=i+1;j<12;j++) {
//            if(niza[min] > niza[j]) {
//                min = j;
//            }
//        }
//        int temp = niza[i];
//        niza[i] = niza[min];
//        niza[min] = temp;
//    }
//}

////B)
void sort(int niza[],int i, int j,int min) {
    if(i < 12) {
        if(j < 12) {
            if(niza[min] > niza[j])
                min = j;
            sort(niza,i,j+1,min);
        } else {
            int temp = niza[i];
            niza[i] = niza[min];
            niza[min] = temp;
            sort(niza,i+1,i+2,i+1);
        }
    }
}

//C
//Bubblesort vo najlos slucaj ima O(n^2) kompleksnost, a selection sort sekogas ima O(n^2) kompleksnost


void pecati(int niza[]) {
    for(int i=0;i<12;i++) {
        printf("%d ", niza[i]);
    }
}

int main() {
    //	Да се напише програма која симулира селекциско сортирање. Селекциското сортирање го бара најмалиот елемент во низата и го заменува со првиот елемент. Сега, на прво место сигурно ни се наоѓа најмалиот елемент во низата. Потоа, во остатокот од низата, од вториот до n-тиот елемент, повторно го бараме новиот најмал елемент и му ја заменуваме вредноста со вториот елемент од низата итн. Ова сортирање има слични процесирачки капацитети како сортирање со методот на меурче.
    //а) Да се напише итеративна верзија на функцијата selekcija која го врши селекциското сортирање.
    //б) Да се напише рекурзивна верзија на селекциското сортирање.
    //в) Да се одговори зошто процесирачките капацитети на ова сортирање се слични како оние со методот на меурче.

    int niza[] = {6,7,453,234,425,64,1,32,54,190,23,45};
    sort(niza,0,1,0);
    pecati(niza);

    return 0;
}
