#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

struct no
{
	int valor;
	struct no *prox;
};


int read(int *n)
{
	printf("?: ");
	if((scanf("%d", n)) ==1 && *n >0)
		return TRUE;
	else return FALSE;
}


int imprimir_lista(struct no *lista)
{
	while(lista !=NULL)
	{
		printf("(%d, )->", lista->valor);
		lista = lista ->prox;
	}

	printf(" NULL\n");
}

void inserir_fim_lista(struct no *a)
{
	a-> prox=NULL;
}

void apagar_no(struct no *no)
{
	free(no);
}

struct no* alocar_no(int n)
{
	struct no *novo = (struct no*)malloc(sizeof(struct no));
	novo -> valor =n;
	return novo;
}

void apagar_lista(struct no *lista){
    while(lista != NULL){
        struct no *tmp = lista;
        lista = lista->prox;
        apagar_no(tmp);
    }
}

int main(){
    int n;
    
    if(read(&n) == TRUE){
        int* vet = (int*)malloc(n * sizeof(int));
        struct no* *str_vet = (struct no* *)malloc(n * sizeof(struct no*));
        for (int i = 0; i < n; i++){
            scanf("%d", &vet[i]);
            str_vet[i] = alocar_no(vet[i]);
            if (i > 0)
                str_vet[i-1]->prox = str_vet[i];
        }
        inserir_fim_lista(str_vet[n-1]);
        struct no *lista = str_vet[0];
        imprimir_lista(lista);
    }
    else{
        printf("error: invalid value!");
    }
    return 0;
}


