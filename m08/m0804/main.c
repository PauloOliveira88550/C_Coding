#include <stdio.h>

int main()
{
    int ipv4[2][4] = {0};
    long ip1, ip2;
    short erros = 0, pass;
    char maior;

    printf("? ");
    pass = scanf("%3d.%3d.%3d.%3d", &ipv4[0][0], &ipv4[0][1], &ipv4[0][2], &ipv4[0][3]);

    if(pass != 4)
    {
        stdin->_IO_read_ptr = stdin->_IO_read_end;
        erros++;
    }

    pass = scanf("%3d.%3d.%3d.%3d", &ipv4[1][0], &ipv4[1][1], &ipv4[1][2], &ipv4[1][3]);

    if(pass != 4)
    {
        stdin->_IO_read_ptr = stdin->_IO_read_end;
        erros++;
    }

    if(erros == 0)
    {
        ip1 = (long)ipv4[0][0]*1000000000 + (long)ipv4[0][1]*1000000 + (long)ipv4[0][2]*1000 + (long)ipv4[0][3];
        ip2 = (long)ipv4[1][0]*1000000000 + (long)ipv4[1][1]*1000000 + (long)ipv4[1][2]*1000 + (long)ipv4[1][3];
        
        if(ip1 >= ip2)
            printf("%d.%d.%d.%d", ipv4[0][0], ipv4[0][1], ipv4[0][2], ipv4[0][3]);
        else
            printf("%d.%d.%d.%d", ipv4[1][0], ipv4[1][1], ipv4[1][2], ipv4[1][3]);
    }

    else if(erros == 1)
        printf("um dos enderecos esta incorreto\n");

    else if(erros == 2)
        printf("os dois enderecos estao incorretos\n");

    return 0;
}
