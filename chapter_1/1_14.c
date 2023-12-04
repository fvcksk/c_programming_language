#include <stdio.h>

int main() {
    int array[93];

    for (int i = 0; i < 93; i++) {
        array[i] = 0;
    }

    int c;

    while ((c = getchar()) != EOF) {
        array[c - 33]++;
    }

    for (int i = 0; i < 93; i++) {
        printf("%c: ", i + 33);
        for (int j = 0; j < array[i];j ++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}