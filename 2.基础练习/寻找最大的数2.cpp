#include<stdio.h>
int a[30];
int main()
{
    int n,sum=0,maxx=0;
    int ans=0;//����Ҫ������Ǹ��� 
    scanf("%d",&n);
    if(n<=0) return 0;//n<=0ʱ�����
    a[0]=0;
    int i;
    for(i=1;i<=n;i++)
    {
        scanf("%d",a+i);
		/*���������������ǰһ���������*/ 
        if(a[i]!=a[i-1]){
            if(sum>maxx){
                maxx=sum;
                /*��¼��ǰһ���������*/
                ans=a[i-1];
            }
            sum=1;
        }
        /*�������������ǰһ�������������sum+1*/
        else
            sum++;
    }
    if(sum>maxx)
    {
        maxx=sum;
        ans=a[i-1];
    }  
    printf("%d\n",ans);  
    return 0;  
}
