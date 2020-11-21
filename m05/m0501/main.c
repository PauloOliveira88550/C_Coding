#include <stdio.h> 
#include <string.h>

int main(int argc, char *argv[])
{
	int i=1;


	for(i;i<argc;i++)
	{
		if((*argv[i]) == ' ')
		{
			printf("\n");
		}

		printf("%s", argv[i]);
		printf("\n");
	}

return 0;
}

