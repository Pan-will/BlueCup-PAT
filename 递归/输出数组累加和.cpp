/*�ݹ�ѧϰ2:��ӡ����Ԫ���ۼӺ�.
	����ʹ�õݹ�Ĺؼ��ڣ�
	�����ڵݹ���ʵ�ֱ����ı仯��

����һ����Ƥ�� 
*/
#include<stdio.h> 
#include<string.h>

int main(){
	int N,sum=0;
	scanf("%d",&N);
	int a[N];
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
		sum += a[i];
	}
	printf("%d",sum) ;
}
