#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct ponto{
    int x,y;
};

void clear_stdin(){
    char c;
    do{
        c = getchar();
    } while(c != '\n');
}

int ler_n(int *n){
    printf("n? ");
    if (scanf("%d", n) != 1 || *n < 2){
        printf("erro: numero de pontos tem que ser superior a 1");
        return 0;
    }
    return 1;
}

void ler_ponto(struct ponto *a, int i){
    int flag = 0;
    do{
        printf("P%d? ", i);
        if (scanf("%d %d", &a->x, &a->y) == 2)
            flag = 1;
        clear_stdin();
    } while(flag == 0);
}

int calc_dist(struct ponto *vet, int n){
    int i = 0, soma = 0;
    while(i < n){
        for (int j = i+1; j < n; j++)
            soma += abs(vet[i].x - vet[j].x) + abs(vet[i].y - vet[j].y);
        i++;
    }
    return soma;
}

int main(){
    int n;
    if (ler_n(&n)){
        struct ponto* vet = (struct ponto *)malloc(n * sizeof(struct ponto));
        for (int i = 0; i < n; i++){
            ler_ponto(&vet[i], i+1);
            //printf("%d %d\n", vet[i].x, vet[i].y);
        }
        printf("%d", calc_dist(vet, n));
    }
    else{
        return 1;
    }

    return 0;
}
