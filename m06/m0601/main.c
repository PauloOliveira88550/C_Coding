#include <stdio.h>
#include <string.h>
char inv_str(char s[])
{
    int i = 0;
    int c=0;
    while(s[i]!='\0')
    {
        i++;
        c++;
    }
    i=0;
    printf("\n");
    for(i=c;i>=0;i--)
    {
        printf("%c",s[i]);
    }
    printf("\n");
}

int main ()
{
    char texto[500];
    printf("?");
    scanf("%s", texto);
    printf("%s", texto);
    inv_str(texto);
    return 0;
}
