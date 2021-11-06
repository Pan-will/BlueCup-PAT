#include<stdio.h> 
#include<math.h>
int main()
{
	int m,i,j,k;
	printf("\n");
	for(m=100;m<1000;m++)
	{ 
		i = m / 100 % 10;//分离出百位
		j = m / 10 % 10;//分离出十位
		k = m / 1 % 10;//分离出个位
		
		if(100*i+10*j+k == i*i*i+j*j*j+k*k*k)
			printf("%d ",m);
	}
	printf("\n");
	int a,b,c;
	  for(a=1;a<=9;a++)
	  for(b=0;b<=9;b++)
	  for(c=0;c<=9;c++)
	  if(100*a+10*b+c==a*a*a+b*b*b+c*c*c)
	  printf("\n%d%d%d\t",a,b,c);
}
