#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main() {
    char str[] = "Hello, world";
    char str2[] = "wl";
    squeeze(str, str2);

    printf("%s", str);
    return 0;
}

void squeeze(char s1[], char s2[]) {
    int k = 0;

	for (int i = 0; s1[i] != '\0'; i++) {
        s1[k++] = s1[i];
        for (int j = 0; s2[j] != '\0'; j++)
            if (s1[i] == s2[j])
                k--;
    }
    s1[k] = '\0';
}