#include <stdio.h>

int main() {
    int c = getchar() != EOF;
    if (c == 0) {
        printf("c == EOF\n");
    } else if (c == 1) {
        printf("c != EOF\n");
    } else {
        printf("c не 1 и не 0 (такое невозможно)");
    }
}
