#include<stdio.h>
#include<string.h>
int main(){
	char a[30];//定义一个长度稍微大于约定长度的字符数组
	scanf("%s",a);//将字符串整个录入
	int l=strlen(a);//统计字符串的长度 
	for(int i=0;i<l;i++){
		if(a[i]>='A' && a[i]<='Z')
			a[i]+=32;
		else
			a[i]-=32;
	}
	printf("%s",a);
}
