#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	int c;
	int i=0;

	char a;
	while((a= getchar()) !=EOF)
	{
		if (a == '\t')
		{
			printf("    ");
		}
		else
		{
			printf("%c", a);
		}
	}

	return 0;
}








