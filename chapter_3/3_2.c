#include <stdio.h>

void escape (char s[], char t[]);

#define MAX_LEN 1000

int main() {
    char t[MAX_LEN] = "Hello\t, \nworld";
    char s[MAX_LEN];
    
    escape(s, t);
    printf("%s", t);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("%s", s);
    return 0;
}

void escape(char s[], char t[]) {
    for (int i = 0, j = 0; t[i] != '\0'; i++, j++) {
        switch(t[i]) {
            case ('\n'): s[j] = '\\', s[++j] = 'n'; break;
            case ('\t'): s[j] = '\\', s[++j] = 't'; break;
            case ('\b'): s[j] = '\\', s[++j] = 'b'; break;
            default: s[j] = t[i]; break;
        }
    }
}