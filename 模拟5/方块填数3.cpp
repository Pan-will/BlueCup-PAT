/*122368*/
#include<stdio.h>
#include<string.h>
bool use[15];
int a[15];
int count=0;
void dfs(int begin){
	if(begin==6){//Ϊ�˼ӿ���������ѡ������ʱ���жϳ������ 
		if((a[0]*a[1]+a[2]*a[3]!=a[4]*a[5]))
			return;
	}
	if(begin==14){
		if((a[0]*a[1]+a[2]*a[3]==a[4]*a[5]) && (a[6]*a[7]-a[8]*a[9]==a[10]*a[11]))
			count++;
		return;
	}
	for(int i=1;i<=13;i++){//���ѡ���֣�1������13 
		if(!use[i]){
			use[i] = true;
			a[begin] = i;
			dfs(begin+1);
			use[i] = false;
		}
	}
}
int main(){
	memset(use,false,sizeof(use));//����ֵ 
	dfs(0);
	printf("%d",count);
	return 0;
} 

