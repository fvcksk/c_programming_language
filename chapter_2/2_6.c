#include <stdio.h>

int setbits(int x, int p, int n, int y);

int main() {
    printf("%u\n",setbits(0, 4, 2, 1));
	return 0;
}

int setbits(int x, int p, int n, int y) {
    // n битов, начиная с позиции p равны n крайним правым битам аргумента y
    return (x | ((~(1 << n) & y) << (p+1-n)));
}