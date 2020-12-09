#include <stdio.h>
#include <string.h>

int any(char c[], char c1[])
{
	int p=-1,m=0;

	for(int i=strlen(c)-1;i>-1;i--)
	{
		for(int j=strlen(c1)-1;j>-1;j--)
		{
			if(c[i]==c1[j])
			{
				p=i+1;
				break;
			}
		}
	}

	return p;
}

int main()
{
	int i=0, flag=0, p=-1;
	char ch;
	char vet[100] =  {0};
	char vet2[100] = {0};

	printf("?\n");

	while(ch != '\n')
	{
		if(flag==0)
		{
			ch =getchar();
			if (ch != ' ')
			{
				vet[i]=ch;
			}
			else vet2[i] = '\0';
			i++;
		}
	


		if(flag ==1)
		{
			ch=getchar();
			if(ch != '\n')
			vet2[i]=ch;
			else vet[i]='\0';

			i++;	
		}	

		if(ch ==' ')
		{
			flag = 1;
			i=0;
		}

	}


	p = any(vet, vet2);

	if (p>-1)
		printf("found: %2d\n", p);
	else 
		printf("\n not found\n");

	return 0;

}



