#include<stdio.h>
int main(){
    int i,n;
    long f1,f2,f;
    scanf("%d",&n);
    f1=f2=1;
    int a[n];
    if(n<=2){
    	f=1;
    	printf("%d",f%10007);
    }else{
    	for(i=3;i<=n;i++){
	        f=(f1+f2)%10007;//计算余数 ，作为中间变量 
	        f1=f2;
	        f2=f;
	        a[i-3] = f;
        }
    	printf("%ld",a[n-3]);
	}
}
