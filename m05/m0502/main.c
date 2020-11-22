#include <stdio.h>
#include <string.h>

void *verifica(char var, int *contaCon, int *contaVogs, int *contaNum)
{

	if( var == 'A' || var == 'a' || var =='E' || var == 'e' || var == 'I' || var == 'i' || var =='O' || var == 'o' || var == 'U' || var == 'u')
	{
		*contaVogs+=1;
	}

	else if( var == '1' || var == '2' || var == '3' || var == '4'|| var =='5' || var =='6' || var == '7' || var == '8' || var == '9' || var == '0')
	{
		*contaNum +=1;
	}
	
	 else 
	{
		*contaCon +=1;
	}

	
}


int main(int argc, char *argv[])
{
	int i=1;
	int j=1;
	int contaCon=0;
	int contaVogs=0;
	int contaNum=0;

	for(i;i<argc;i++)
	{
		char *ptr = argv[i];
		
		while(*ptr != '\0')
		{
			char var = *ptr;
		
			verifica(var, &contaCon, &contaVogs, &contaNum);

			*ptr++;
		}

		if(contaNum == 0)
		{
			printf("%s - %d vogais, %d consoantes\n", argv[i], contaVogs, contaCon);
		}

		if(contaVogs ==0 && contaCon ==0)
		{
			printf("%s - %d numeros\n",argv[i], contaNum);
		}
		
	}

return 0;
}

