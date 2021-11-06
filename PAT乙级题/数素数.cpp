#include<stdio.h> 
#include<math.h>
int is_prime(long num){  
    long k, i;  
    k = sqrt(num);
    for (i = 2; i <= k; i++){  
        if (num%i == 0)
            return 0;
    }  
    return 1;
}
main(){
	long prime[99999];
	int item=0;
	for(long i=1;i<99999;i++){
		if(is_prime(i)) prime[item++] = i;
		else continue;
	}
	long m,n;
	scanf("%ld%ld",&m,&n);
	int h=0;
	for(int i=m;i<=n;i++){
		printf("%ld ",prime[i]);
		h++;
		if(h%10 == 0)
			printf("\n");
	}
}

