#include <stdio.h>

int main()
{
  int i,j;

  for(int i=-1 ; i<14; i++){
    
    for(int j=-1; j<14; j++)
	{    
    	if(i==0 || i==13)
    		printf("---");

    	else if((j==0 || j==13) && i>0)
        	printf(" |");

    	else if(i==-1 && j==-1)
        	printf("    ");

    	else if(i==-1 && j<13 && j>0)
        	printf("%4d",j);

    	else if(j==-1)
        	printf("%2d",i);

    	else if(i>0)
			printf("%4d",i*j);
      
      	if(i==0 &&j==1)
        printf("---------");
      
      	if(i==13 &&j==1)
        printf("---------");
    
    }
    printf("\n");
  }
  return 0;
}
