/*
	���ݹ�ģ��Լ��:1<=n<=10, 2<=c<=n, 1<=m<=10
*/ 
#include<stdio.h>
#include<string.h>
int n,m;//n���˶�Ա����;m��Ԥ����������
bool use[20];//��ǽڵ��Ƿ�ѡ�� 
int str[20][20]={0};
int flag[20];
int map[20000][15];
int k;//������Ԥ����ж����ֿ������� 
int judgedfs(){
	int x1=1,x2=1;
	for(int i=0;i<m;i++){
		//�����Ԥ�������ǶԵ� 
		if(str[i][str[i][0]+1]==1 && x1){
			int j=1;//��ÿ�����ݵĵڶ���Ԫ�ؿ�ʼ����
			//&&Ϊ��ȷ���������; x<n��û��Ԥ�������˶�Ա������ 
			for(int x=0; j<=str[i][0] && x<n; x++){
				if(str[i][j]==flag[x]){
					j++;
				}
			}
			if(j<str[i][0]+1){//��������ݱ������ 
				x1=0;
			}
		}else{//�����Ԥ�������Ǵ��
			int j=1;
			for(int x=0; j<=str[i][0] && x<n; x++){
				if(str[i][j]==flag[x]){
					j++;
				}
			}
			if(j==str[i][0]+1){ 
				x2=0;
			}
		} 
		if(!x1 || !x2)//������һ��Ԥ����������ѭ�� 
			break;
	}
	//��Ϊ�淵����,���򷵻ؼ� 
	if(x1 && x2)
		return 1;
	else
		return 0;
}
void dfs(int begin){
	if(begin==n && judgedfs()){//�ݹ����:�Ѿ����������һ���˶�Ա 
		for(int i=0;i<n;i++){
			map[k][i]=flag[i];//��¼�½���ǰ���������˶�Ա
		}
		k++;//���ܵ����+1
	}
	if(begin<n){//ִ�еݹ����������� 
		for(int i=0;i<n;i++){
			if(use[i]){//��Ϊtrue,��δ��ѡ�� 
				flag[begin]=i;//��ǰ����λ�ü�¼���˶�Ա���±� 
				use[i]=false;//��ʱѡ��
				dfs(begin+1);//�ݹ����,������һ���˶�Ա
				use[i]=true;//���س�ֵ,����� 
			}
		}
	}
}

int main(){
	scanf("%d%d",&n,&m);
	getchar();//����˴��Ļس� 
	for(int i=0;i<m;i++){//m��Ԥ������ 
		//�����Ԥ������Ԥ�������,�����ѭ��Ҫ�õ� 
		scanf("%d",&str[i][0]);
		//���һ��(��str[i][str[i][0]+1)�����Ԥ���Ƿ���ȷ 
		for(int j=1;j<=str[i][0]+1;j++){
			scanf("%d",&str[i][j]);
		}
	}
	/*
	��ǵ�ǰλ���Ƿ��ѱ�ѡ��:��:false;��:true;��ֵ��Ϊtrue. 
	*/ 
	memset(use,true,sizeof(use));
	k=0;//�Կ��ܵ�����ó�ֵ 
	dfs(0);//�ӵ�һ���˶�Ա��ʼ����
	//��ʽ�������� 
	printf("%d\n",k);
	for(int i=0;i<k;i++){
		for(int j=0;j<n;j++){
			printf("%d ",map[i][j]);
		}
		printf("\n");
	}
	return 0;
}
