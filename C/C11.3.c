#include <stdio.h>
#include <string.h>
#include <ctype.h>

void textToMorse(char *text) {
    char *morseCodes[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
                          "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
                          "..-", "...-", ".--", "-..-", "-.--", "--..",
                          "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."};

    for (int i = 0; text[i]; i++) {
        if (isalpha(text[i])) {
            char upperChar = toupper(text[i]);
            printf("%s ", morseCodes[upperChar - 'A']);
        } else if (isdigit(text[i])) {
            printf("%s ", morseCodes[text[i] - '0' + 25]);
        } else if (text[i] == ' ') {
            printf("   ");
        }
    }
    printf("\n");
}

void morseToText(char *morse) {
    char *morseCodes[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
                          "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
                          "..-", "...-", ".--", "-..-", "-.--", "--..",
                          "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."};

    char *token = strtok(morse, " ");
    while (token != NULL) {
        for (int i = 0; i < 36; i++) {
            if (strcmp(token, morseCodes[i]) == 0) {
                if (i < 26) {
                    printf("%c", 'A' + i);
                } else {
                    printf("%c", '0' + (i - 25));
                }
                break;
            }
        }
        token = strtok(NULL, " ");
    }
    printf("\n");
}
int main()
{
    char input[100];

    //Vnesi tekst
    fgets(input, sizeof(input), stdin);

    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }

    //Morzeov tekst
    textToMorse(input);

    //Vnesi morzeov tekst
    fgets(input, sizeof(input), stdin);

    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }

    //Obicen tekst
    morseToText(input);

    return 0;
}
