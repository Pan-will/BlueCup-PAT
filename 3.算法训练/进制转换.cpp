#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	char a[32];
	int sum=0,k=1;
	gets(a);
	int len = strlen(a);
	for(int i=len-1;i>=0;i--){
		if(i==len-1)//��λ 
			k=1;
		else//����λ 
			k*=2;
		sum=sum+(a[i]-'0')*k;
	}
	printf("%d",sum);
}
