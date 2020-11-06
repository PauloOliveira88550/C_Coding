#include <stdio.h>
#include <stdlib.h>

int add_ok(unsigned int x, unsigned char y)
{
	int conver;

	conver = y;
	conver += x;

	return conver;
}

int main(int argc, int *argv[])
{
	if(argc != 3)
	{
		printf("\nErro de sintaxe\n");
		return -1;
	}

	unsigned int y;
	unsigned char ch;

	y =atoi(argv[1]);
	ch = atoi(argv[2]);

	int resultado;
	resultado = add_ok(y,ch);

	if (resultado > 255)
	{
		printf("\nOverflow\n");
		return 0;
	}

	if (resultado <= 255)
	{
		printf("\n No Overflow \n");
		return 1;
	}

	return 0;

}

