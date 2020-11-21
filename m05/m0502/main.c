#include <stdio.h>
#include <string.h>

int verifica(char ch, int *contaCon, int *contaVogs)
{
	printf("aqui");
	//(*cC)=0;
	//(*cV)=0;

	if(ch == 'A' || ch == 'a' || ch =='E' || ch == 'e' || ch =='I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
	{
		contaVogs++;
	}
	else 
	{
		contaCon++;
	}

	return 0;
}



int main(int argc, int *argv[])
{
	int i=1;
	int j=1;
	int *contaCon;
	int *contaVogs;

	contaCon=0;
	contaVogs=0;

	for(i;i<argc;i++)
	{
		for(j;j<strlen(argv[i]);j++)
		{
			verifica((*argv[j]), &contaCon, &contaVogs);
		}

		if((*argv[i])  == ' ')
		{
			printf("%ls", argv[i]);
			printf("  -> %ls vogais, %ls consoantes", contaVogs, contaCon);
			printf("\n");
		}

		//printf("%ls", argv[i]);


	}

return 0;

}
