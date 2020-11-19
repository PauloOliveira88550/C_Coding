#include <stdio.h>
#include <stdlib.h>


void calcula (double x, char y, double z)
{
	switch(y) 
	{
		case '+':
			printf("%.2lf\n", x+y);
			break;
		case '*':
			printf("%.2lf\n", x*y);
			break;
		case '/': 
			printf("%.2lf\n", x/y);
			break;
		case '%':
			printf("%.2lf\n", mod(x,y));
	}

}






int main (int argc, char *argv[])
{
	if(argc !=4)
	{
		printf("\nErro de sintaxe\n");
	}

	double n1;
	char n2;
	double n3;

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	n3 = atoi(argv[3]);

	calcula(n1, n2, n3);

	return 0;
}
