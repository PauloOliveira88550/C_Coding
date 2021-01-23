#include<stdio.h>

#define TRUE 1
#define FALSE 0

struct data
{
    int dia, mes, ano;
};

int ler_data(struct data *dt)
{
    char c1, c2;
    scanf("%d%c%d%c%d", &dt->dia, &c1, &dt->mes, &c2, &dt->ano);
    
    if(c1 == '/' && c2 == '/')
        return 1;
    else
        return 0; 
}

int validar_data(struct data *dt)
{
    static const int daysPerMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	if(dt->dia > 0 && dt->dia <= daysPerMonth[dt->mes])
		return 1;
	
	if (dt->mes == 2 && dt->dia == 29 && (dt->ano % 400 == 0 || (dt->ano % 4 == 0 && dt->ano % 100 != 0 )))
		return 1;
	
	return 0;
}

void imprimir_data(struct data *dt)
{
    printf("%d/%d/%d\n", dt->dia, dt->mes, dt->ano);
}

int main(int argc, char *argv[])
{
    struct data dt;
    printf("? ");

    if (ler_data(&dt) == TRUE)
    {
        if (validar_data(&dt) == TRUE)
            imprimir_data(&dt);
        else
            printf("error: invalid date!\n");
    }
    else
        printf("error: invalid input!\n");
    
    return 0;
}
