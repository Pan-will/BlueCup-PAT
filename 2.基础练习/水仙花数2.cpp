#include<stdio.h> 
int main()
{
	int m,n,i,j,k;
	scanf("%d",&m);
	i = m / 100 % 10;//分离出百位
	j = m / 10 % 10;//分离出十位
	k = m / 1 % 10;//分离出个位
	
	if(100*i+10*j+k == i*i*i+j*j*j+k*k*k)
		printf("YES");
	else 
		printf("NO");
}
