#include<stdio.h>
int paidui(int m,int n);
int main()
{
	int m,n,k;
	scanf("%d%d",&m,&n);
	k=paidui(m,n);
	printf("%d",k);
	return 0;
}
int paidui(int m,int n)//递归 
{
	if(m<n) return 0;//出口1：借者多于还者，0种方案 
	if(n==0) return 1;//出口2：借者为0人，1种方案 
	return paidui(m-1,n)+paidui(m,n-1);
	/*从m+n个人中出1个人站到队列中，
	用递归法求剩余m+n-1个人有多少种排法。 
	若站到队列中的是还者，则剩余人数有f(m-1,n)种排法。 
	若站到队列中的是借者，则剩余人数有f(m,n-1)种排法。
	所以m+n个人的排法是上述两个排法之和。
	递归思路可借鉴“上楼梯”一题 。
	蓝桥杯中类似题目有“坐公交排队”*/ 
}
