#include<stdio.h>
int main(){
    int n,t,flag,j,x=0;
	int all=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int t=0;t<n-1;t++){//����ѭ������
        for(int i=1;i<n;i++){//�������С�������� �����뷨�� 
            flag=a[i];
            for(j=i;flag<a[j-1];j--){
                a[j]=a[j-1];
            }
            a[j]=flag;
        }
        all+=a[x]+a[x+1];//sΪ��С��λ֮�� 
        a[x+1]+=a[x];//�ڶ�С��λ���ϴ����С����֮�� 
        a[x]=0;// ��Сһλ���� 
        x++;
    }
    printf("%d",all);
    return 0;
}
