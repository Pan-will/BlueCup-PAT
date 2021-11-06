#include<stdio.h>
int main(){
	int min,max,stro;
	scanf("%d%d%d",&min,&max,&stro);
	for(int i=min;i<=max;i++){
		if(i%stro==0){
			printf("%d ",i);
		}
	}
}
