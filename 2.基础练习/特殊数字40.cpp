#include<stdio.h> 
int main()
{
	int m,i,j,k,q;
	for(m=1000;m<10000;m++)
	{ 
		i = m / 1000 % 10;//分离出千位
		j = m / 100 % 10;//分离出百位
		k = m / 10 % 10;//分离出十位
		q = m / 1 % 10;//分离出个位
		
		if(i+j+k+q==10)
			printf("%d\n",m);
	}
}
