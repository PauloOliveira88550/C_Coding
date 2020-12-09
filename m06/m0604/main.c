#include <stdio.h>

int strlen1(char s[])
{
	int l = -1;

	for(int i=0;s[i]!='\0';i++)
	{
		l++;
	}

	return l;
}

void strcpy1(char s1[], char s2[])
{
	for(int i=0;i<strlen1(s2)+1;i++)
	{
		s1[i]=s2[i];
	}

	for(int i=0;i<strlen(s1)+1;i++)
	{
		printf("%c", s1[i]);
	}

}

void strcat1(char s1[], char s2[])
{
	for(int i=0;i<strlen(s2)+1;i++)
	{
		s1[i+strlen1(s1)+1]=s2[i];
	}

	for(int i=0; i<strlen(s1)+strlen(s2)+2;i++)
	{
		printf("%c", s1[i]);
	}
}

void strcmp1(char s1[], char s2[])
{
	if(strlen1(s1)>strlen(s2))
	{
		printf("\nMaior");
	}
	else if(strlen(s1)==strlen(s2))
	{
		printf("\nIgual");
	}
	else printf("\nMenor");
}




int main(int argc, char *argv[])
{
	if(argc==2  && argv[1][0] =='-' && (argv[1][1]=='l' || argv[1][1] == 'c') && (argv[1][3]=='n' || argv[1][3] =='y' || argv[1][3] == 't' || argv[1][3]=='p'))
	{

		int i=0, flag;
		char ch;
		char vet[100]={0}, vet2[100]={0};

		if(argv[1][2]=='e' && argv[1][2]=='p')
		{
			while(ch != '\n')
			{
				ch = getchar();
				if(ch != '\n')
					vet[i]=ch;
				else vet[i]='\0';
				i++;
			}
		}else 
			while(ch != '\n')
			{
				if(flag==0)
				{
					ch=getchar();
					if(ch !=' ')
						vet[i]=ch;
					else vet[i]='\0';
					i++;
				}

				if(flag==1)
				{
					ch=getchar();
					if(ch != '\n')
						vet2[i]=ch;
					else vet2[i]='\0';
					i++;
				}
	
				if(ch== ' ')
				{
					flag=1;
					i=0;
				}
		}

		switch(argv[1][2])
		{
			case 'e':
				printf("%d", strlen1(vet));
				break;
			case 'p':
				strcpy1(vet2,vet);
				break;
			case 'a':
				strcat(vet, vet2);
				break;
			case 'm':
				strcmp(vet,vet2);
				break;
			default:
				printf("ERROR");
		}

	}
	return 0;
}





