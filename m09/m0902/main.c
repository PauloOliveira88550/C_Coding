#include <stdio.h>
#define TRUE 1

struct pontos
{
    int x;
    int y;
};

int ler (struct pontos *pt);
int verificar (struct pontos p1, struct pontos p2, struct pontos p3);
void imprimir (struct pontos *pontos);

int ler(struct pontos *pt)
{
    return scanf ("%d %d", &pt->x, &pt->y);
}

int verificar(struct pontos p1, struct pontos p2, struct pontos p3)
{
int n; 
	n = p1.x*p2.y + p1.y*p3.x + p2.x*p3.y   -   (p2.y*p3.x + p1.x*p3.y + p1.y*p2.x);
return n;
}

void imprimir (struct pontos *pontos)
{
int i;
    for (i = 0; i < 3 ; i++, pontos++)
	{
	 	printf("P%d = (%d, %d)", i+1, pontos->x, pontos->y);
	}
}


int main(int argc, char *argv[])
{
int conta=0, i, flag=0;
struct pontos pt[3];
struct pontos *pontos;

	pontos = &pt[0];
    for (i = 0; i < 3 ; i++)
    {
        printf("P%d? ", i+1);
	  	if (ler(&pt[i]) != 2)
		   flag=1;
	}

    imprimir(pontos);
	if ( verificar(pt[0], pt[1], pt[2]) )
	 	printf("\nvalid triangle!\n");
	else
	 	printf("\ninvalid triangle!\n");

    if (flag == 1)
        printf ("\nerror: invalid point!\n");

 return 0;
}
