#include<stdio.h>
int JC(int n){
    if(n==1 || n==0)/*�ݹ����������*/
		return 1;
    else
    	n *= JC(n-1);/*�ݹ�������׳�*/ 
    n--;
}
int main(){
    int k,n,a,b;
    scanf("%d%d",&k,&n);
    if(k==n || k==0)
		printf("1");
    else{
        a=JC(n-1)/(JC(k)*JC(n-k-1));
        b=JC(n-1)/(JC(k-1)*JC(n-k));
    	printf("%d",a+b);
    }
    return 0;
}
