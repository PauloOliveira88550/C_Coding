#include <stdio.h>
#include <stdlib.h>

unsigned char set_bit(unsigned char x, int b)
{
	unsigned char mask = 0;
	mask = 1 << b;
	x = x | mask;
	return x;
}

unsigned char  clr_bit(unsigned char x, int b)
{
	unsigned char mask = 0;
	mask = 1 << b;
	x = x ^ mask;
	return x;
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("\nERRO\n");
		return -1;
	}

	unsigned char x;
	int z;
	int v;

	x = atoi(argv[1]);
	z = atoi(argv[2]);
	v = atoi(argv[3]);

	if ( x<0 || x>256)
	{
		printf("\nErro no 1º parametro\n");
		return -1;
	}

	if(v<0 || v>7)
	{
		printf("\nErro no 2º parametro\n");
		return -1;
	}

	if (z<0 || z>1)
	{
		printf("\nErro no 3º parametro\n");
		return -1;
	}

	if (z == 1)
	{
		x = set_bit(x,v);
	}

	if (z ==0)
	{
		x = clr_bit(x,v);
	}

	printf(" -> %d\n", x);

	return 0;

}

