#include<stdio.h>
int main(){
	//n����ͷ����,sum����ͳ��,max������¼����������ͷ���� 
    int n,sum=0,max=0;
    //index������¼�����±� 
	int from[1000],index;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    	scanf("%d",&from[i]);
    for(int i=1;i<=n;i++){
        index=i;//��¼�±꣬��������һ����ͷ�� 
        sum=1;//�������ͷ����Ϊ1 
        while(from[index]<index && from[index]!=0){//��֤a[i]<i��a[i]!=0
            sum++;//���������ͷ����+1 
            index=from[index];//��a[i]����i 
        }
        if(max<sum)//��max����¼������ͷ���� 
           max=sum;
	}
    printf("%d",max);
    return 0;
}
