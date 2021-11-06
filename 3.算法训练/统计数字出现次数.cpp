#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int sum=0;
	scanf("%s",&a);
	int len = strlen(a);
	for(int i=0;i<len;i++){
		if(a[i]>='0' && a[i]<='9'){
			sum=sum+1;
		}
	}
	printf("%d",sum);
	return 0;
}
