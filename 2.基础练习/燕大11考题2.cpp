/*¼��һ����������ӷ�ĸ����������������������������ǰn���*/
#include<stdio.h>
int getGCM(int a,int b){//�����Լ�� 
	while(a!=b){
		if(a>b) a=a-b;
		else b=b-a;
	}
	return a;
}
int getLCM(int a,int b){//����С������ 
	return a*b/getGCM(a,b);
}
main(){
	int n,i,a,b,lcm;
	float sum=0;
	scanf("%d",&n);
	int fenzi[n],fenmu[n];
	for(i=0;i<n;++i){//¼��һ����� 
		scanf("%d/%d",&fenzi[i],&fenmu[i]);
	}
	lcm=fenmu[0];
	for(i=0;i<n-1;++i){
		a=lcm;
		b=fenmu[i+1];
		lcm = getLCM(a,b);//��ĸ�������С������Ϊb 
	}
	for(i=0;i<n;++i){
		fenzi[i] = lcm/fenmu[i]*fenzi[i];
		sum+=fenzi[i];
	}
	printf("%.2f/%d",sum,lcm);
}
