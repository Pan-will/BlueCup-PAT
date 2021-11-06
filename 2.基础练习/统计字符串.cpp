#include<stdio.h>
#include<string.h>
int main(){
	char c[100];
	int ZiMu=0,ShuZi=0,KongGe=0,Other=0;
	printf("请输入一串长度不超过200字符：");
	scanf("%s",&c);
	for(int i=0;i<strlen(c);i++){
		if(c[i]>='a'&&c[i]<='z' || c[i]>='A'&&c[i]<='Z'){
			ZiMu++;
		}else if(c[i] == ' '){
			KongGe++;
		}else if(c[i]>='0' && c[i]<='9'){
			ShuZi++;
		}else{
			Other++;
		}
	}
	printf("\n统计如下:\n字母:%d个;\n数字:%d个;\n空格:%d个;\n其他:%d个.",ZiMu,ShuZi,KongGe,Other); 
}
