#include <stdio.h>

#define TRUE 1

struct data
{
    int d;
    int m;
    int a;
};


int ler_data (struct data *dt);
int validar_data (struct data *dt);
void imprimir_data (struct data *dt);


int ler_data (struct data *dt)
{
int conta=0;

    conta = scanf ("%2d/%2d/%4d", &dt->d, &dt->m, &dt->a);

return (conta == 3 ? 1 : 0);
}

int validar_data (struct data *dt)
{
int n=0;
int m[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ( dt->d > 0 && dt->d <= m[dt->m-1] )
        n = 1;

    if (dt->m == 2 && dt->d == 29 && (dt->a % 400 == 0 || (dt->a % 4 == 0 && dt->a % 100 != 0)) )
        n = 1;

return n;
}


void imprimir_data (struct data *dt)
{
    printf("%d/%d/%d\n", dt->d, dt->m, dt->a);
}


int main(int argc, char *argv[])
{
    struct data dt;

    printf ("? ");
    if (ler_data(&dt) == TRUE)
    {
        if (validar_data(&dt) == TRUE)
            imprimir_data(&dt);
        else
            printf("error: invalid date!\n");
    }
    else
        printf("error: invalid input!\n");

return 0;
}
