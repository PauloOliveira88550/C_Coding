#include<stdio.h>

struct Processo
{
  int n_iteracoes;
  float kp, ki, kd;
  char nome[50];
  char ficheiro[150];
};

int main(int argc, char *argv[]){
    if (argv[1] == NULL){
        printf("error: missing file name!");
        return 1;
    }
    FILE *fpi;
    fpi = fopen(argv[1], "r");
    if (fpi != NULL){
        struct Processo new;
        fscanf(fpi, "%*[^=]=%[^\n]\n%*[^=]=%d\n%*[^=]=%f\n%*[^=]=%f\n%*[^=]=%f\n%*[^=]=%[^\n]\n", new.nome,&new.n_iteracoes, &new.kp, &new.ki, &new.kd, new.ficheiro);
        printf("Nome do Processo: %s\nN. de Iteracoes: %d\nKP: %.2f\nKI: %.2f\nKD: %.2f\nNome do Ficheiro: %s", new.nome, new.n_iteracoes, new.kp, new.ki, new.kd, new.ficheiro);
    }
    else{
        printf("error: file do not exist!");
        return 1;
    }
    return 0;
}
