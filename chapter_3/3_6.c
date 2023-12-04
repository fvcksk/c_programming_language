#include <stdio.h>
#include <string.h>

void reverse(char str[]);
void itoa(int n, char s[], int b);

#define MAX_LEN 1000

int main() {
    char s[MAX_LEN];
    int n = 12343;
    itoa(n, s, 10);
    printf("%s", s);
    return 0;
}

void itoa(int n, char s[], int b) {
    int i = 0, sign;
    if ((sign = n) < 0)
        n = -n;
    do {
        s[i++] = n % 10 + '0';
        n /= 10;
    } while (n > 0);
    while (i < b) {
        s[i++] = ' ';
    }
    if (sign < 0) {
        s[i++] = '-';
    }
    reverse(s);
    s[i] = '\0';
}

void reverse(char str[]) {
    int i, j, c;

    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
}