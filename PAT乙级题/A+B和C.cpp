#include<stdio.h>
#include<string.h>
int main(){
	long a,b,c;
	int t;
	scanf("%d",&t);
	char str[t][10];
	for(int i=0;i<t;i++){
		scanf("%ld %ld %ld",&a,&b,&c);
		if(a+b>c) 
			strcpy(str[i],"true");
		else 
			strcpy(str[i],"false");
	}
	for(int i=0;i<t;i++){
		printf("Case #%d: %s\n",i+1,str[i]);
	}
}
