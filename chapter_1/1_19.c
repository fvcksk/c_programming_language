#include <stdio.h>

#define MAX_LEN 1000

int getLine(char str[], int len);
void reverse(char str[], int len);

int main() {
    int len;
    char str[MAX_LEN];

    while ((len = getLine(str, MAX_LEN)) > 0) {
        reverse(str, len);
        printf("%s", str);
    }
    return 0; 
}

int getLine(char str[], int len) {
    int i, c;

    for (i = 0; i < len && (c = getchar()) != EOF && c != '\n'; i++) {
        str[i] = c;
    }
    if (c == '\n') {
        str[i] = '\n';
        i++;
    }
    str[i] = '\0';
    return i;
}

void reverse(char str[], int len) {
    char tmp;
    for (int i = 0; i < len / 2; i++) {        
        char tmp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tmp;
    }
}