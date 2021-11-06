/*
	海盗拼酒,求每轮过后还剩几人，打印出来。
	浮点数不能精确比较。有陷阱需要注意。 
*/
#include<stdio.h> 
int main(){
	int a,b,c,d; 
	for(a=20;a>=1;a--){
		for(b=a-1;b>=1;b--)
			for(c=b-1;c>=1;c--)
				for(d=c-1;d>=1;d--){
					/*这样暴力破解，有事没错，但是不定就踩到了浮点数的陷阱*/
					/*if(1.0/a + 1.0/b + 1.0/c + 1.0/d == 1.0)*/
					/*避开了浮点数运算*/
					if(b*c*d + a*c*d + a*b*d + a*b*c == a*b*c*d)
					printf("%d,%d,%d,%d\n",a,b,c,d);
				}
	}
}
