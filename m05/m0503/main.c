#include <stdio.h>
#include <string.h>

void print_table(char * options, int *value)
{
	char description[][32] = {"linhas", "palavras", "caracteres", "vogais", "consoantes", "digitos", "outros"};

	printf("\n+---------------+----------------------+\n");

	if(!strcmp(options, "0000000"))
		for(int i=0;i<7;i++)
			printf("| %-11s| %-17|\n", description[i], value[i]);

	else
		for(int i=0;i<7;i++)
			if(options[i] !='0')
				printf("| %-11s| %-17d| \n", description[i], value[i]);

	printf("+----------------+-----------------------+\n");

}


int main(int argc, char *argv[])
{

	char arr_dig[]= {'0','1','2','3','4','5','6','7','8','9'};
	char arr_vog[]= {'a','e','i','o','u','A','E','I','O','U'};
	char arr_con[]= {'b','c','d','f','g','h','j','k','l','m','n',
			'p','q','r','s','t','v','w','x','y','z','B',
			'C','D','F','G','H','J','K','L','M','N','P','Q',
			'R','S','T','V','X','Y','W','Z'};

	char options[8] = "0000000";
	int value[8] = {0,1,0,0,0,0,0};
	char ch;
	int flag =0;

	for(int i=0; i<argc;i++)
	{
		if(argv[i][0] != '-')
		{
			printf("\nERRO\n");
			return 0;
		}

		for(int j=1;j< strlen(argv[i]); j++)
		{
			switch(argv[i][j])
			{
				case 'l': {options[0] = 'l';break;}
				case 'w': {options[1]='w';break;}
				case 'c': {options[2]='c'; break;}
				case 'v': {options[3]='v';break;}
				case 'k': {options[4]='k';break;}
				case 'd': {options[5]='d'; break;}
				case 'o': {options[6]='o';break;}
				default:
				{
					printf("\nargumento incorreto\n");
				}
			}
		}
	}

	while((ch= getchar()) != EOF)
	{
		value[2]++;

		for(int i=0; i<10;i++)
			if (ch==arr_dig[i])
				value[5]++;

		for(int i=0; i<10;i++)
			if (ch == arr_vog[i])
				value[3]++;

		for(int i=0; i<42;i++)
			if(ch == arr_con[i])
				value[4]++;

		if(ch == '\n')
			value[0]++;

		if(flag == 1 && ch != ' ' && ch !='\n')
			value[1]++;

		if (ch == ' ' || ch == '\n')
			flag=1;
		else 
			flag=0;
	}


		value[6]= value[2] - value[3] - value[4] -value[5];

		print_table(options, value);

}

