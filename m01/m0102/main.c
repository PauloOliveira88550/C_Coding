#include <stdio.h>

int main()
{
	printf("%li \n",sizeof(char));
	printf("%li \n",sizeof(short));
	printf("%li \n",sizeof(int));
	printf("%li \n",sizeof(long int));

	char a=127;
	printf("%i \n",a);

	a += 1;
	printf("%i \n",a);
}

