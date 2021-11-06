/*录入一组分数（分子分母都是正整数），求这组分数数组的前n项和*/
#include<stdio.h>
int getGCM(int a,int b){//求最大公约数 
	while(a!=b){
		if(a>b) a=a-b;
		else b=b-a;
	}
	return a;
}
int getLCM(int a,int b){//求最小公倍数 
	return a*b/getGCM(a,b);
}
main(){
	int n,i,a,b,lcm;
	float sum=0;
	scanf("%d",&n);
	int fenzi[n],fenmu[n];
	for(i=0;i<n;++i){//录入一组分数 
		scanf("%d/%d",&fenzi[i],&fenmu[i]);
	}
	lcm=fenmu[0];
	for(i=0;i<n-1;++i){
		a=lcm;
		b=fenmu[i+1];
		lcm = getLCM(a,b);//分母数组的最小公倍数为b 
	}
	for(i=0;i<n;++i){
		fenzi[i] = lcm/fenmu[i]*fenzi[i];
		sum+=fenzi[i];
	}
	printf("%.2f/%d",sum,lcm);
}
