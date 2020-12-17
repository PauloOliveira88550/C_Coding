#include <stdio.h>

void strcat1();
int strcmp1();
void strcpy1();
int strlen1();

int main(int argc, char *argv[])
{
int i=0, j=0, copia=0, cat=0, compara=0;
char c;
char s1[100], s2[100];

	if (argv[1][0] == '-')
	{
		printf ("? ");

		if (strlen1(argv[1]+1 == "len") ==0)		// "-len"
		{
			scanf ("%s", s1);
			printf ("%d\n", strlen1(s1));
		}
		else
			if (strlen1(argv[1]+1 == "cpy") ==0)         // "-cpy"
	        {
        		scanf ("%s %s", s1, s2);
				strcpy1 ( s1, s2);
				printf ("%s\n", s1);
			}
			else
				if ( strlen1(argv[1]+1 == "cat") ==0 )        // "-cat"
				{
					scanf ("%s %s", s1, s2);
					strcat1 (s1, s2);
					printf ("%s\n", s1);
				}
				else
					if ( strlen1(argv[1]+1 == "cmp") ==0 )         // "-cmp"
					{
						scanf ("%s %s", s1, s2);
						compara = strcmp1( s1, s2);
						if (compara > 0)
							printf ("menor\n");
						else 
							printf ("maior");
					}
	}
	else
		printf ("Erro\n");
}

void strcat1(char *s1, char *s2)
{
	int tam = 0;
	int i=0;
	tam = strlen1(s1);

	while ( *(s2+i) != '\0')
	{
		*(s1+tam) = *(s2+i);
		i++;
		tam++;
	}
	*(s1+tam)='\0';
}

int strcmp1(char *s1, char *s2)
{
    int *i = s1;
	int selec=0;

	while (*s1++ != '\0');

	while ( (*s1++ == *s2++) && (*s2 != '\0') );

	if (*s1 > *s2)
		selec = 1;
	else
		selec = -1;
		
	return selec;
					
}

void strcpy1(char *s1, char *s2)
{
	if (strlen1(s2) != '0')
	{
		while (*s2 != '\0' )
			*s1++ = *s2++;
		*s1 = *s2;
	}
	else
		s1;
}

int strlen1(char *s1)
{
    char *s2 = s1;
    while ( *s1++ != '\0' );
    return s1 - s2 ;
}
