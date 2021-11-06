#include<stdio.h>
#include<algorithm>
using namespace std;
bool cmp(int a, int b){
    return a>b;
}
int main(){
	int N,m;//N表示序列长度 ,m示询问的个数 
	int l,r,K;//表示查询数列从第l个到第r个数之间 ，第K大的数是多少 
	scanf("%d",&N);
	int a[N],num[N];
	for(int i=0;i<N;i++){
		scanf("%d", &num[i]);
	}
	/*输入查询数列从第l个到第r个数之间 ，第K大的数*/
	scanf("%d%d%d", &l, &r, &K);
	for(int j = 0, i = l-1; i < r; i++){
        a[j++] = num[i];
    }
	sort(a, a+r-l+1, cmp);
	
	/*按条件输出答案*/ 
	printf("%d\n", a[K-1]);
}
