#include <stdio.h>

void qsort(int v[], int left, int rigth) {
    int i, last;
    void swap(int v[], int i, int j);

    if (left >= rigth)
        return;
    swap(v, left, (left + rigth) / 2);
    last = left;
    for (i = left + 1; i <= rigth; i++)
        if (v[i] < v[left])
            swap(v, ++last, i);
    swap(v, left, last);
    qsort(v, left, last - 1);
    qsort(v, last + 1, rigth);
}

void swap(int v[], int i, int j) {
    int temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}