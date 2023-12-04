#include <stdio.h>

int main() {
    int c;
    int counter = 8;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            for (int i = 0; i < counter; i++) {
                putchar(' ');
            }
            counter = 8;
        } else {
            putchar(c);
            counter--;
            if (counter == 0) {
                counter = 8;
            }
        }
        if (c == '\n') {
            counter = 8;
        }
    }
 
    return 0;
}