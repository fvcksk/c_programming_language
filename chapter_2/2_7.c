/*
Напишите функцию invert(x, p, n), возвращающую свой аргумент x,
в котором обращены n бит, начиная с позиции p (т. е еденичные биты заменены нулями, остальные не тронуты)
*/

#include <stdio.h>
unsigned int invert(unsigned int x, int p, int n);

int main() {
    int x = 24;
    int n = 2;
    int p = 2;
    printf("%d", invert(x, p, n));
    return 0;
}

unsigned int invert (unsigned int x, int p, int n) {
    return x ^ (~(~0 << n) << (p - n + 1));
}