#include<stdio.h>
int main(){
	int a=3,b=4,c=5;
	for(;a<=500;a++){
		for(b=a;b<=500;b++){
			for(c=5;c<=500;c++){
				if(a+b+c>1000) break;//��������ĿҪ������ 
				if(a+b<=c) break;//�������֮��С�ڵ����ߣ����� 
				if(a*a+b*b==c*c){
					printf("%d %d %d\n",a,b,c);
				}
			}
		}
		
	}
}
