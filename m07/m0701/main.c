#include <stdio.h>

int main()
{
 int i;
 printf("Decimal: %u Octal: %o Hex: %x\n", &i, &i, &i);
 return 0;
}

//Os valores escritos no out sÃ£o os valores onde o computador guarda o valor que atribuiu ao i,
// pois esse nao e constante visto que nao tem nenhum valor atribuido. Logo e escolhido um nummero
// aleatorio e por isso os valores diferentes de cada compilacao
