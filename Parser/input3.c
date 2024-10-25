#include <stdio.h>

void add(int *a, int *b, int *c)
{
    *c = *a + *b;
}

int main()
{
    int a = 10;
    int b = 20;
    int c;
    add(&a, &b, &c);
    printf("Sum of %d and %d is %d\n", a, b, c);
    return 0;
}