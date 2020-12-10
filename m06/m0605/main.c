#include <stdio.h>
#include <string.h>
#include <math.h>


//---------binario para decimal------------
long int bin_to_decimal(int vet[],int i)
{
long int decimal=0;
int i3=i,veti[33]={0};
    
	i++;
    
	for(int i2=0;i2<i;i2++)
	{        
        veti[i3]=vet[i2];
        i3--;
    }

    for(int i1=i;i1>-1;i1--)
	{
        if(veti[i1]==1)
		{
            decimal+=pow(2,i1);
        }
    }

return decimal;
}
//-------hexadecimal para decimal---------
long int hex_to_dec(char hex[]){
    
    long int decimal;
    int nome[33],i;

    for(i=2; hex[i]!='\0'; i++)
	{
        if((hex[i]>='0'&&hex[i]<='9')||(hex[i]>='a'&&hex[i]<='f')||(hex[i]>='A'&&hex[i]<='F'))
		{
            if(hex[i]>='0'&&hex[i]<='9')
			{
           		nome[i-2]=hex[i]-48;
        	}
			else nome[i-2]=hex[i]-87;
        }
		else
		{
            hex[i]='\0';
            
			hex[i+1]='\0';
            break;
        } 
    }
i-=2;
int vet[33]={0};
int nome1=0;

    for(int j=0;j<i;j++)
	{
        for(int j1=3;j1>-1;j1--)
		{
            nome1=((j*4)+(3-j1));
            
			if(nome[j]>=pow(2,j1))
			{
                vet[nome1]=1;
                nome[j]-=pow(2,j1);
            }
        }
    }

    decimal=bin_to_decimal(vet,nome1);
        
return decimal;
}

//---------- octal para decimal-------------
long int oct_to_dec(char oct[])
{    
long int decimal;
int sem_nome[33]={0}, vet[100]={0}, i;


    for(i=1;oct[i]!='\0';i++)
	{
        if(oct[i]>='0'&&oct[i]<='7')
		{
            sem_nome[i-1]=oct[i]-48;
        }
		else
		{
            oct[i]='\0';
       
	        oct[i+1]='\0';
            break;
        }
    }
i-=1;
int sem_nome1=0;

    for(int j=0;j<i;j++)
	{
        for(int j1=2;j1>-1;j1--)
		{
            sem_nome1=((j*3)+(2-j1));
            
			if(sem_nome[j]>=pow(2,j1))
			{
                vet[sem_nome1]=1;
                
				sem_nome[j]-=pow(2,j1);
            }
        }
    }

    decimal=bintodec(vet,sem_nome1);

return decimal;
}


//------------ decimal -----------
long int dec_to_dec(char dec[])
{
long int decinal=0;
int vet[33]={0}, bandeira=0, i;

    for(i=0;dec[i]!='\0';i++)
	{
        if((dec[i]>='0' && dec[i]<='9') || (dec[0]=='+' || dec[0]=='-'))
		{
            if(dec[0]=='+')
			{
                if(dec[i]>='0' && dec[i]<='9' || (dec[i]=='+'))
				{
                    if(dec[i]=='+')
					{
                    }
					else
                    	vet[i-1]=dec[i]-48;
                }
				else
				{
                    dec[i]='\0';
                
				    dec[i+1]='\0';
                    break;
                }
            }
			else 
				if(dec[0]=='-')
				{
                	bandeira=1;
                	
					if(dec[i]>='0' && dec[i]<='9'||dec[i]=='-')
					{
                    	if(dec[i]=='-')
						{
						}
						else 
                    	vet[i-1]=dec[i]-48;
                	}
					else
					{
                    dec[i]='\0';
                    
					dec[i+1]='\0';
                    break;
                }
            	}
				else 
					if(dec[i]>='0' && dec[i]<='9')
					{
                		vet[i]=dec[i]-48;
            		}
					else
					{
                		dec[i]='\0';
                		
						dec[i+1]='\0';
                		break;
            		}
        }
		else
		{
            dec[i]='\0';
         
		    dec[i+1]='\0';
            break;
        } 
    }
    if(dec[0]=='+'||dec[0]=='-')
	{
        i--;
    }

int cosnst=1;

for(int i1=i-1;i1>-1;i1--)
{
    decinal+=vet[i1]*cosnst;
    cosnst*=10;
}

    if(bandeira==1)
    	decinal = decinal-2*decinal;

    return decinal;
}




//--------- funcao myatoi------------
long int myatoi(char vet[])
{
int j=0;
int i=0;
long int nr;

	if(vet[0]>='0'&&vet[0]<='9'||((vet[0]=='-'||vet[0]=='+')&&(vet[1]>='1'&&vet[1]<='9')))
	{
		if(vet[0]=='0')
		{
            if(vet[1]=='x'||vet[1]=='X')
                
				if(vet[2]<='9'&&vet[2]>='1'||(vet[2]>='a'&&vet[2]<='f')||(vet[2]>='A'&&vet[2]<='F'))

				nr = hex_to_decimal(vet);
				else
				{
					printf("invalid number");
				}
            
				else 
					if(vet[1]>'0'&&vet[1]<='7')
					{
                		nr=oct_to_decimal(vet);
            		}
				else
				{
					printf("invalid number");
				} 
        }
		else nr=decimal_to_decimal(vet);
    }
	else
	{
		printf("invalid number ");
	} 

}

int main()
{
int i=0;
char vet[33],xar;
long int nr=0; // nr=numero
	
	while(xar != '\n')
	{
        xar=getchar();
        if(xar ==' ' || xar == '\t')
		{

		}

		else 
		{
            if(xar!='\n')
            vet[i]=xar;
            
			else vet[i]='\0';
            i++;

        }
    }
    printf("%ld", myatoi(vet));
return 0;

}
