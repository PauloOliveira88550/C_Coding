#include <stdio.h>


int a[6] = { 6,5,4,3,2,1 };

int main()
{
// int i;
 int i, *p = a;

 for(i = 0; i < 6; i++)
   // printf("%d ", a[i]);
   // printf("%d ", *(a+i));
      printf("%d ", *p++);
 printf("\n");
 return 0;
}

//a)
	// 6 5 4 3 2 1


//b)
	// Nao acontece nada o resoltado obtido e exatemente igual ao obtido anteriormente


//c)
	//Porque estamos a percorrer o vetor a na mesma mas com uma escrita diferente
	//Na inicializacao nos apotamos a(vetor) para o endereÃ§o de p e depois no printf estamos a incrementra esse indereco
	//Como os varios numeros do array tem diferentes enderecos ao incrmentar esses enderecos vamos consguir persorrer o vator.
