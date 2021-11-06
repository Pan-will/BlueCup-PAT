#include<stdio.h>
int a[30];
int main()
{
    int n,sum=0,maxx=0;
    int ans=0;//定义要输出的那个数 
    scanf("%d",&n);
    if(n<=0) return 0;//n<=0时不输出
    a[0]=0;
    int i;
    for(i=1;i<=n;i++)
    {
        scanf("%d",a+i);
		/*后输入的数不等于前一个输入的数*/ 
        if(a[i]!=a[i-1]){
            if(sum>maxx){
                maxx=sum;
                /*记录下前一个输入的数*/
                ans=a[i-1];
            }
            sum=1;
        }
        /*后输入的数等于前一个输入的数，则sum+1*/
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
