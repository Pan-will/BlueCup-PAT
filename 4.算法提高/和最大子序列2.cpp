#include<stdio.h>
int main(){
	int n;
	int maxlen=0;
	int sum;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	/*��������е�i������j�����ĺ�(j>=i)�������бȽ�*/
	for(int i=0;i<n;i++){
		sum = 0;//ÿ��ѭ��������0 
		for(int j=i;j<n;j++){
			sum+=a[j];//��i������j�����ĺ�
			if(sum>maxlen){
				maxlen = sum;
			}
		}
	}
	printf("%d",maxlen);
	return 0;
}
