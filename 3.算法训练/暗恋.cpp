/*
"����ָ��":���ɫ�����ε����.
��ö�٣�
	����ö��ÿһ�������ε����ϽǶ��㣬������������εı䳤��
curMax������ӣ�i, j �������Ϊ���ϽǶ�����Թ�����curMaxΪ��
���������Σ���ôcurMax++�������ж��Ƿ��ܹ��ɸ���ģ�ֱ������
�������˳�ѭ�����ж���һ��ö�ٵĶ��㡣
*/
#include<stdio.h>
int r,c;
int a[200][200];
int anlian(int p,int q,int max){
	int love = a[p][q];//���ö��㸳�����love 
	if(p+max>r || q+max>c) return 0;//���ܳ���ԭ����Ĵ�С
	for(int i=p;i<p+max;i++){
        for(int j=q;j<q+max;j++){
            if(a[i][j] != love) return 0;
        }
    } 
	return 1;
}
int main(){
	scanf("%d%d",&r,&c);
	for(int i=0;i<r;i++){//�����ٳ� 
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int bian=0;//������������εı߳� 
    int max=1;//��� 
    for(int i=0;i<r;i++){//��,�ȹ̶���,�Ը����ϵ�ÿ������������̽ 
        for(int j=0;j<c;j++){//�� 
            while(1){
            	if(anlian(i,j,max)){
            		bian=max;
            		max++;
				}
				else
					break;
			}
        }
    }
    printf("%d",bian*bian);//���ָ�� 
    return 0;
}

