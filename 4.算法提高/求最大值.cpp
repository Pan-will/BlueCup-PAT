#include<stdio.h>
#include<string.h>
int MaoPaoUp(int data[]){
	int len = sizeof(data);
	for(int i=0;i<len-1;i++){
    	for(int j=0;j<len-1-i;j++){
    		if(data[j]>data[j+1]){
    			int temp = data[j];
    			data[j] = data[j+1];
    			data[j+1] = temp;
			}
		}
	}
	printf("%d",data[len-1]);
}
int main(){
	int n;
	int a[110],b[110],c[110];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d\n",&a[i],&b[i]);
		c[i] = a[i] + b[i];
	}
	for(int i=0;i<n;i++){
		printf("%d ",c[i]);
	}
	printf("\n\n");
	MaoPaoUp(c);
}
