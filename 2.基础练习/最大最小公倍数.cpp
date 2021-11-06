/*
	当n是奇数时，n和n-2都是奇数，n-1是偶数,那么他们三个的公约数
肯定不是2,而因为这三个数是连续的，所以大于2的数都不可能成为
他们或其中任意两个数的公约数了——即当n为奇数，结果就是n*(n-1)*(n-2).
	而当n为偶数时，因为n和n-2都是偶数，那么只能将n-2改成n-3，
即n*(n-1)*(n-3),如果这三个数两两互质那么肯定就是结果了,若不行则将n-3改
为n-4，如此检测下去知道满足两两互质.
*/
#include<stdio.h>
int main(){
	long long N;
	long long answer;
	scanf("%lld",&N);
	if(N<=2)
		answer = N;
	else if(N==3)
		answer = 6;
	else if(N%2==1)//若N为奇数 
		answer = N*(N-1)*(N-2);
	else{//若N为偶数 
		if(N%3)
			answer = N*(N-1)*(N-3);
		else 
			answer = (N-3)*(N-1)*(N-2);
	}
	printf("%lld",answer);
}
