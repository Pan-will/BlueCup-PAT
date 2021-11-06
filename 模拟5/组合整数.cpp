/*
思路：
	6个数中最高位最大的放在组合数的高位;
 	6个数中有最高位相同的，比较下一位，大的优先填入组合数。 
*/
#include <stdio.h>
long long max(long long x, long long y) {
	return x > y ? x : y;
}
long long test(int a[], int n) {
	long long ret = 0;
	for (int i = 0; i < n; ++i) {
		int tp = a[i];
		int j = 1;
		while(tp) {
			j *= 10;
			tp /= 10;
		}
		ret = ret * j + a[i];
	}
	return ret;
}

long long f(int a[], int k) {
	if (k == 6) {
		return test(a, k);
	}
	long long ret = 0;
	for(int i = k; i < 6; ++i) {
		int t = a[k];
		a[k] = a[i];
		a[i] = t;
		ret = max(ret,  f(a,k+1));
		t = a[k];
		a[k] = a[i];
		a[i] = t;
	}
	return ret;
}

int main() {
	int a[6] = {517, 283, 429, 65, 6566, 32};
	printf("%lld\n", f(a, 0));
	return 0;
}

