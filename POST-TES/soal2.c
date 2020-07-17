#include <stdio.h>

int main(void)
{
    int a = 15;
    int b = 20;

    // kode disini
    int c;
    c = a;
    a = b;
    b = c;

    printf("a = %d, b = %d", a, b);
}