#include <stdio.h>
#include <string.h>

int main()
{

char nome[200], curso[200];
int numero=0, data=0, matricula=0, dia=0, mes=0, ano=0, n=0, conta=0, anoAtual=2021, idade=0, i=0, flagNome=0;
int m[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};



	while(n!=1)
	{
		printf("Numero: ");
		n=scanf("a%5d", &numero);
		while(getchar()!='\n');
	}
	
    n = 0;

	while(n != 1)
	{
		printf("Nome: ");
		scanf("%c", nome);

		while(getchar() != '\n');

		while(nome[i] != '\0')
		{
			if(nome[0] < 'A' || nome[0] > 'Z')
			{
				n = 1;
			}
			if(nome[i] == ' ')
			{
				i++;
				if(nome[i] < 'A' || nome[i] > 'Z')
					n = 1;
			}
			i++;
		}
	}

    n=0;

	while(n != 1)
	{
		printf("Data de Nascimento: ");
		conta = scanf("%2d/%2d/%4d", &dia, &mes, &ano);

		while(getchar() != '\n');

		if(conta == 3)
		{
			if ( dia > 0 && dia <= m[mes] )
		        n=1;
	
	        if (mes == 2 && dia == 29 && (ano % 400 ==0 || (ano % 4 == 0 && ano % 10 != 0)))
		        n=1;
		}
	}

	n=0;

	while(n != 1)
	{
		printf("Curso: ");
		n = scanf("%s", curso);
		while(getchar() != '\n');
	}

	n=0;

	while(n!=1)
	{
		printf("Ano da Matricula: ");
		n = scanf("%4d", &matricula);
		while(getchar() != '\n');
	}

	idade = anoAtual-ano-1;

	printf("\na%d - %s \n%02d/%02d/%4d (%d anos) \n%s - %d\n", numero, nome, dia, mes, ano, idade, curso, matricula);

	return 0;
}
