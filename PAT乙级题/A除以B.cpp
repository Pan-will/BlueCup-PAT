#include<stdio.h>
#include<string.h>
int main(){
	char str[1000];
	int b;//除数
	int yushu=0;//余数,初值为0 
	scanf("%s %d",&str,&b);
	int len = strlen(str);
	
	if(len == 1 && str[0]-'0' < b){
		printf("0 %d",str[0]-'0');
	}else if(len == 1 && str[0]-'0' >= b){
		printf("%d %d",(str[0]-'0')/b,(str[0]-'0')%b);
	}else{
		for(int i=0;i<len;i++){
			yushu = yushu*10 + (str[i]-'0');
			if(yushu/b > 0){
				printf("%d",yushu/b);
				yushu = yushu%b;
			}
		}
		printf(" %d",yushu);
	}
	return 0;
}
