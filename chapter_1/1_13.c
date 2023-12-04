#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int c, state;

    int lenWords[51];

    for (int i = 0; i < 51; i++) {
        lenWords[i] = 0;
    }

    state = OUT;

    int len = 0;
    int maxLen = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            lenWords[len]++;
            len = 0;
            state = OUT;
        } else if(state == OUT) {
            state = IN;
        }
        if (state == IN) {
            len++;
        }
    }


    for (int i = 1; i < 51; i++) {
        printf("Слов с длинной - %d: ", i);
        for (int j = 0; j < lenWords[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}