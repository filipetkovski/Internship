#include <stdio.h>

int main() {
    //Една стоковна куќа продава 5 производи чии цени се дадени во долната табела
    //Производ броj  Цена
    //1             50.5
    //2             45.6
    //3             32.8
    //4             65.3
    //5             20.0
    //Да се напише програм кој чита серија од парови броеви за:
    //а) број на производ
    //б) количина продадена во текот на денот
    //Програмот треба да ја користи switch наредбата за да ја одреди цената за секој  производ. Програмот треба да ја пресмета и испечати вкупната продадена вредност за секој од производите посебно, како и вкупната сума за сите производи продадени во текот на денот.

    int broj_proizvod, kolicina;
    float cena[] = {50.5, 45.6, 32.8, 65.3, 20.0};
    float br_prodazbi[5] = {0};
    float br_prodazbi_dnevno = 0.0;

    while(1) {
        scanf("%d",&broj_proizvod);

        if(broj_proizvod < 1 || broj_proizvod > 5)
            break;

        scanf("%d",&kolicina);
        br_prodazbi[broj_proizvod - 1] += (cena[broj_proizvod - 1] * kolicina);
    }

    for (int i = 0; i < 5; i++) {
        br_prodazbi_dnevno += br_prodazbi[i];
        printf("Proizvod %d : %.2f\n",i+1, br_prodazbi[i]);
    }

    printf("Vkupno prodadeni vrednosti za site proizvodi: %.3f\n", br_prodazbi_dnevno);

    return 0;
}
