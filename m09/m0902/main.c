#include<stdio.h>

struct ponto
{
    float x, y;
};

int ler_ponto(struct ponto *pt)
{
    return scanf("%f %f", &pt->x, &pt->y) == 2 ? 1 : 0;
}


void imprimir_pontos(struct ponto *pontos)
{
    printf("P1 = (%.2f, %.2f), P2 = (%.2f, %.2f), P3 = (%.2f, %.2f)\n", pontos[0].x, pontos[0].y, pontos[1].x, pontos[1].y, pontos[2].x, pontos[2].y);
}

int verificar_triangulo(struct ponto p1, struct ponto p2, struct ponto p3)
{
    return (p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y));
}

int main(int argc, char *argv[])
{
    struct ponto p[3];

    for (int i = 0; i < 3; i++)
    {
        printf("P%d? ", i + 1);
        if(!ler_ponto(&p[i]))
        {
            printf("error: invalid point!\n");
            return 0;
        }
    }    

    imprimir_pontos(p);

    if(verificar_triangulo(p[0], p[1], p[2]))
        printf("valid triangle!\n");
    else
        printf("invalid triangle!\n");
    
    return 0;
}
