#include<stdio.h>
int main(){
	int a=3,b=4,c=5;
	for(;a<=500;a++){
		for(b=a;b<=500;b++){
			for(c=5;c<=500;c++){
				if(a+b+c>1000) break;//不符合题目要求，跳出 
				if(a+b<=c) break;//如果两边之和小于第三边，跳出 
				if(a*a+b*b==c*c){
					printf("%d %d %d\n",a,b,c);
				}
			}
		}
		
	}
}
