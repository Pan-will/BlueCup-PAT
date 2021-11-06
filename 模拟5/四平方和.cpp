#include<stdio.h>
#include<math.h>
int main(){	
	int n;
	scanf("%d",&n);
	int max=sqrt(n)+1;
	int a,b,c,d;
	for(a=0;a<max;a++){
		for(b=0;b<max;b++){
			for(c=0;c<max;c++){
				for(d=0;d<max;d++){
					if(n == a*a + b*b + c*c + d*d){
						if(a<=b && b<=c && c<=d)
							printf("%d %d %d %d",a,b,c,d);
							return 0;//只输出第一个表示法 
					}
				}
			}
		}
	}
}
