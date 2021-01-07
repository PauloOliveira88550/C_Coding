int main()
{
    int a1, a2, a3, a4, a5, a6, a7, a8;
    int p=0, p1=0;
    long int ip1, ip2;
    int conta=0;

    printf ("? ");
    conta = scanf("%3d.%3d.%1d.%3d %3d.%3d.%1d.%3d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8);

    if (conta != 8)
    {
        printf ("um dos enderecos esta incorrecto");
        return 0;
    }

    while (getchar() != '\n');

    ip1 = 1000 * (1000000 * a1 + 1000 * a2 + a3) + a4;
    ip2 = 1000 * (1000000 * a5 + 1000 * a6 + a7) + a8;

    if (ip1 > ip2)
        printf ("%3d.%3d.%1d.%3d\n", a1, a2, a3, a4);
    else
        if (ip1 < ip2)
            printf ("%3d.%3d.%1d.%3d\n", a5, a6, a7, a8);
        else 
            printf ("os dois IPs sao iguais\n");



}
