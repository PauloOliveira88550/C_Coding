
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

    for(int j=0; j<32; j++){

	if(p[j] == 1) {++aux;}; 
	
					}
printf(" %d -> tem %d bits ligados\n",fica, aux);

return 0;
}


int main() {

	 int num;

	printf("?");

	scanf("%d", &num);

	Dec2Bin(num);


	return 0;

}
