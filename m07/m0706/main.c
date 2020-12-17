
#include <stdio.h>
#include <string.h>

void mystrcat();

int main (int argc, char *argv[])
{
    char s1[100], s2[100];

    printf ("? ");
    scanf ("%s %s", s1, s2);
    mystrcat(s1, s2);
    printf("%s\n", s1);
}

void mystrcat(char *s1, char *s2)
{
    int tam = strlen(s1);
    int i = 0;

    while (*(s2+i) != '\0')
	{
		*(s1+tam) = *(s2+i);
        i++;
        tam++;
	}
	*(s1+tam)='\0';
}
