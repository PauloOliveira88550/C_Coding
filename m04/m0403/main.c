#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	int c;
	int i=0;

	char x, texto[1024];

	while((x=getchar()) != EOF)
	{
		if(x == '\')
		{
			if((x=getchar())=='t')
			{

				c= 0;
				while(c<5)
				{
					texto[i]= ' ';
					i++;
					c++;
				}
			}

			else 
			{
				texto[i]= '\';
				i++;
				texto[i]=x;
				i++;
			}
		}

		else
		{
			texto[i]=x;
			i++;
		}
	}

	texto[i] = '\0';
	printf("\n%s\n", texto);
	return 0;
}








