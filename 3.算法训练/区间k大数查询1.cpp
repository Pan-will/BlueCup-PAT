#include<stdio.h>
#include<algorithm>
using namespace std;
bool cmp(int a, int b){
    return a>b;
}
int main(){
	int N,m;//N��ʾ���г��� ,mʾѯ�ʵĸ��� 
	int l,r,K;//��ʾ��ѯ���дӵ�l������r����֮�� ����K������Ƕ��� 
	scanf("%d",&N);
	int a[N],num[N];
	for(int i=0;i<N;i++){
		scanf("%d", &num[i]);
	}
	/*�����ѯ���дӵ�l������r����֮�� ����K�����*/
	scanf("%d%d%d", &l, &r, &K);
	for(int j = 0, i = l-1; i < r; i++){
        a[j++] = num[i];
    }
	sort(a, a+r-l+1, cmp);
	
	/*�����������*/ 
	printf("%d\n", a[K-1]);
}
