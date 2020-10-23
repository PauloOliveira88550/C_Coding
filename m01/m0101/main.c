#include <stdio.h>

int main()
{
  
for(int i=1; i<13;i++){
      
      printf("     %d",i);}
printf("\n");
printf("----------------------------------------------------------------------------\n");

for(int j=1;j<13;j++){
 
        printf("%2d",j); printf("|");
 
         for(int k=1;k<13;k++){
          
          int mul;
          mul = j*k;
        printf(" %5d",mul);
}
printf("|\n");
}
printf("----------------------------------------------------------------------------\n");
  
 
  return 0;
}
