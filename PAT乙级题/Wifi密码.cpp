#include<stdio.h>
/*
8 
A-T B-F C-F D-F
C-T B-F A-F D-F
A-F D-F C-F B-T
B-T A-F C-F D-F 
B-F D-T A-F C-F
A-T C-F B-F D-F
D-T B-F C-F A-F
C-T A-F B-F D-F
*/ 
int main(){
	int n;
	int item=0;//作为下标
	scanf("%d",&n) ;
	int num[n];
	char xuanXiang[4];
	char duiCuo[4];
	for(int j=0;j<n;j++){
		for(int i=0;i<8;++i){
			scanf("%c-%c",&xuanXiang[i],&duiCuo[i]);
			if(duiCuo[i] == 'T'){
				char ch = xuanXiang[i];
				switch(ch){
					case 'A':
						num[item++] = 1;
						break;
					case 'B':
						num[item++] = 2;
						break;
					case 'C':
						num[item++] = 3;
						break;
					case 'D':
						num[item++] = 4;
						break;
				}
			}
		}
	}
	for(int i=0;i<item;i++){
		printf("%d",num[i]);
	}
	return 0;
}
