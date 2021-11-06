#include<stdio.h> 
int main(){
	int m,n;
	int a[2]={0},b[2]={0};//分别用来存放m、n的十位和个位 
	scanf("%d%d",&m,&n);
	a[0] = m%10;//m的个位 
	a[1] = m/10;//m的十位
	b[0] = n%10;//n的个位
	b[1] = n/10;//n的十位
	printf("%4d\n",m);
	printf("X%3d\n",n);
	printf("━━━\n");
	if(a[1]==0 && b[1]==0){//一位数乘一位数
		printf("%4d",m*b[0]);
	}
	if(a[1]>0 && b[1]==0){//两位数乘一位数 
		printf("%4d",m*b[0]);
	}
	if(a[1]==0 && b[1]>0){//一位数乘两位数
		for(int i=0;i<2;i++){
			if(m*b[i]==0)
				printf("  00\n");
			else if(i==0 && m*b[i]!=0 && m*b[i]/10 != 0)
				printf("%4d\n",m*b[i]);
			else if(i==1 && m*b[i]!=0 && m*b[i]/10 != 0)
				printf("%3d\n",m*b[i]);				
			else
				printf("%3d\n",m*b[i]);
		}
		printf("━━━\n");
		printf("%4d",m*n);
	}
	if(a[1]>0 && b[1]>0){//两位数乘两位数
		for(int i=0;i<2;i++){
			if(m*b[i]==0)
				printf("  00\n");
			else if(i==0 && m*b[i]!=0 && m*b[i]/10 != 0)
				printf("%4d\n",m*b[i]);
			else if(i==1 && m*b[i]!=0 && m*b[i]/10 != 0)
				printf("%3d\n",m*b[i]);
			else
				printf("%3d\n",m*b[i]);
		}
		printf("━━━\n");
		printf("%4d",m*n);
	}
}
