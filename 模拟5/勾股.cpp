#include<stdio.h>
int main(){
	int a,b,c;
	int ans=0; 
	scanf("%d",&c);
	for(a=3;a<=10000;a++){
		for(b=4;b<=10000;b++){
			if(a+b<=c) continue;//�������֮��С�ڵ����ߣ����� 
			if(b<=a) continue;
			if(a*a+b*b==c*c){
				ans++;
				printf("%d %d %d\n",a,b,c);
			}
		}
	}
	printf("%d",ans);
}
