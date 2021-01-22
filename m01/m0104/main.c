#include <stdio.h>

int main()
{
	char ficheiro;
	int linhas=0;
	int pal=0;
	int car=0;
	int count=0;
	char anterior_f = 0;

while(ficheiro != EOF)
{
  ficheiro=getchar();
		
	if(ficheiro  == ' ' && count==0)
  {
	  if(anterior_f == 0)
    {
			car++;
			count++;
    }
     else 
    {
			pal++;
			car++;
			count++;
		}
	}
		else if(ficheiro == ' ' && count >= 1)
    {
			car++;
			count++;
		}
			
	 	else if(ficheiro == '\n' && count == 0)
    {
			if(anterior_f == 0)
      {
				linhas++;
				car++;
				count++;
      }
      else 
      {
				linhas++;
				car++;
				pal++;
				count++;
			}
		}
		else if(ficheiro == '\n' && count >= 1)
    {
			linhas++;
			car++;
			count++;
 		} 
    else if((ficheiro >= 'a' && ficheiro <= 'z') || (ficheiro >= 'A' && ficheiro <= 'Z') || (ficheiro >= '0' && ficheiro <= '9')) 
    {
		  car++;
			count = 0;
    } 
    else if(ficheiro == EOF && (anterior_f >= 'a' && anterior_f <= 'z') || (anterior_f >= 'A' && anterior_f <= 'Z') || (anterior_f >= '0' && anterior_f <= '9'))
    {
			pal++;
    }
		anterior_f = ficheiro;
}
	
	printf("\nlinhas=%d palavras=%d caracteres=%d\n", linhas, pal, car);
}
