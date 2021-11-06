#include<stdio.h>
int main(){
	int a[3][4];
	int b[3][4];
	int p,q,max=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]>=0){
				b[i][j] = a[i][j];
				if(b[i][j]>max){
					max = b[i][j];
					p=i;
					q=j;
				}
			}else{
				b[i][j] = 0-a[i][j];
				if(b[i][j]>max){
					max = b[i][j];
					p=i;
					q=j;
				}
			} 
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			if(b[i][j]==0){
				printf("0 1 1");
				return 0;
			}
		}
	}
	printf("%d %d %d",max,p+1,q+1);
}
