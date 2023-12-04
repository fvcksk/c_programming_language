#include <stdio.h>
/*
 Напишите программу для удаления лишних пробелов и табуляций в хвосте каждой поступающей строки 
 входного потока, которая так же удаляла бы и пустые строки
*/
#define MAX_LEN 1000
int getLine(char str[], int len);
void removeSpace(char str[], int len);

int main() {
    char str[MAX_LEN];
    int len;
    while ((len = getLine(str, MAX_LEN)) > 0) {
        removeSpace(str, len);
        printf("%s", str);
    }
    return 0;
}

int getLine(char str[], int len) {
    int i;
    int c;
    for (i = 0; i < len - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        str[i] = c;
    }
    if (c == '\n') {
        str[i] = '\n';
        i++;
    }
    str[i] = '\0';
    return i;
}

void removeSpace(char str[], int len) {
    if (str[len - 1] == ' ') {
        while(str[len] == ' ') {
            len--;
        }
        str[len + 1] = '\0';
    }
}