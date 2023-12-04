#include <stdio.h>

#define MAX_LEN 1000
int getLine(char str[], int lim);

int main() {
    char str[MAX_LEN];
    int len;
    while ((len = getLine(str, MAX_LEN)) > 0) {
        if (len >= 80) {
            printf("%s", str);
        }
    }
    return 0;
}

int getLine(char str[], int lim) {
    int c;
    int i;
    for (i = 0; i < lim - 1 & (c = getchar()) != EOF && c != '\n' && c != ' '; i++) {
        str[i] = c;
    }
    return i;
}