#include <stdio.h>
#include <string.h>

int v(char c)
{
	if(c=='a' || c =='e' || c == 'i' || c== 'o' || c == 'u' || c=='A' || c =='E' || c=='I' || c=='O' || c =='U')
	{
		return 1;
	}
		else return 0;

}

int d(char c)
{
	if(c == ' ' || c== '\t' || c == '\n')
	{
		return 1;
	}
		else return 0;
}

int b(char c)
{
	if(c>='0' &&  c<= '9')
	{
		return 1;
	}

	else return 0;
}

int main()
{
	int i=0, vg=0, dg=0, cb=0;
	char ch;

	char vet[100];

	while(ch != EOF)
	{
		ch = getchar();
		vet[i]=ch;
		i++;
	}

	for(i=0;i<strlen(vet)-1;i++)
	{
		vg+=v(vet[i]);
		dg+=d(vet[i]);
		cb+=b(vet[i]);
	}

	printf("\nvogais = %d digitos=%d caracteres brancos=%d", vg, dg, cb);

	return 0;
}
