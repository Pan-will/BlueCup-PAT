#include<stdio.h>
int main(){
	int N,m;//N��ʾ���г��� ,mʾѯ�ʵĸ��� 
	int l,r,K;//��ʾ��ѯ���дӵ�l������r����֮�� ����K������Ƕ��� 
	scanf("%d",&N);
	int a[N],b[N],flag[N];/*����b�������a�дӵ�l������r����������ѯ����*/
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
		/*��¼ԭ��*/
		flag[i] = a[i];
	}
	scanf("%d",&m);//¼��ѯ�ʸ��� 
	int result[m];//result����������Ų�ѯ���:Ӧ����m��Ԫ�� 
	for(int s=0;s<m;s++){
		/*�����ѯ���дӵ�l������r����֮�� ����K�����*/
		scanf("%d%d%d", &l, &r, &K);
		/*��a�����дӵ�l������r������������b*/ 
		for(int j = 0, i = l-1; i < r; i++){
	        b[j++] = a[i];
	    }
	    /*��b����ð�ݽ���*/ 
	    for(int p=0; p<r-l+1-1; p++){
			for(int q=0; q<r-l+1-1-p; q++){
				if(b[q]<b[q+1]){
					int t = b[q];
					b[q] = b[q+1];
					b[q+1] = t;
				}
			}
		}
		/*���������𰸴�������*/
		result[s] = b[K-1];
		/*a���鷵��ԭ��*/
		for(int i=0;i<N;i++){
			a[i] = flag[i];
		}
	}
	/*���������*/ 
	for(int j=0;j<m;j++){
		printf("%d\n",result[j]);
	}
}
