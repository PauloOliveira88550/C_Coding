#include <stdio.h>
#include <stdlib.h>


struct no
{
 int valor;
 struct no *proximo;
};


void inverter_lista(struct no **lista)
{
	struct no *next= NULL, *prev=NULL;
	while(*lista!=NULL)
	{
		next = (*lista)->proximo;
		(*lista)->proximo = prev;

		prev=*lista;
		*lista=next;
	}
		*lista=prev;
}

void imprimir_lista(struct no *lista)
{
	while(lista !=NULL)
	{
		printf("(%d,)->", lista->valor);
		lista= lista->proximo;
	}
	printf("NULL\n");
}


int main()
{
 struct no n1, n2, n3;
 struct no *lista;

 n3.valor = 3;
 n3.proximo = NULL;
 n2.valor = 2;
 n2.proximo = &n3;
 n1.valor = 1;
 n1.proximo = &n2;
 lista = &n1;
 imprimir_lista(lista);
 inverter_lista(&lista);
 imprimir_lista(lista);
 return 0;
}
