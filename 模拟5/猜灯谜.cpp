/*8 9 7*/
#include<string.h>
#include<stdio.h>
bool use[10];//���ʱ������
int a[10];//�ж�a��b�Ļ��Ƿ���ֹ�

void dfs(int begin){  
    if(begin==6){
    	int yin1=a[0]*100+a[1]*10+a[2];
    	int yin2=a[0]*100+a[1]*10+a[2];
    	int yin3=a[0]*100000+a[3]*10000+a[4]*1000+a[5]*100+a[6]*10+a[1];
		if(yin1*yin2==yin3){
			printf("%d %d %d\n",a[0],a[1],a[2]);
		}
        return;
    }  
    for(int i=0; i<=9; i++){
        if(!use[i]){
        	use[i] = true;
        	a[begin]=i;
        	dfs(begin+1);
        	use[i] = false;
		}
    }  
}  
int main(){  
    memset(use,false,sizeof(use));
    dfs(0);
	return 0;
}
