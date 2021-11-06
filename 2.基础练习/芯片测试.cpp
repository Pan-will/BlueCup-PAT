#include<stdio.h>
#include<string.h>

int a[30][30];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        	scanf("%d",&a[i][j]);
    }
    int j;
    for(int i=1;i<=n;i++)
    {
        int s=0;
        for(j=1;j<=n;j++)
        {
            s+=a[j][i];//代表有一半以上的芯片同意了此芯片是好的芯片，所以此芯片一定是一个好的芯片
        }
        if(s>n/2)
        {
        	printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}
