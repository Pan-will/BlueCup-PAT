#include<stdio.h>
int main(){
    int i,n;
    long f1,f2,f;
    scanf("%d",&n);
    f1=f2=1;
    if(n<=2){
    	f=1;
    }else
        for(i=3;i<=n;i++){
	        f=f1+f2;
	        f1=f2;
	        f2=f;
        }
//    int h = f%10007;
    printf("%d",f);
}
