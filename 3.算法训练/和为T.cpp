#include<stdio.h>
int a[22],b[22];//a��¼����Ԫ�أ�b��¼��ͬ�ķ��� 
int n,T;//nΪԪ�ظ�����TΪҪ�ﵽ�ĺ� 
int ans=0;//��¼�������� 
void showb(int bindex){//�������벻ͬ�ķ��� 
	for(int i=bindex;i>=0;i--)
		printf("%d ",b[i]);
	printf("\n");
}
void heweit(int end,int bindex,int sum){
	if(end<0) return;//endָ���һ��Ԫ���±� 
	heweit(end-1,bindex,sum);
	b[bindex] = a[end];//��ÿ�ַ����ŵ�b��,������� 
	sum += a[end];
	if(sum==T){
		ans++;
		showb(bindex);
	}
	heweit(end-1,bindex+1,sum);//�ݹ����
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){//¼������Ԫ�� 
		scanf("%d",&a[i]);
	}
	scanf("%d",&T);//Ҫ�ﵽ�ĺ�T 
	heweit(n-1,0,0);//n-1:���һ��Ԫ�أ�0:��һ��Ԫ�� 
	printf("%d",ans);//��������� 
	return 0;
}
