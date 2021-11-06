/*
    设苹果总数为x, 往总数里加(n-1)*m个苹果使y = x + (n-1)*m;
第一只猴子吃m个苹果再藏(x-m)*(1/n)个，即第一只猴子共拿了y*(1/n)个苹果，苹果剩(n-1)/n * y,
......可以依此类推，最后苹果剩n*一个整数再加m个。
第二天猴子们把苹果分成n份时，一份至少1个
 公式： x = k(n ^ n+1) - ((n - 1) * m) 
*/
#include<stdio.h>
int main(){
	int n,m;//n只猴子，每次剩下m个苹果 
	int k=1;
	int Cang=1;//藏起来的苹果数 
	int f=1;
	int all;//苹果总数 
	scanf("%d%d",&n,&m);
	int flag=n+1;
	while(flag-- > 0) {
		f*=n;
		Cang*=(n-1);
	}
	Cang/=(n-1);
	while(Cang<m+1){
		k++;
		f*=k;
		Cang*=k;
	}
	all=f-((n-1)*m);
	printf("%d",all);
}
