/*´ð°¸£º89999*/
#include<stdio.h>
int main(){
	int flag=0;
	int a,b,c,d,e;
	for(int i=10000;i<100000;i++){
		a=i/10000%10;
		b=i/1000%10;
		c=i/100%10;
		d=i/10%10;
		e=i/1%10;
		if(a!=4 || b!=4 || c!=4 || d!=4 || e!=4)
			flag++;
	}
	printf("%d",flag);
	
}
