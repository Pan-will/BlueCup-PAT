#include<stdio.h>
#include<string.h>
#include<math.h>
int a[6];
int b[6];
char str[6];
bool use[6];
int len;
//ð������ 
void paixu(int a[],int len) {
	for(int i=0;i<len-1;i++) {
		for(int j=0;j<len-1-i;j++){
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
void dfs(int begin,int len){
	if(begin == len){
		for(int i=0;i<len;i++){
			printf("%d",b[i]);
		}
		printf("\n");
	}
	for(int i=0;i<len;i++){
		if(i>0 && a[i]==a[i-1] && !use[i-1])
			continue;
		if(!use[i]){
			use[i] = true;
			b[begin] = a[i];
			dfs(begin+1,len);
			use[i] = false;
		}
	}
}
int main(){
	scanf("%s",&str);
	len = strlen(str);//��ȡ�ַ�������
	for(int i=0;i<len;i++){
		a[i] = str[i]-'0';
	}
	paixu(a,len);//��a��������
	
	dfs(0,len);//�ӵ�0���ַ���ʼ���� 
	return 0;
}
