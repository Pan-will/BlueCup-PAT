#include<stdio.h> 
#include<string.h>
#include<stdlib.h>
#include<math.h>
int fanzhi(int x){
	char c[50];
	itoa(x,c,10);//������xʮ���ƵĻ�����ת���ַ��� 
	int answer=0;
	int len = strlen(c);//��ȡ�ַ����ĳ��� 
	for(int i=len-1;i>=0;i--){
		if(c[i]!='0'){
			answer += (c[i]-'0')*(int)pow(10,i);
		}
	}
	return answer;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",fanzhi(fanzhi(a)+fanzhi(b)));
	return 0;
}
