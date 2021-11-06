#include<stdio.h> 
void show(int a, int num){
	for(int i=0;i<num;i++){
		printf("%d",a);
	}
}
int main(){
	int num[10];
	int flag=0;
	for(int i=0;i<10;i++){
		scanf("%d",&num[i]);
	}
	for(int i=1;i<10;i++){
		if(num[i] != 0){
			flag = i;
			break;
		}
	}
	printf("%d",flag);
	num[flag] = num[flag] - 1;
	for(int i=0;i<10;i++){
		show(i,num[i]);
	}
}
