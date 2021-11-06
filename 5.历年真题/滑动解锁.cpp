/*
�������ݣ� 
1 2
2 3
3 4
4 5
5 6
6 7
7 8
8 9
*/
#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
#include<math.h>
int n;//���������߶���Ŀ
int path[9][2];//������Ƭ�� 
int ans=0;
bool use[9];//��Ǹ�λ���Ƿ񻬹� 
int hefa(int a,int b){
	//ö�ٳ�8���Ƿ�����
	int feifa[][3]={{1,3,2},{1,7,4},{1,9,5},{2,8,5},{3,7,5},{3,9,6},{4,6,5},{7,9,8}};
	for(int i=0;i<8;i++){
		if((a==feifa[i][0] && b==feifa[i][1]) || (a==feifa[i][1] && b==feifa[i][0])){
			if(!feifa[i][2]){
				return 0;
			}
		}
	}
	return 1;
}
void dfs(int number,int begin,int press[]){
	//���Ѿ�ѡ��2��������,�жϸո�ѡ�е����������Ƿ�Ϸ� 
	if(begin >= 2){
		int a = press[begin-1];
		int b = press[begin-2];
		if(!hefa(a,b)){
			return;
		}
	}
	/*���Ѿ�ѡ�е����ִﵽ��Ҫѡ�������(number)��
	 ���ѿ�����Ƭ�αȽ�,����ѡ�е�Ƭ�δ������ѿ�����Ƭ��������,�����,���򷵻ء� 
	*/ 
	if(begin==number){
		for(int i=0;i<n;i++){
			int a = path[i][0];
			int b = path[i][1];
			for(int j=0;j<=begin-1;j++){
				if((a==press[j] && b==press[j+1]) || (b==press[j] && a==press[j+1])){
					break;
				}
				if(j==begin-2)
					return;
			}
		}
		ans++;
		return;
	}
	else if(begin>number){//ѡ���� 
		return;
	}
	//dfs���� 
	for(int i=1;i<=9;i++){
		if(!use[i]){
			use[i] = true;
			press[begin] = i;
			dfs(number,begin+1,press);//������һ�� 
			use[i] = false;
		}
	}
}
int main(){
	memset(use,false,sizeof(use));
	scanf("%d",&n);
	getchar();//����س� 
	int press[10]={0};//��ŵ�ǰ�������ֵ�����
	for(int i=0;i<n;i++){
		scanf("%d%d",&path[i][0],&path[i][1]);
	}
	for(int i=n>4?n:4; i<=9; i++){
		/*�������壺
			i:���е�����;
			0:begin:����λ�ã�ѡ���ڼ�����;
			press:��ŵ�ǰ�������ֵ����� .
		*/
		dfs(i,0,press);
	}
	printf("%d",ans);
	return 0;
}
