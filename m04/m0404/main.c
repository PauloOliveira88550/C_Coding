#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
 {
	char escolha, frase[20];
	int suport[20]={};
	int i, j;

	scanf("%s", &escolha);
	printf("\n");

	scanf("%s", &frase);
	printf("\n");

	switch(escolha) 
	{
		case 'b':   /// b -> octal  
		{
			while(frase[i] != '\0')
			{
				suport[i] = frase[i]; i++;
			}

			for(j=0;j<i;j++)
			{
				printf("%o", suport[j]);
			}

			printf("012");
			printf("\n%ld\n", strlen(frase)+1);
			break;
		}

		case 'x':	// c-> ascii
		{
			while(frase[i] != '\0')
			{
				suport[i]=frase[i]; i++;
			}

			j=0;
			while(j<i)
			{
				printf("%x", suport[j+1]);
				printf("%x", suport [j]);
			}

			printf("000a");
			printf("\n%ld\n", strlen(frase)+1);
			break;
		}

		case 'c':
		{
			while(frase[i] != '\0')
			{
				suport[i]=frase[i]; i++;
			}

			j=0;
			for(j=0;j<i;j++)
			{
				printf("%c", suport[j]);
			}

			printf("%c", 92);
			printf("n");
			printf("\n%ld\n", strlen(frase)+1);

			break;
		}

	}

	return 0;
}








