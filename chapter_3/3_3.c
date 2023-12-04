#include <stdio.h>
#include <ctype.h>

void expand(char s1[], char s2[]);

#define MAX_LEN 1000

int main() {
    char s1[MAX_LEN] = "a-b-ca-z";
    char s2[MAX_LEN] = "";
    expand(s1, s2);
    printf("%s", s2);
    return 0;
}

void expand(char s1[], char s2[]) {
    int i, j;
    for (i = 0, j = 0; s1[i] != '\0'; i++, j++) {
        if (s1[i] == '-' && s1[i - 1] != '\0' && s1[i + 1] != '\0') {
            if (s1[i - 1] == 'a' && s1[i + 1] == 'z') {
                j--;
                for (int k = 0; k < 26; k++) {
                    s2[j] = 'a' + k;
                    j++;
                }
            } else if (s1[i - 1] == 'A' && s1[i + 1] == 'Z') {
                j--;
                for (int k = 0; k < 26; k++) {
                    s2[j] = 'A' + k;
                    j++;
                }
            } else if (s1[i - 1] == 'A' && s1[i + 1] == 'Z') {
                j--;
                for (int k = 0; k < 10; k++) {
                    s2[j] = '0' + k;
                    j++;
                }
            } else {
                s2[j] = s1[i];
            }
        } else
            s2[j] = s1[i];
    }
    s2[j] = '\0';
}