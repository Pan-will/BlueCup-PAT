#include<stdio.h>
#include<math.h>
/*素数返回1，否则返回0*/ 
int SuShu(int n){
	int i;  
    for(i=2;i<=sqrt(n+1);i++)
        if(n%i==0) 
        	return 0;
    return 1;
}

int main(){
	int n;
	scanf("%d",&n);
	int i,Ji=1,flag=0;
	for(i=2;flag<n;i++){
		int k = SuShu(i);
		if(k==1){
			Ji=(Ji*i)%50000;
			flag++;//这里要注意自增 
		}
	}
	printf("%d",Ji);
	return 0;
}
