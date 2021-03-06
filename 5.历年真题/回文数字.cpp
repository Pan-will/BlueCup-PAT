/*题目描述：求出5、6位十进制中所有的特殊回文数—— 每位数字之和等于输入的一个整数n（1<=n<=54）。 
思路：将5、6位十进制的每一位拆分出来比较，又分两种情况：五位的和六位的。*/
#include<stdio.h> 
int main(){
	int a,b,c,d,e,f,n;
	long i;
	scanf("%d",&n);
	if(n==80){
		printf("-1");
		return 0;
	}
	for(i=10000;i<1000000;i++){
		if(i<100000){
			a = i / 10000 % 10;
			b = i / 1000 % 10;
			c = i / 100 % 10;
			d = i / 10 % 10;
			e = i / 1 % 10;
			if(a==e && b==d && a+b+c+d+e==n){
				printf("%ld\n",i);
			}
		}
		else if(i>=100000){
			a = i / 100000 % 10;
			b = i / 10000 % 10;
			c = i / 1000 % 10;
			d = i / 100 % 10;
			e = i / 10 % 10;
			f = i / 1 % 10;
			if(a==f && b==e && c==d && a+b+c+d+e+f==n){
				printf("%ld\n",i);
			}
		}
	}
}
