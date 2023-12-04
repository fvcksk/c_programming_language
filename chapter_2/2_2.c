#include <stdio.h>

int main() {
    int i;
    int c;
    char s[1000];
    int lim = 100;

    for (i = 0; i < lim - 1; i++) {
        if ((c = getchar()) != '\n') {
            if (c != EOF) {
                s[i] = c;
            }
        }
    }
    return 0;
}