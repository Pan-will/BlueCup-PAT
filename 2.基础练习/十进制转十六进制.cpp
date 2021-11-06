#include<stdio.h>
char tohex(int n){
	if(n>=10 && n<=15){
		return 'A'+n-10;
	}
	return '0'+n;
}
int main(){
	int n,j,k,mod;
	int i=0;
	scanf("%d",&n);
	if(n != 0){
		char a[32];
		while(n){
			mod = n%16;//¶Ô16È¡Óà 
			a[i++]=tohex(mod);
			n=n/16;
		}
		for(j=0,k=i-1; j<i/2; j++,k--){
			char temp;
			temp = a[j];
			a[j] = a[k];
			a[k] = temp;
		}
		a[i]='\0';
		printf("%s",a);
		return 0;
	}else{
		printf("%d",n);
	}
	
}
