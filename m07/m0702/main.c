#include <stdio.h>

int main()
{
 int x = 56;
 //int *p = &x;
 //int *p;
 int *p = &x;
 *p = &x;
 printf("O valor de x e %d\n", x);
 printf("O endereco de x e %x\n", &x);
 printf("O valor de p e %x\n", p);
 printf("O endereco de p e %x\n", &p);
 printf("p aponta para o valor %d\n", *p);
 return 0;
}

//a)
	//No 1º printf saira o valor de x 56.
	//NO 2º printf saira o endereÃ§o onde foi quardado o resoltado da variavel x.
	//No 3º printf saira o valor da variavel p.
	//No 4º printf saira o endereco onde foi quandado a variavel &p.
	//No 5º printf saira o valor de *p que sera¡ igual a 56 pois *p aponta para &x.


//b)
	//O 5º printf passou a devolver 1 pois o valor de p nao e defenidio entÃ£o o compilador devolve o valor de 1.


//c)
	//Sim, o que acontece e que alteramos o valor de x como o os enderecos que fizemos posteriormente.
