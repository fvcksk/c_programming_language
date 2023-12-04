#include <stdio.h>
#include <math.h>
#include <string.h>

void itob(int n, char s[], int b);
void reverse(char s[]);

int main () {
    int n = 228;
    char s[1000] = "";
    itob(n, s, 16);
    printf("%s", s);
    return 0;
}

void itob(int n, char s[], int b) {
    int i = 0;
    int res, sign;
    if ((sign = n) < 0) {
        n = -n;
    }
    do {
        res = n % b;
        if (res >= 10) {
            s[i++] = res + 87;
        } else {
            s[i++] = n % b + '0';
        }
        n /= b;
    } while (n > 0);
    if (sign < 0) {
        s[i++] = '-'; 
    }
    reverse(s);
    s[i] = '\0';
}

void reverse(char s[]) {
    int c, i, j;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}