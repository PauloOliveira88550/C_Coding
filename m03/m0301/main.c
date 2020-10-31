#include <stdio.h> 

void print_counter()
{
	static int counter;
	counter += 1;
	printf("%d\n", counter);
}

int main ()
{
	print_counter();
	print_counter();
	return 0;
}
