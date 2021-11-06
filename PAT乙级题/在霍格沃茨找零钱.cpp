#include<stdio.h>
#include<math.h>
int qiu_sum(int g,int s,int k){
	return g*493 + s*29 + k;
}
int main(){
	int g1,s1,k1,g2,s2,k2;
	scanf("%d.%d.%d %d.%d.%d",&g1,&s1,&k1,&g2,&s2,&k2);
	int sum = qiu_sum(g2,s2,k2) - qiu_sum(g1,s1,k1);
	int g=0,s=0,k=0;
	if(sum>0){
		g = sum / 493;
		s = (sum - g*493)/29;
		k = sum - g*493 - s*29;
		printf("%d.%d.%d",g,s,k);
	}else if(sum<0){
		g = -sum / 493;
		s = (-sum - g*493)/29;
		k = (-sum - g*493 - s*29);
		printf("-%d.%d.%d",g,s,k);
	}else if(sum==0){
		printf("0.0.0");
	}
	return 0;
}
