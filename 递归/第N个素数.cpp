/*求找出第N个素数*/
/*筛法：
	第一次将的2的所有倍数都筛选掉
	第二次将3······
	第三次将4······
*/
#include<stdio.h>
int main(){
	int N = 1000 * 1000 * 10;
	int x = 100001;
	
	long a[N];
	for(int i=2;i<N/2;i++){
		if(a[i] == 1)
			continue;
		for(int k=2;k<=N/i;k++){
			if(i*k<N)
				a[i*k]=1;
		}
	}
	
	int m=0;
	for(int i=2;i<N;i++){
		if(a[i] == 0){
			m++;
			if(m==x)
				printf("%d\n",i);
		}
	}
}
