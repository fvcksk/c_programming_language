/* 
Напишите функцию rightrot (x, n), 
которая бы возвращала значение своего целого аргумента x после его вращения вправо на n двоичных разрядов
*/

#include <math.h>
#include <stdio.h>

int rightrot(unsigned int x, unsigned int n);

int main() {
    unsigned x = 13;
    int n = 2;
    printf("%d", rightrot(x, n));

    return 0;
}

int rightrot(unsigned int x, unsigned int n) {
    int counter = 0;

    int x1 = x;

    while (x1 > 0) {
        x1 = x1 >> 1;
        counter++;
    }

    n %= counter;

    for (int i = 0; i < n; i++) {
        int flag = 0;
        if (x & 1)
            flag = 1;
        x = x >> 1;
        int cleared_number = x & ~(1 << (counter - 1));
        if (flag == 1){
            x = cleared_number | (1 << (counter - 1));
        } else
            x = cleared_number | (0 << (counter - 1));
    }

    return x;
}