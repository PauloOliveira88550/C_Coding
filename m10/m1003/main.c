#include<stdio.h>
#include<stdlib.h>

int ** aloca_matriz(int n){
    int* *matriz = (int* *)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
        matriz[i] = (int *)malloc(n * sizeof(int));

    return matriz;
}

int main(int argc, char *argv[]){
    if (argv[1] == NULL){
        printf("error: file name arg missing!\n");
        return 1;
    }
    FILE *fpi;
    fpi = fopen(argv[1], "r");

    if (fpi != NULL){
        int n, i = 0, j = 0;
        fscanf(fpi ,"%d\n", &n);
        //printf("%d\n", n);
        int **matriz = aloca_matriz(n);
        while(!feof(fpi)){
            j = 0;
            while( j < n){
                fscanf(fpi, "%d ", &matriz[i][j]);
                j++;
            }
        i++;
        }
        for (int i = 0; i < n; i++){
            int c = 0;
            for (int j = 0; j < n; j++){
                if (matriz[i][j] == 1 && c == 0){
                    printf("{%d,%d}",i, j);
                    c++;
                }
                else if (matriz[i][j] == 1){
                    printf(", {%d,%d}",i, j);
                    c++;
                }
            }
            if(c == 0)
                printf("--");
            printf("\n");
        }
    }
    else{
        printf("error: file not found!\n");
        return 1;
    }

    return 0;
}
