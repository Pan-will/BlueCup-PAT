/*
��Ŀ���⣺�������С��е��Ӿ�������Ԫ�غ͡�

	�����С��б����������ģ����Կ��������ÿ 
һ��ǰn�еĺͣ�Ȼ����ö��һ���еĿ�ʼ�ͽ����� 
��������Ȼ����������ֶκ�������͡�
�����ǽ���ά��ת��Ϊһά�ġ�
*/
#include<stdio.h>  
#include<string.h>  
int a[500][500],dp[500],b[500];
int ans;
main(){
	int n,m;
	/*����n*m����*/
	scanf("%d%d",&n,&m); 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
			scanf("%d",&a[i][j]);
	}
	/*����������*/
	for(int fir=1;fir<=n;fir++){//����firΪ��ʼ�� 
		memset(b,0,sizeof(b));//������b����ֵΪ0 
		for(int i=fir;i<=n;i++){//i��ʾ�����У���fir�мӵ�i�С�   
			for(int j=1;j<=m;j++){
				b[j]+=a[i][j];
			}
			dp[1]=b[1];
			if(dp[1]>ans)//��֤ansΪ���ֵ 
				ans=dp[1];
			for(int j=2;j<=m;j++){//����ֶκ� 
				if(dp[j-1]<0)
					dp[j]=b[j];
				else
					dp[j]=dp[j-1]+b[j];
				if(dp[j]>ans)
					ans=dp[j];
			}
		}
	}
	printf("%d",ans);
}
