#include<stdio.h>
#include<string.h>
void DelPack(char a[],int N){
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++)
			if(a[i]==a[j]){
				a[i]=a[i+1];
				a[j]=a[j+1];
			}
	}
	for(int i=0;i<N;i++){
		printf("%s",a[i]);
	}
}
int main(){
	char a[110];//���峤��ΪN��һά���� 
	for(int i=0;i<5;i++){
		scanf("%s",&a);
	} 
	int len = strlen(a);
	printf("\n%d\n\n",len);
	DelPack(a,len);
	return 0;
}
