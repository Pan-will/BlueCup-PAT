#include<stdio.h>
#include<math.h>
int main(){
	int i,t,sum=0;
	for(i=10;i<354294;i++){
		t=i;
		while(t!=0){
			sum+=pow(t%10,5);
			t=t/10;
			if(sum>i)
				break;
		}
		if(sum==i){
			printf("%d\n",sum);
		}
		sum=0;
	}
}
