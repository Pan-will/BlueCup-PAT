#include<stdio.h>
int zuhe(int n,int k){
	if(k==0||k==n) //����
		return 1;
	else 
		return zuhe(n-1,k)+zuhe(n-1,k-1);//�׳� 
}
int main(){
	int n,k,c;
	scanf("%d%d",&k,&n);
	c=zuhe(n,k);
	printf("%d",c);
}


