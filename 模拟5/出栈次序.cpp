/*35357670*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int sum=0;
	int f[17];
	memset(f,0,sizeof(f));//×¢ÒâÒª¸³³õÖµ 
	f[0]=1;
	f[1]=1;
	f[2]=2;
	f[3]=5;
	for(int i=4;i<=16;i++){
		for(int j=0;j<=i-1;j++){
			f[i]+=f[j]*f[i-1-j];
		}
	}
	printf("%d",f[16]);
	return 0;
}
