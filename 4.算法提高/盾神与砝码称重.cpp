#include<stdio.h>
#include<string.h>
int flag[1001]; //���λ
void dfs(int m,int sum,int good[]){
	
    for(int i=0;i<m;i++){//m����Ʒ 
        if(sum>=good[i])
            printf("YES\n");
        else
			printf("NO\n");
    }
}
int main(){
	memset(flag,0,sizeof(flag));//��������鸳��ֵ 
	int n,m;
	int sum=0;//������sum
	scanf("%d%d",&n,&m);
	int weight[n],good[m];//�����������飬�������� 
	for(int i=0;i<n;i++){
		scanf("%d",&weight[i]);
		sum+=weight[i];//�������������
	}
	for(int i=0;i<m;i++){
		scanf("%d",&good[i]);//ÿ����Ʒ������
	}
    dfs(m,sum,good);
    return 0;
}


