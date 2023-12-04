#include <stdio.h>

int bitcount(unsigned x);

int main() {
    int x = 10;
    printf("%d\n", bitcount(x));
    x &= (x - 1);
    printf("%d\n", bitcount(x));
    return 0;
}

int bitcount(unsigned x) {
    int b;

    for (b = 0; x != 0; x >>=1)
        if (x & 01)
            b++;
    return b;
}