#include<stdio.h>

struct triangulo{
    double base, altura;
    double area;
};

struct circulo{
    double raio;
    double area; 
};

struct quadrado{
    double lado;
    double area;
};

struct retangulo{
    double comprimento, largura;
    double area;
};

int main(){
    struct triangulo triangulo[10];
    struct circulo circulo[10];
    struct quadrado quadrado[10];
    struct retangulo retangulo[10];
    int t = 0, c = 0, q = 0, r = 0;
    FILE *fpi;
    fpi = fopen("figuras.txt", "r");
    if (fpi != NULL){
        double soma;
        while(!feof(fpi)){
            char c;
            fscanf(fpi, "%c", &c);
            switch(c){
                case 't':
                    fscanf(fpi, ": %lf %lf\n", &triangulo[t].base, &triangulo[t].altura);
                    triangulo[t].area = (triangulo[t].base * triangulo[t].altura)/2;
                    soma += triangulo[t].area;
                    t++;
                    break;
                case 'c':
                    fscanf(fpi, ": %lf\n", &circulo[c].raio);
                    circulo[c].area = 3.1416 * circulo[c].raio * circulo[c].raio;
                    soma += circulo[c].area;
                    c++;
                    break;
                case 'q':
                    fscanf(fpi, ": %lf\n", &quadrado[q].lado);
                    quadrado[q].area = quadrado[q].lado * quadrado[q].lado;
                    soma += quadrado[q].area;
                    q++;
                    break;
                case 'r':
                    fscanf(fpi, ": %lf %lf\n", &retangulo[r].comprimento, &retangulo[r].largura);
                    retangulo[r].area = retangulo[r].comprimento * retangulo[r].largura;
                    soma += retangulo[r].area;
                    r++;
                    break;
            }
        }
        printf("area total = %lf\n", soma);
    }
    else{
        printf("erro: file don't exist");
        return 1;
    }
    return 0;
}
