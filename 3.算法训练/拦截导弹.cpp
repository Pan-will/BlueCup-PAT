#include<stdio.h>
int main(){
	int a[500];
	int i=0;
	int num;
	char ch; 
	while(1){
		scanf("%d",&num);
		ch=getchar();
		a[i++]=num;
		if(ch=='\n') break;
	}
	for(int j=0;j<i;j++){
		printf("%d ",a[j]);
	}
	return 0;
}
