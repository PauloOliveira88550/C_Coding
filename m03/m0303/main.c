#include <stdio.h>

unsigned short us2uc(unsigned short x)
{
	unsigned short a=0;

	if(x <= 255) {printf("ok\n");}

		else {a =x-255; printf("error: %hu\n",a);}
}


int main() 
{
	unsigned short x;
	char a;
	a = getchar();

	while(a != EOF)
		{
			printf("?");
			scanf("%hu", &x);
			us2uc(x);
			a = getchar();
		}

return 0; 
}
