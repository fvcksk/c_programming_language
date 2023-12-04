#include <stdio.h>
#include <string.h>
#include <math.h>

int htoi(char s[]);

int main() {
    int n = 999;
    char str[] = "3E7";
    printf("%d", htoi(str));

    return 0;
}

int htoi(char s[]) {
    int n = 0;
    int len = strlen(s);

    for (int i = len - 1; i >= 0; i--) {
        if (s[i] >= '0' && s[i] <= '9') {
            n += (s[i] - '0') * pow(16, len - i - 1);
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            n += (s[i] - 'a' + 10) * pow(16, len - i - 1);
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            n += (s[i] - 'A' + 10) * pow(16, len - i - 1);
        }
    }
    return n;
}