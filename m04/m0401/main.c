#include <stdio.h>
#include <stdlib.h>

double mod(double numerador, double denominador)
{
	int resto;
	resto = (int)numerador/denominador;
	return numerador - resto*denominador;
}


void calcula (double x, char y, double z)
{
	switch(y)
	{
		case '+':
			printf("%.2lf\n", x+z);
			break;
		case '*':
			printf("%.2lf\n", x*z);
			break;
		case '/': 
			if (z=='0')
			{
				printf("\ndivisão por zero\n");
			}
			else
			printf("%.2lf\n", x/z);
			break;
		case '%':
			printf("%.2lf\n", mod(x,z));
			break;
	}

}


int main ()
{

	double n1,n3;
	char n2;

	while(printf("? "),scanf("%lf %c %lf", &n1, &n2, &n3) != EOF)
	{
		calcula(n1, n2, n3);
	}
	return 0;
}
