#include<stdio.h> 
int main()
{
	int m,i,j,k,q;
	for(m=1000;m<10000;m++)
	{ 
		i = m / 1000 % 10;//�����ǧλ
		j = m / 100 % 10;//�������λ
		k = m / 10 % 10;//�����ʮλ
		q = m / 1 % 10;//�������λ
		
		if(i+j+k+q==10)
			printf("%d\n",m);
	}
}
