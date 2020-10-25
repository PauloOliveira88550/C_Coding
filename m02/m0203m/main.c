
#include <stdio.h>
//#include <bits/stdc++.h>
#include <stdlib.h>


int  Dec2Bin (int a) {

int fica=a;
int resto=0;
int bin;
int i;
int p[32];

		for(i=31;i>=0;i--){


			if(a % 2 == 0) { p[i] = 0;}
                        else {p[i] = 1;}
                          a /= 2;

                                  } 

int aux=0;

printf("%d -> ", fica); 

    for(int j=0; j<32; j++){

		if (aux % 4 == 0)
	{
 	   printf(" ");
			 }

		aux++;
		printf("%d", p[j]);

				}
int aux1=0;

	for(int k=0; k<32; k++){
		if (p[k] ==1) {++aux1;}
                               }
printf("  e tem %d bits ligados\n", aux1);



	printf("\n");
	return 0;

						}



int main() {

	 int num;

	//printf("?");
	//scanf("%d", &num);
	char a;

	while(a != EOF) {         // CTRL Z PARA PARA O LOOP !!!!!!!!!!!!!

 		printf("?");
		scanf("%d", &num);

		 Dec2Bin(num);
			};

	return 0;

}
