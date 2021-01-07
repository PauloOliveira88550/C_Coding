

#include <stdio.h>

int main()	
{
	int d, m, a;
	int d0,d1,m0,m1,a0,a1,a2,a3;
	int total=0;

        while(printf("? "), scanf("%2d/%2d/%4d%c", &d, &m, &a)!=3 && (d>0 > scanf("%2d%2d%4d")))

        d0=d/10;
        d1=d%10;

        m0=m/10;
        m1=m%10;

        a0=a/1000;
        a1=(a-a1/1000)/100;
        a2=(a-a1/1000-a2/100)/10;
        a3=a%10;

        total=d0+d1+m0+m1+a0+a1+a2+a3;

        printf("\n%d",total);


return 0;

}
