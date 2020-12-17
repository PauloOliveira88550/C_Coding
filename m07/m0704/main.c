#include <stdio.h>

void quadrado(int *x);

int main()
{
int x;
    scanf ("%d", &x);
    quadrado(&x);
    printf ("%d\n", x);
}

void quadrado(int *x)
{
    *x = *x * *x;
}
