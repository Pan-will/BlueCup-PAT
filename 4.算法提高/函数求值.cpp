#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	long long n;
	scanf("%lld",&n);
	char ch[999999];
	long long sum=0;//�� 
	for(long long i=1;i<=n;i++){
		itoa(i,ch,10);
		int len = strlen(ch);//��¼�ַ���a[i]�ĳ���
		for(int j=0;j<len;j++){
			if(ch[j]=='1' || ch[j]=='2')
				sum++;
		}
	}
	printf("%lld",sum%20123);
}
