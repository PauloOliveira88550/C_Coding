#include <stdio.h>

int main (int argc, char *argv[]) 
{
	if(argc != 3) 
	{
		printf("erro\n");
	}
	else 
	{
		char a, b, ch;
		a= *argv[1];
		b = *argv[2];
	
		do{
			ch = getchar();
			if(ch == a){
				puchar(b);
				}
			else if (ch != EOF) {
				putchar(ch);
					}
		} while(ch != EOF);

	}

	return 0;
}
