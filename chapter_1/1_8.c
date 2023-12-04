#include <stdio.h>

int main() {
    int c;

    int space = 0;
    int tab = 0;
    int newLine = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            space++;
        if (c == '\t') {
            tab++;
        }
        if (c == '\n') {
            newLine++;
        }
    }

    printf("space: %d\ntab: %d\nnewLine: %d\n", space, tab, newLine);
    return 0;
}