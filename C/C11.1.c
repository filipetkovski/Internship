#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    //Напиши програм кој внесува телефонски број како стринг во облик (333) 333-3333. Програмот треба со користење на наредбата strtok да го извлече кодот на државата како едно делче, а потоа да го спои целиот телефонски број во друг стринг без -. Програмот треба да го конвертира бројот на државата во int, а седмоцифрениот телефонски број во long. Двата бројат треба да бидат испечатени.
    char phone_number[14];
    scanf("%s",phone_number);

    char *token;
    char *delimiters = "()-";
    char country_code[4];
    char phone_digits[11];

    token = strtok(phone_number, delimiters);
    strncpy(country_code, token, sizeof(country_code) - 1);
    country_code[3] = '\0';

    while ((token = strtok(NULL, delimiters)) != NULL) {
        strncat(phone_digits, token, sizeof(phone_digits) - strlen(phone_digits) - 1);
    }

    int country_code_int = atoi(country_code);
    long phone_digits_long = atol(phone_digits);

    printf("Kod na drzavata: %d\n", country_code_int);
    printf("Telefonski broj: %ld\n", phone_digits_long);

    return 0;
}
