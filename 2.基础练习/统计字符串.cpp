#include<stdio.h>
#include<string.h>
int main(){
	char c[100];
	int ZiMu=0,ShuZi=0,KongGe=0,Other=0;
	printf("������һ�����Ȳ�����200�ַ���");
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
	printf("\nͳ������:\n��ĸ:%d��;\n����:%d��;\n�ո�:%d��;\n����:%d��.",ZiMu,ShuZi,KongGe,Other); 
}
