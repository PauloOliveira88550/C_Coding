#include <stdio.h>

int main()
{
	int x,y,z,invert,desl,num,acc=0;

	printf("?\n");
	scanf("%d %d", &x,&y);

	if(y<x)
	{
		printf("\nERROR\n");
		return -1;
	}

	else
	{
		for(z=x;z<=y;z++)
		{
			 num=z;
			invert=0;

			do
			{
				desl=(num%10);
				num=num/10;
				invert=invert*10 + desl;
			} while(num!=0);

			if (z == invert)
			{
				acc ++;
				printf("%d", z);
			}
		}
		if (acc==0)
		{
			printf("\nNão Encontrado\n");
		}
	}
	printf("\n");

return 0;

}
