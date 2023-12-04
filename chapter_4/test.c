#include <stdio.h>
#define max(a, b) (a > b ? a : b)
#define dprint(expr) printf(#expr " = %g\n", expr)
#define paste(front, back) front ## back

int main() {
    int n1 = 1;
    int n2 = 2;

    double x = 5;
    int y = 2;

    dprint(x/y);
    int paste(name, 1) = 5;
    printf("%d", name1);
    printf("\n");

    printf("%d\n", max(n1++, n2++));
    printf("%d\n", n2);
    return 0;
}
