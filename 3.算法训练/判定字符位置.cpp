#include<stdio.h>
#include<string.h>
main(){
	char a[10000];
	gets(a);
	int len = strlen(a);
	int flag=1;//�趨�Ƿ���Ԫ����ĸ�ļǺ� 
	for(int i=0;i<len;i++){
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
			printf("%d",i+1);
			flag=0;//������Ǻű仯 
			break;
		}
	}
	if(flag) printf("0");//�Ǻ�û�б仯��û��Ԫ����ĸ 
}
