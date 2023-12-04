#include <stdio.h>
#include <ctype.h>
#include <string.h>

int atoi(char s[]);
void shellsort(int v[], int n);
void reverse(char s[]);
void itoa(int n, char s[]);

int main() {
    int arr[] = {1234, 2, 43, 1, 555, 612, 12};
    shellsort(arr, 7);
    for (int i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

int atoi(char s[]) {
    int i, n, sign;

    for (i = 0; s[i] == ' '; i++);

    sign = (s[i] == '-') ? -1 : 1;
    i++;

    for (n = 0; isdigit(s[i]); i++) {
        n = 10 * n + (s[i] - '0');
    }
    return n * sign;
}

void shellsort(int v[], int n) {
    int gap, i, j, temp;

    for (gap = n/2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
}

void reverse(char s[]) {
    int c, i, j;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

void itoa(int n, char s[]) {
    int i, sign;
    if ((sign = n) < 0)
        n = -n;
    i = 0;
    do {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);
    if (sign < 0)
        s[i++] = '-';
    s[i] ='\0';
    reverse(s);
}

int trim(char s[]) {
    int n;

    for (n = strlen(s) - 1; n >= 0; n--)
        if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
            break;
    s[n+1] = '\0';
    return n;
}