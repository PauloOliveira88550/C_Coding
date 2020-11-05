#include <stdio.h>
#include <stdlib.h>

unsigned short us2uc(unsigned short x)
{
	unsigned short a;

	a = x + 255;
	return a;
}


int main(int argc, char *argv[]) 
{
	if(argc != 2)
	{
		printf("\nErro de sintaxe\n");
		return -1;
	}

	unsigned  short var;
 	var = atoi(argv[1]);

	unsigned short c;
	c = us2uc(var);

	if(c<=510)
	{
		printf("\nOK\n");
	}

	if(c>510)
	{
		printf("Error: %d\n", c-510);
	}

return 0; 
}
